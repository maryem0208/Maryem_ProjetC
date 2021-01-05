#include <gtk/gtk.h>
  GtkWidget *acceuil;
  GtkWidget *gestion;
typedef struct troupeaux troupeaux ;
struct troupeaux{
char id[30];
char sexe[30];
char type[30];
char date[30];
char prix[9];
};



void
on_AcceuilGestion_clicked              (GtkButton       *button,
                                        gpointer         user_data);


void
on_GestionAcceuil_clicked              (GtkButton       *button,
                                        gpointer         user_data);


void
on_bmodifier_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_bsupprimer_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_bafficher12_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_cherchertroupeaux_clicked          (GtkButton       *button,
                                        gpointer         user_data);



void
on_Ajoutertroupeaux_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_Modifiertroupeaux_clicked           (GtkButton       *button,
                                        gpointer         user_data);


