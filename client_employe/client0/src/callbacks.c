#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "client.h"






///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// button 1: ajouter dans l'interface gestion des clients 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button1_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{

GtkWidget *Gestion_des_clients;
GtkWidget *ajouter_clients;

ajouter_clients=create_ajouter_clients();
gtk_widget_show(ajouter_clients);
Gestion_des_clients=lookup_widget(objet_graphique,"Gestion_des_clients");
gtk_widget_hide(Gestion_des_clients);

}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// button 2: modifier dans l'interface gestion des clients
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button2_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Gestion_des_clients;
GtkWidget *modifier_clients;

modifier_clients=create_modifier_clients();
gtk_widget_show(modifier_clients);
Gestion_des_clients=lookup_widget(objet_graphique,"Gestion_des_clients");
gtk_widget_hide(Gestion_des_clients);
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//button 3: supprimer dans l'interface gestion des clients
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button3_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Gestion_des_clients;
GtkWidget *supprimer_clients;

supprimer_clients=create_supprimer_clients();
gtk_widget_show(supprimer_clients);
Gestion_des_clients=lookup_widget(objet_graphique,"Gestion_des_clients");
gtk_widget_hide(Gestion_des_clients);
}





///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// button 6: annuler dans l'interface ajout d'un client
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button6_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Gestion_des_clients;
GtkWidget *ajouter_clients;

Gestion_des_clients=create_Gestion_des_clients();
gtk_widget_show(Gestion_des_clients);
ajouter_clients=lookup_widget(objet_graphique,"ajouter_clients");
gtk_widget_hide(ajouter_clients);

}






///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// button 8: annuler dans l'interface modifier un client
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button8_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Gestion_des_clients;
GtkWidget *modifier_clients;

Gestion_des_clients=create_Gestion_des_clients();
gtk_widget_show(Gestion_des_clients);
modifier_clients=lookup_widget(objet_graphique,"modifier_clients");
gtk_widget_hide(modifier_clients);
}






///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// button 10: annuler dans l'interface supprimer un client
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button10_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Gestion_des_clients;
GtkWidget *supprimer_clients;

Gestion_des_clients=create_Gestion_des_clients();
gtk_widget_show(Gestion_des_clients);
supprimer_clients=lookup_widget(objet_graphique,"supprimer_clients");
gtk_widget_hide(supprimer_clients);
}







///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// button 11: afficher dans l'interface gestion des clients
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button11_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *treeview1;
treeview1=lookup_widget(objet_graphique,"treeview1");
afficher_client(treeview1);
}









///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// button 5: ajouter dans l'interface ajout d'un client
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button5_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
client a;

GtkWidget*input1;
GtkWidget*input2;
GtkWidget*input3;
GtkWidget*input4;
GtkWidget*input5;
GtkWidget*input6;
GtkWidget*input8;
GtkWidget*Age;
GtkWidget*sortie21;

GtkWidget *ajouter_clients;

input1=lookup_widget(objet_graphique,"entry3");
input2=lookup_widget(objet_graphique,"entry4");
input3=lookup_widget(objet_graphique,"entry7");
input4=lookup_widget(objet_graphique,"entry5");
input5=lookup_widget(objet_graphique,"entry6");
input6=lookup_widget(objet_graphique,"entry8");
input8=lookup_widget(objet_graphique,"combobox1");
Age=lookup_widget(objet_graphique,"spinbutton1");

sortie21=lookup_widget(objet_graphique,"label35");

strcpy(a.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(a.prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(a.cin,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(a.adresse,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(a.email,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(a.telephone,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(a.Sexe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input8)));
a.Age=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Age));


ajouter_client(a);
GdkColor color;
gdk_color_parse("green",&color);
gtk_widget_modify_fg(sortie21,GTK_STATE_NORMAL,&color);

gtk_entry_set_text(GTK_ENTRY(input1),"");
gtk_entry_set_text(GTK_ENTRY(input2),"");
gtk_entry_set_text(GTK_ENTRY(input3),"");
gtk_entry_set_text(GTK_ENTRY(input4),"");
gtk_entry_set_text(GTK_ENTRY(input5),"");
gtk_entry_set_text(GTK_ENTRY(input6),"");
gtk_label_set_text(GTK_LABEL(sortie21),"ajout réussi");

}












///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// button 14: chercher dans l'interface gestion des clients
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button14_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{

char cin[20];
GtkWidget *input18;

input18=lookup_widget(objet_graphique,"entry20");

strcpy(cin,gtk_entry_get_text(GTK_ENTRY(input18)));
 
rechercher(cin);

gtk_entry_set_text(GTK_ENTRY(input18),"");
GtkWidget *treeview1;
treeview1=lookup_widget(objet_graphique,"treeview1");
afficher_client_rechercher(treeview1);

}











///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// button 9: ok dans l'interface supprimer un client
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button9_clicked                     (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget*sortie23;
char cin[40];
input1=lookup_widget(objet_graphique,"entry21");
sortie23=lookup_widget(objet_graphique,"label50");
strcpy(cin,gtk_entry_get_text(GTK_ENTRY(input1)));
  
supprimer(cin);
gtk_entry_set_text(GTK_ENTRY(input1), "");
GdkColor color;
gdk_color_parse("red",&color);
gtk_widget_modify_fg(sortie23,GTK_STATE_NORMAL,&color);
gtk_label_set_text(GTK_LABEL(sortie23),"suppression réussi");
}

















///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// button 7: modifier dans l'interface modifier un client
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_button7_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
client c;
GtkWidget *input1, *input2, *input3, *input4, *input5, *input6 , *input8;
GtkWidget*Age;
GtkWidget *sortie;
GtkWidget *modifier_clients;
GtkWidget*sortie22;

modifier_clients=lookup_widget(objet_graphique,"modifier_clients");
input1=lookup_widget(objet_graphique,"entry9");
input2=lookup_widget(objet_graphique,"entry10");
input3=lookup_widget(objet_graphique,"entry12");
input4=lookup_widget(objet_graphique,"entry14");
input5=lookup_widget(objet_graphique,"entry13");
input6=lookup_widget(objet_graphique,"entry11");
input8=lookup_widget(objet_graphique,"combobox2");
Age=lookup_widget(objet_graphique,"spinbutton2");
sortie22=lookup_widget(objet_graphique,"label40");

strcpy(c.email,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(c.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(c.prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(c.adresse,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(c.telephone,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(c.cin,gtk_entry_get_text(GTK_ENTRY(input6)));
c.Age=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Age));
strcpy(c.Sexe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input8)));


modifier_client(c);

GdkColor color;
gdk_color_parse("green",&color);
gtk_widget_modify_fg(sortie22,GTK_STATE_NORMAL,&color);

gtk_entry_set_text(GTK_ENTRY(input1),"");
gtk_entry_set_text(GTK_ENTRY(input2),"");
gtk_entry_set_text(GTK_ENTRY(input3),"");
gtk_entry_set_text(GTK_ENTRY(input4),"");
gtk_entry_set_text(GTK_ENTRY(input5),"");
gtk_entry_set_text(GTK_ENTRY(input6),"");
gtk_label_set_text(GTK_LABEL(sortie22),"modification réussi");
}









///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//treeview1
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

GtkTreeIter iter;
	gchar* nom;
	gchar* prenom;
	gchar* cin;
	gchar* adresse;
	gchar* email;
	gchar* telephone;
	gint* Age;
	gchar* Sexe;
	client a;
	

	GtkTreeModel *model = gtk_tree_view_get_model(treeview);

	if(gtk_tree_model_get_iter(model,&iter,path))
	{
	gtk_tree_model_get (GTK_LIST_STORE(model), &iter,0, &nom,1,&prenom,2,&cin,3,&adresse,4,&email,5,&telephone,6,&Age,7,&Sexe -1);
	strcpy(a.nom,nom);
	strcpy(a.prenom,prenom);
	strcpy(a.cin,cin);
	strcpy(a.adresse,adresse);
	strcpy(a.email,email);
	strcpy(a.telephone,telephone);
	a.Age=*Age;
	strcpy(a.Sexe,Sexe);
	
	afficher_client(treeview);
	}

}

