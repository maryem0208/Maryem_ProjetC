#include <gtk/gtk.h>


void
on_treeview_capt_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_treeview_enreg_row_activated        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_gestion_clicked                     (GtkWidget       *button,
                                        gpointer         user_data);

void
on_ajouter_capt_clicked                (GtkWidget       *button,
                                        gpointer         user_data);

void
on_modifier_capt_clicked               (GtkWidget       *button,
                                        gpointer         user_data);

void
on_supprimer_capt_clicked              (GtkWidget       *button,
                                        gpointer         user_data);

void
on_enreg_clicked                       (GtkWidget       *button,
                                        gpointer         user_data);

void
on_ajout_enreg_clicked                 (GtkWidget       *button,
                                        gpointer         user_data);




void
on_Ajout_ok_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);

void
on_retour_ajout_clicked                (GtkWidget       *button,
                                        gpointer         user_data);

void
on_retour_modif_clicked                (GtkWidget       *button,
                                        gpointer         user_data);

void
on_modif_ok_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);

void
on_supprim_ok_clicked                  (GtkWidget       *button,
                                        gpointer         user_data);

void
on_retour_supp_clicked                 (GtkWidget       *button,
                                        gpointer         user_data);

void
on_enreg_ok_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);

void
on_retour_enreg_clicked                (GtkWidget       *button,
                                        gpointer         user_data);

void
on_treeview_alarm_row_activated        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_bt_alarm_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);

void
on_bt_marque_def_clicked               (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_rb_ajout1_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rb_ajout2_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rb_modif1_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rb_modif2_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
