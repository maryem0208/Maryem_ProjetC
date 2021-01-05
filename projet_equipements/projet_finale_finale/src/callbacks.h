#include <gtk/gtk.h>


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_afficher_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_modifier_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_supprimer_clicked                   (GtkWidget       *button,
                                        gpointer         user_data);

void
on_declarer_panne_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_utiliser_equipement_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_equipement_plus_utilise_clicked     (GtkButton       *button,
                                        gpointer         user_data);

void
on_recherche_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_ajouter_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_modifier_modif_clicked       (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_retour_modifier_clicked      (GtkWidget       *objet,
                                        gpointer         user_data);
