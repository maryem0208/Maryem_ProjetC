#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "annee.h"


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
	gchar* annee;
	gfloat* temperature;

	annees a;

	GtkTreeModel *model = gtk_tree_view_get_model(treeview);

	if(gtk_tree_model_get_iter(model,&iter,path))
	{
	gtk_tree_model_get (GTK_LIST_STORE(model), &iter,0, &annee,1,&temperature,-1);
	strcpy(a.annee,annee);
	a.temperature=*temperature;

	}
}


void
on_Ajouter1_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *gestion_annee_la_plus_seche;
GtkWidget *ajouter_annees;

ajouter_annees=create_ajouter_annees();
gtk_widget_show(ajouter_annees);
gestion_annee_la_plus_seche=lookup_widget(objet_graphique,"gestion_annee_la_plus_seche");
gtk_widget_hide(gestion_annee_la_plus_seche);
}


void
on_afficher_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *treeview1;
treeview1=lookup_widget(objet_graphique,"treeview1");
afficher_annee(treeview1);
}


void
on_supprimer_clicked                   (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *gestion_annee_la_plus_seche;
GtkWidget *supprimer_annees;

supprimer_annees=create_supprimer_annees();
gtk_widget_show(supprimer_annees);
gestion_annee_la_plus_seche=lookup_widget(objet_graphique,"gestion_annee_la_plus_seche");
gtk_widget_hide(gestion_annee_la_plus_seche);
}


void
on_AnneeSeche_clicked                  (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *gestion_annee_la_plus_seche;
gestion_annee_la_plus_seche=lookup_widget(objet_graphique,"gestion_annee_la_plus_seche");
annee_la_plus_seche();
GtkWidget *treeview1;
treeview1=lookup_widget(objet_graphique,"treeview1");
afficher_annee_seche(treeview1);

}


void
on_ajouter_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
annees a;

GtkWidget*input1;
GtkWidget*input2;
GtkWidget *ajouter_annees;
GtkWidget*sortie4;
input1=lookup_widget(objet_graphique,"entry3");
input2=lookup_widget(objet_graphique,"entry7");
sortie4=lookup_widget(objet_graphique,"label35");

strcpy(a.annee,gtk_entry_get_text(GTK_ENTRY(input1)));
a.temperature=atof(gtk_entry_get_text(GTK_ENTRY(input2)));

ajouter_annee(a);
GdkColor color;
gdk_color_parse("red",&color);
gtk_widget_modify_fg(sortie4,GTK_STATE_NORMAL,&color);
gtk_entry_set_text(GTK_ENTRY(input1),"");
gtk_entry_set_text(GTK_ENTRY(input2),"");
gtk_label_set_text(GTK_LABEL(sortie4),"ajout effectué avec succes");
}


void
on_retour1_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *gestion_annee_la_plus_seche;
GtkWidget *ajouter_annees;

gestion_annee_la_plus_seche=create_gestion_annee_la_plus_seche();
gtk_widget_show(gestion_annee_la_plus_seche);
ajouter_annees=lookup_widget(objet_graphique,"ajouter_annees");
gtk_widget_hide(ajouter_annees);
}


void
on_retour3_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *gestion_annee_la_plus_seche;
GtkWidget *supprimer_annees;

gestion_annee_la_plus_seche=create_gestion_annee_la_plus_seche();
gtk_widget_show(gestion_annee_la_plus_seche);
supprimer_annees=lookup_widget(objet_graphique,"supprimer_annees");
gtk_widget_hide(supprimer_annees);
}


void
on_confirmer_clicked                   (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *sortie5;
char annee[10];
input1=lookup_widget(objet_graphique,"entry21");
sortie5=lookup_widget(objet_graphique,"label37");
strcpy(annee,gtk_entry_get_text(GTK_ENTRY(input1)));
supprimer_annee(annee);
GdkColor color;
gdk_color_parse("red",&color);
gtk_widget_modify_fg(sortie5,GTK_STATE_NORMAL,&color);
gtk_entry_set_text(GTK_ENTRY(input1), "");
gtk_label_set_text(GTK_LABEL(sortie5),"Suppression effectué avec succes");
}

