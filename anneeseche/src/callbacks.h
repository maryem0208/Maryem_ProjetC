#include <gtk/gtk.h>


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_Ajouter1_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_afficher_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_supprimer_clicked                   (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_AnneeSeche_clicked                  (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_ajouter_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_retour1_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_retour3_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data);

void
on_confirmer_clicked                   (GtkButton       *objet_graphique,
                                        gpointer         user_data);
