#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "capteur.h"
#include "enregistrement.h"

int x;
int y;


void
on_treeview_capt_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	GtkTreeIter iter;
	gchar* matricule;
	gchar* marque;
	gchar* type;
	gchar* etat_def;
	gint* val_min;
	gint* val_max;
	capteur capt;


	GtkTreeModel *model = gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model,&iter, path))
{
gtk_tree_model_get (GTK_LIST_STORE(model), &iter, 0, &matricule, 1, &marque, 2, &type, 3, &etat_def, 4, &val_min, 5, &val_max, -1);
strcpy(capt.matricule,matricule);
strcpy(capt.marque,marque);
strcpy(capt.type,type);
strcpy(capt.etat_def,etat_def);
capt.val_min=val_min;
capt.val_max=val_max;
afficher_capteurs(treeview);
}
}


void
on_bt_alarm_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
	
GtkWidget *espace_capteur;
GtkWidget *alarmante;
GtkWidget *treeview_alarm;
espace_capteur=lookup_widget(objet,"espace_capteur");

gtk_widget_destroy(alarmante);
alarmante=lookup_widget(objet,"alarmante");
alarmante=create_alarmante();

gtk_widget_show(alarmante);

treeview_alarm=lookup_widget(alarmante,"treeview_alarm");

afficher_alarmantes(treeview_alarm);

}
// ---------------------------------------------
void
on_treeview_alarm_row_activated        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	GtkTreeIter iter;
	gint* num;
	gfloat *valeur;
	enregistrement enreg;


	GtkTreeModel *model = gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model,&iter, path))
{
gtk_tree_model_get (GTK_LIST_STORE(model), &iter, 0, &num, 1, &valeur  -1);

afficher_alarmantes(treeview);
}
}
// ---------------------------------------------
void
on_treeview_enreg_row_activated        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	GtkTreeIter iter;
	gint* num;
	date* date_enr;
	horaire* horaire_enr;
	gfloat *valeur;
	enregistrement enreg;


	GtkTreeModel *model = gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model,&iter, path))
{
gtk_tree_model_get (GTK_LIST_STORE(model), &iter, 0, &num, 1, &date_enr, 2, &horaire_enr, 3, &valeur  -1);

afficher_enregistrement(treeview);
}
}


void
on_gestion_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
	

GtkWidget *espace_capteur;
GtkWidget *gestion_capteur;
GtkWidget *treeview_capt;
espace_capteur=lookup_widget(objet,"espace_capteur");

gtk_widget_destroy(gestion_capteur);
gestion_capteur=lookup_widget(objet,"gestion_capteur");
gestion_capteur=create_gestion_capteur();

gtk_widget_show(gestion_capteur);

treeview_capt=lookup_widget(gestion_capteur,"treeview_capt");

afficher_capteurs(treeview_capt);
}


void
on_ajouter_capt_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *ajouter_capteur;
	GtkWidget *gestion_capteur;
	gestion_capteur=lookup_widget(objet,"gestion_capteur");
	gtk_widget_destroy(gestion_capteur);
	ajouter_capteur = create_ajouter_capteur();
	gtk_widget_show(ajouter_capteur);
}


void
on_modifier_capt_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
 	GtkWidget *gestion_capteur;
	GtkWidget *modifier_capteur;
	GtkWidget *combo;
	FILE *f;
	char mat[30];
	gestion_capteur=lookup_widget(objet,"gestion_capteur");
	gtk_widget_destroy(gestion_capteur);
	modifier_capteur = create_modifier_capteur();
	combo=lookup_widget(modifier_capteur,"cb_mat_modif");
	f=fopen("capteur.txt","r");
	while(fscanf(f,"%s %*s %*s %*s %*d %*d\n",mat)!=EOF)
	{
		gtk_combo_box_append_text(GTK_COMBO_BOX(combo),mat);
	}
	fclose(f);
	gtk_widget_show(modifier_capteur);
}


void
on_supprimer_capt_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
	
 	GtkWidget *gestion_capteur;
	GtkWidget *supprimer_capteur;
	GtkWidget *combo;
	FILE *f;
	char mat[30];
	gestion_capteur=lookup_widget(objet,"gestion_capteur");
	gtk_widget_destroy(gestion_capteur);
	supprimer_capteur = create_supprimer_capteur();
	combo=lookup_widget(supprimer_capteur,"combobox_supp");
	f=fopen("capteur.txt","r");
	while(fscanf(f,"%s %*s %*s %*s %*d %*d\n",mat)!=EOF)
	{
		gtk_combo_box_append_text(GTK_COMBO_BOX(combo),mat);
	}
	fclose(f);
	gtk_widget_show(supprimer_capteur);

}


void
on_enreg_clicked                       (GtkWidget       *objet,
                                        gpointer         user_data)
{
	

GtkWidget *espace_capteur;
GtkWidget *enregistrement;
GtkWidget *treeview_enreg;
espace_capteur=lookup_widget(objet,"espace_capteur");

gtk_widget_destroy(enregistrement);
enregistrement=lookup_widget(objet,"enregistrement");
enregistrement=create_enregistrement();

gtk_widget_show(enregistrement);

treeview_enreg=lookup_widget(enregistrement,"treeview_enreg");

afficher_enregistrement(treeview_enreg);

}


void
on_ajout_enreg_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *ajouter_enregistrement, *enregistrement;
	GtkWidget *combo;
	FILE *f;
	char mat[30];
	enregistrement=lookup_widget(objet,"enregistrement");
	gtk_widget_destroy(enregistrement);
	ajouter_enregistrement = create_ajouter_enregistrement();
	combo=lookup_widget(ajouter_enregistrement,"cb_enreg");
	f=fopen("capteur.txt","r");
	while(fscanf(f,"%s %*s %*s %*s %*d %*d\n",mat)!=EOF)
	{
		gtk_combo_box_append_text(GTK_COMBO_BOX(combo),mat);
	}
	fclose(f);
	gtk_widget_show(ajouter_enregistrement);
}


void
on_enreg_ok_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
	enregistrement enreg;

	GtkWidget *mat, *jour, *mois, *annee, *heure, *minute, *val;
	mat=lookup_widget(objet,"cb_enreg");
	jour=lookup_widget(objet,"spinbutton_jour");
	mois=lookup_widget(objet,"spinbutton_mois");
	annee=lookup_widget(objet,"spinbutton_annee");
	heure=lookup_widget(objet,"spinbutton_heure");
	minute=lookup_widget(objet,"spinbutton_minute");
	val=lookup_widget(objet,"entry_val");
	
	strcpy(enreg.matricule,gtk_combo_box_get_active_text(GTK_COMBO_BOX(mat)));
enreg.dateE.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
enreg.dateE.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
enreg.dateE.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));
enreg.horaireE.heure=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(heure));
enreg.horaireE.minute=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(minute));
enreg.valeur=atof(gtk_entry_get_text(GTK_ENTRY(val)));

ajouter_enregistrement(enreg);
}


void
on_rb_ajout1_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if ( gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{x=1;}
}


void
on_rb_ajout2_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if ( gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{x=2;}

}


void
on_rb_modif1_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if ( gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{y=1;}
}




void
on_rb_modif2_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if ( gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
{y=2;}
}


void
on_Ajout_ok_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
	capteur capt;
	char typeS[30]="Temperature";
GtkWidget *input,*mat;
input= lookup_widget(objet,"entry_marque");

mat= lookup_widget(objet,"entry_mat");
strcpy(capt.marque,gtk_entry_get_text(GTK_ENTRY(input)));
if (x==1) 
{strcpy(typeS,"Temperature");}
else 
{if (x==2) 
{strcpy(typeS,"Humidite");}}
strcpy(capt.matricule,gtk_entry_get_text(GTK_ENTRY(mat)));
strcpy(capt.etat_def,"N/A");
strcpy(capt.type,typeS);
ajouter_capteur(capt);
}


void
on_retour_ajout_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
	
GtkWidget *ajouter_capteur;
GtkWidget *gestion_capteur;
GtkWidget *treeview_capt;
ajouter_capteur=lookup_widget(objet,"ajouter_capteur");

gtk_widget_destroy(ajouter_capteur);
gestion_capteur=lookup_widget(objet,"gestion_capteur");
gestion_capteur=create_gestion_capteur();

gtk_widget_show(gestion_capteur);

treeview_capt=lookup_widget(gestion_capteur,"treeview_capt");

afficher_capteurs(treeview_capt);
}


void
on_retour_modif_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
		
GtkWidget *modifier_capteur;
GtkWidget *gestion_capteur;
GtkWidget *treeview_capt;
modifier_capteur=lookup_widget(objet,"modifier_capteur");

gtk_widget_destroy(modifier_capteur);
gestion_capteur=lookup_widget(objet,"gestion_capteur");
gestion_capteur=create_gestion_capteur();

gtk_widget_show(gestion_capteur);

treeview_capt=lookup_widget(gestion_capteur,"treeview_capt");

afficher_capteurs(treeview_capt);
}


void
on_modif_ok_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
	capteur capt;
	char typeS[30]="Temperature";
GtkWidget *input,*type,*mat;
mat= lookup_widget(objet,"cb_mat_modif");
input= lookup_widget(objet,"entry_marque_modif");

strcpy(capt.matricule,gtk_combo_box_get_active_text(GTK_COMBO_BOX(mat)));
strcpy(capt.marque,gtk_entry_get_text(GTK_ENTRY(input)));
if (y==1) 
{strcpy(typeS,"Temperature");}
else 
{if (y==2) 
{strcpy(typeS,"Humidite");}}

strcpy(capt.type,typeS);

modifier_capteur(capt);
}


void
on_supprim_ok_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{	capteur capt;
GtkWidget *input;
input= lookup_widget(objet,"combobox_supp");
strcpy(capt.matricule,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input)));
supprimer_capteur(capt);
}


void
on_retour_supp_clicked                 (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *supprimer_capteur;
GtkWidget *gestion_capteur;
GtkWidget *treeview_capt;
supprimer_capteur=lookup_widget(objet,"supprimer_capteur");

gtk_widget_destroy(supprimer_capteur);
gestion_capteur=lookup_widget(objet,"gestion_capteur");
gestion_capteur=create_gestion_capteur();

gtk_widget_show(gestion_capteur);

treeview_capt=lookup_widget(gestion_capteur,"treeview_capt");

afficher_capteurs(treeview_capt);

}





void
on_retour_enreg_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *ajouter_enregistrement;
GtkWidget *enregistrement;
GtkWidget *treeview_enreg;
ajouter_enregistrement=lookup_widget(objet,"ajouter_enregistrement");

gtk_widget_destroy(ajouter_enregistrement);
enregistrement=lookup_widget(objet,"enregistrement");
enregistrement=create_enregistrement();

gtk_widget_show(enregistrement);

treeview_enreg=lookup_widget(enregistrement,"treeview_enreg");

afficher_enregistrement(treeview_enreg);
}





void
on_bt_marque_def_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *marque_def;
	GtkWidget *label;
	FILE *f;
	char marque[30];
	char marqueMax[30];
	int max=0;
	int nbr,i,j,cp;
	char tab[100][30];
	marque_def=lookup_widget(objet,"marque_def");
	marque_def = create_marque_def();
	label=lookup_widget(marque_def,"label_marque");
	strcpy(marqueMax,"N/A");
	f=fopen("defect.txt","a+");
	if(f!=NULL)
	{
	i=0;
	while(fscanf(f,"%s\n",marque)!=EOF)
	{
		strcpy(tab[i],marque);
		i=i+1;
	}
	for(j=0;j<i;j++)
	{
		nbr=0;
		for(cp=0;cp<i;cp++)
		{
			if(strcmp(tab[j],tab[cp])==0)
			{
				nbr=nbr+1;
			}
		}
		if(nbr>max)
		{
			max=nbr;
			strcpy(marqueMax,tab[j]);
		}
	}
	}
	fclose(f);
	gtk_label_set_text(GTK_LABEL(label),marqueMax);
	gtk_widget_show(marque_def);
}




