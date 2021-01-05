#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include"equipement.h"
#include<string.h>

GtkWidget *window_home;
//GtkWidget *window_panne;
//GtkWidget *window_utilisation;
GtkWidget *window_modification;
equipement_agricole selected_equipement;

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
gchar *str_data;
GtkListStore *list_store;
list_store = gtk_tree_view_get_model(treeview);
GtkTreeIter iter;
if(gtk_tree_model_get_iter(GTK_TREE_MODEL(list_store),&iter,path))
{
gtk_tree_model_get(GTK_TREE_MODEL(list_store),&iter,0,&str_data,-1);
}
strcpy(selected_equipement.numero_serie,str_data);
FILE *f;
equipement_agricole E;
f=fopen("equipement.bin","rb");
while(!feof(f))
{
fread(&E,sizeof(equipement_agricole),1,f);
if(strcmp(selected_equipement.numero_serie,E.numero_serie)==0){selected_equipement=E;}
}
fclose(f);
}


void
on_afficher_clicked                    (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window_home;
GtkWidget *treeview1;

window_home=lookup_widget (objet,"window_home");
treeview1=lookup_widget (window_home,"treeview1");
afficher(treeview1);
}


void
on_modifier_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window_modification;
GtkWidget *add_input;
add_input = create_window_modification();
gtk_widget_show (add_input);
GtkWidget *numero_serie,*marque,*modele,*type;

numero_serie = lookup_widget (add_input,"entry_num_serie_modif");
type = lookup_widget (add_input,"combobox2_modif");
marque = lookup_widget (add_input,"entry_marque_modif");
modele = lookup_widget (add_input,"entry_modele_modif");


gtk_entry_set_text(numero_serie,selected_equipement.numero_serie);
gtk_entry_set_text(marque,selected_equipement.marque);
gtk_entry_set_text(modele,selected_equipement.modele);
gtk_combo_box_set_active(type,selected_equipement.type);
}

//-----------------------suppression---------------------////////////
void
on_supprimer_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window_home;
window_home=lookup_widget(button,"window_home");
supprimer(selected_equipement);
GtkWidget *tree;
tree=lookup_widgeth(window_home,"treeview1");
afficher(tree);
}


//////////////rechercher/////////////////

void
on_recherche_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_home;
GtkWidget *num_serie;
num_serie= lookup_widget (objet,"entry_num_serie_recherche");
char num_ss[30];
strcpy(num_ss,gtk_entry_get_text(GTK_ENTRY(num_serie)));
GtkWidget *treeview1;
window_home=lookup_widget (objet,"window_home");
treeview1=lookup_widget (objet,"treeview1");
recherche(num_ss,treeview1);
}

/////////////ajouter/////////////////
void
on_button_ajouter_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
equipement_agricole E;
FILE *f=NULL;
GtkWidget *numero_serie,*marque,*modele,*type;
numero_serie = lookup_widget (objet_graphique,"entry_num_serie_ajout");
type = lookup_widget (objet_graphique,"combobox1_ajout");
marque = lookup_widget (objet_graphique,"entry_marque_ajout");
modele = lookup_widget (objet_graphique,"entry_modele_ajout");

strcpy(E.numero_serie,gtk_entry_get_text(GTK_ENTRY(numero_serie)));
strcpy(E.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(type))); 
strcpy(E.marque,gtk_entry_get_text(GTK_ENTRY(marque)));
strcpy(E.modele,gtk_entry_get_text(GTK_ENTRY(modele)));
strcpy(E.panne,"non");
strcpy(E.status,"libre");
ajouter(E);
}
/////////////modifier/////////////

void
on_button_modifier_modif_clicked       (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
equipement_agricole E;
GtkWidget *type,*marque,*modele,*numero_serie,*panne0,*panne1,*status0,*status1;

numero_serie = lookup_widget (objet_graphique,"entry_num_serie_modif");
type = lookup_widget (objet_graphique,"combobox2_modif");
marque = lookup_widget (objet_graphique,"entry_marque_modif");
modele = lookup_widget (objet_graphique,"entry_modele_modif");

strcpy(E.numero_serie,gtk_entry_get_text(GTK_ENTRY(numero_serie)));
strcpy(E.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(type))); 
strcpy(E.marque,gtk_entry_get_text(GTK_ENTRY(marque)));
strcpy(E.modele,gtk_entry_get_text(GTK_ENTRY(modele)));


panne0=lookup_widget (objet_graphique,"radiobutton_non_panne");
panne1=lookup_widget (objet_graphique,"radiobutton_oui_panne");
status0=lookup_widget (objet_graphique,"radiobutton_libre_status");
status1=lookup_widget (objet_graphique,"radiobutton_occupee_status");

if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(panne0)))
{
strcpy(E.panne,"non");
}
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(panne1)))
{
strcpy(E.panne,"oui");
}
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(status0)))
{
strcpy(E.status,"libre");
}
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(status1)))
{
strcpy(E.status,"occupé");
}
supprimer(E);
ajouter(E);
}


void
on_button_retour_modifier_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *Window_modification;
window_modification=lookup_widget(objet,"window_modification");
gtk_widget_destroy(window_modification);
}

