#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "plante.h"


void
on_afficher_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *treeview1;
treeview1=lookup_widget(objet_graphique,"treeview1");
afficher_plante(treeview1);
}


void
on_supprimer_clicked                   (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Gestiondeplantation;
GtkWidget *Supprimer_plante;

Supprimer_plante=create_Supprimer_plante();
gtk_widget_show(Supprimer_plante);
Gestiondeplantation=lookup_widget(objet_graphique,"Gestiondeplantation");
gtk_widget_hide(Gestiondeplantation);
}


void
on_chercher_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
char id[30];
GtkWidget *input18;

input18=lookup_widget(objet_graphique,"entry20");

strcpy(id,gtk_entry_get_text(GTK_ENTRY(input18)));
 
rechercher_plante(id);

gtk_entry_set_text(GTK_ENTRY(input18),"");
GtkWidget *treeview1;
treeview1=lookup_widget(objet_graphique,"treeview1");
afficher_plante_rechercher(treeview1);

}


void
on_modifier1_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Gestiondeplantation;
GtkWidget *Modifier_plante;
GtkWidget *treeview1;
GtkTreeSelection *selection;
GtkTreeModel *model;
GtkTreeIter iter;
	gchar* nom;
	gchar* id;
	gchar* type;
	gchar* saison;
	gint* jour;
	gint* mois;
	gint* annee;
	gint* nombre;
	plante t;

GtkWidget*input1;
GtkWidget*input2;
GtkWidget*input3;
GtkWidget*input4;
GtkWidget*input5;
GtkWidget*input6;
GtkWidget*input7;
GtkWidget*input8;
Gestiondeplantation=lookup_widget(objet_graphique,"Gestiondeplantation");
treeview1=lookup_widget(Gestiondeplantation,"treeview1");
selection=gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview1));
if(gtk_tree_selection_get_selected(selection,&model,&iter)){
gtk_tree_model_get(GTK_LIST_STORE(model), &iter,0, &nom,1,&id,2,&type,3,&saison,4,&jour,5,&mois ,6,&annee ,7,&nombre,-1);
	strcpy(t.nom,nom);
	strcpy(t.id,id);
	strcpy(t.type,type);
	strcpy(t.saison,saison);
	/*t.d.jour=*jour;
	t.d.mois=*mois;
	t.d.annee=*annee;
	t.nombre=*nombre;*/
	
}
gtk_widget_hide(Gestiondeplantation);
Modifier_plante=create_Modifier_plante();
gtk_widget_show(Modifier_plante);
input1=lookup_widget(Modifier_plante,"entry9");
input2=lookup_widget(Modifier_plante,"entry11");
input3=lookup_widget(Modifier_plante,"entry10");
input4=lookup_widget(Modifier_plante,"combobox2");
input5=lookup_widget(Modifier_plante,"spinbutton4");
input6=lookup_widget(Modifier_plante,"spinbutton5");
input7=lookup_widget(Modifier_plante,"spinbutton6");
input8=lookup_widget(Modifier_plante,"spinbutton8");

gtk_entry_set_text (GTK_ENTRY(input1),t.nom);
gtk_entry_set_text (GTK_ENTRY(input2),t.id);
gtk_entry_set_text (GTK_ENTRY(input3),t.type);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(input5),t.d.jour);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(input6),t.d.mois);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(input7),t.d.annee);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(input8),t.nombre);


}


void
on_ajouter_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
plante t;

GtkWidget*input1;
GtkWidget*input2;
GtkWidget*input3;
GtkWidget*input4;
GtkWidget*nombre;
GtkWidget*jour;
GtkWidget*mois;
GtkWidget*annee;
GtkWidget*sortie1;

GtkWidget *Ajouter_plante;

input1=lookup_widget(objet_graphique,"entry3");
input2=lookup_widget(objet_graphique,"entry7");
input3=lookup_widget(objet_graphique,"entry5");
input4=lookup_widget(objet_graphique,"combobox1");
jour=lookup_widget(objet_graphique,"spinbutton1");
mois=lookup_widget(objet_graphique,"spinbutton2");
annee=lookup_widget(objet_graphique,"spinbutton3");
nombre=lookup_widget(objet_graphique,"spinbutton7");


sortie1=lookup_widget(objet_graphique,"label35");

strcpy(t.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(t.id,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(t.type,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(t.saison,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input4)));
t.d.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
t.d.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
t.d.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));
t.nombre=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(nombre));
ajouter_plante(t);
GdkColor color;
gdk_color_parse("red",&color);
gtk_widget_modify_fg(sortie1,GTK_STATE_NORMAL,&color);

gtk_entry_set_text(GTK_ENTRY(input1),"");
gtk_entry_set_text(GTK_ENTRY(input2),"");
gtk_entry_set_text(GTK_ENTRY(input3),"");
gtk_label_set_text(GTK_LABEL(sortie1),"ajout effectué avec succes");

}


void
on_retour1_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Gestiondeplantation;
GtkWidget *Ajouter_plante;

Gestiondeplantation=create_Gestiondeplantation();
gtk_widget_show(Gestiondeplantation);
Ajouter_plante=lookup_widget(objet_graphique,"Ajouter_plante");
gtk_widget_hide(Ajouter_plante);
}


void
on_retour2_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Gestiondeplantation;
GtkWidget *Modifier_plante;

Gestiondeplantation=create_Gestiondeplantation();
gtk_widget_show(Gestiondeplantation);
Modifier_plante=lookup_widget(objet_graphique,"Modifier_plante");
gtk_widget_hide(Modifier_plante);
}


void
on_retour3_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Gestiondeplantation;
GtkWidget *Supprimer_plante;

Gestiondeplantation=create_Gestiondeplantation();
gtk_widget_show(Gestiondeplantation);
Supprimer_plante=lookup_widget(objet_graphique,"Supprimer_plante");
gtk_widget_hide(Supprimer_plante);
}


void
on_modifier_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
plante t;
GtkWidget*input1;
GtkWidget*input2;
GtkWidget*input3;
GtkWidget*input4;
GtkWidget*nombre;
GtkWidget*jour;
GtkWidget*mois;
GtkWidget*annee;
GtkWidget *sortie2;
GtkWidget *Modifier_plante;

Modifier_plante=lookup_widget(objet_graphique,"Modifier_plante");
input1=lookup_widget(objet_graphique,"entry11");
input2=lookup_widget(objet_graphique,"entry9");
input3=lookup_widget(objet_graphique,"entry10");
input4=lookup_widget(objet_graphique,"combobox2");
jour=lookup_widget(objet_graphique,"spinbutton4");
mois=lookup_widget(objet_graphique,"spinbutton5");
annee=lookup_widget(objet_graphique,"spinbutton6");
nombre=lookup_widget(objet_graphique,"spinbutton8");

sortie2=lookup_widget(objet_graphique,"label36");

strcpy(t.id,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(t.nom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(t.type,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(t.saison,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input4)));
t.d.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
t.d.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
t.d.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));
t.nombre=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(nombre));

modifier_plante(t);
GdkColor color;
gdk_color_parse("red",&color);
gtk_widget_modify_fg(sortie2,GTK_STATE_NORMAL,&color);
gtk_entry_set_text(GTK_ENTRY(input1),"");
gtk_entry_set_text(GTK_ENTRY(input2),"");
gtk_entry_set_text(GTK_ENTRY(input3),"");
gtk_label_set_text(GTK_LABEL(sortie2),"Modification effectué avec succes");
}



void
on_confirmer_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *sortie3;
char id[30];
input1=lookup_widget(objet_graphique,"entry21");
sortie3=lookup_widget(objet_graphique,"label37");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(input1)));
  
supprimer_plante(id);
GdkColor color;
gdk_color_parse("red",&color);
gtk_widget_modify_fg(sortie3,GTK_STATE_NORMAL,&color);
gtk_entry_set_text(GTK_ENTRY(input1), "");
gtk_label_set_text(GTK_LABEL(sortie3),"Suppression effectué avec succes");
}


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
	gchar* nom;
	gchar* id;
	gchar* type;
	gchar* saison;
	gint* jour;
	gint* mois;
	gint* annee;
	gint* nombre;
	plante t;

	GtkTreeModel *model = gtk_tree_view_get_model(treeview);

	if(gtk_tree_model_get_iter(model,&iter,path))
	{
	gtk_tree_model_get (GTK_LIST_STORE(model), &iter,0, &nom,1,&id,2,&type,3,&saison,4,&jour,5,&mois ,6,&annee ,7,&nombre,-1);
	strcpy(t.nom,nom);
	strcpy(t.id,id);
	strcpy(t.type,type);
	strcpy(t.saison,saison);
	t.d.jour=*jour;
	t.d.mois=*mois;
	t.d.annee=*annee;
	t.nombre=*nombre;
	afficher_plante(treeview);
	}
}


void
on_Ajouter1_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Gestiondeplantation;
GtkWidget *Ajouter_plante;

Ajouter_plante=create_Ajouter_plante();
gtk_widget_show(Ajouter_plante);
Gestiondeplantation=lookup_widget(objet_graphique,"Gestiondeplantation");
gtk_widget_hide(Gestiondeplantation);
}

