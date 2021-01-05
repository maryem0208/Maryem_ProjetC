#include <gtk/gtk.h>


void
on_afficher_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_supprimer_clicked                   (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_chercher_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_modifier1_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_ajouter_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_retour1_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_retour2_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_modifier_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_retour3_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_confirmer_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_Ajouter1_clicked                    (GtkButton       *button,
                                        gpointer         user_data);
