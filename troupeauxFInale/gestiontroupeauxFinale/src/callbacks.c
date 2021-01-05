#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif



#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include"tree.h"
#include"CRUD.h"
GtkTreeSelection *selection1;

void
on_AcceuilGestion_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
/*preparation du treeView*/
GtkWidget *p;
gtk_widget_hide (acceuil);
gestion = create_gestion ();
p=lookup_widget(gestion,"treeview2");
Affichertroupeaux(p,"troupeaux.txt");
gtk_widget_show (gestion);
}


void
on_Ajoutertroupeaux_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
 troupeaux t;
GtkWidget *entrysexe;
GtkWidget *entryId;
GtkWidget *entrytype;
GtkWidget *entryDate;
GtkWidget *entryPrix;
GtkWidget *labelId;
GtkWidget *labelsexe;
GtkWidget *labelType;
GtkWidget *labelDate;
GtkWidget *labelPrix;
GtkWidget *existe;
GtkWidget* success;
int b=1;



entryId=lookup_widget(gestion,"entry5");
entrysexe=lookup_widget(gestion,"entry1");
entrytype=lookup_widget(gestion,"entry2");
entryDate=lookup_widget(gestion,"entry4");
entryPrix=lookup_widget(gestion,"entry3");

labelId=lookup_widget(gestion,"label13");
labelsexe=lookup_widget(gestion,"label7");
labelType=lookup_widget(gestion,"label8");
labelDate=lookup_widget(gestion,"label9");
labelPrix=lookup_widget(gestion,"label10");
existe=lookup_widget(gestion,"label34");
success=lookup_widget(gestion,"label35");
        strcpy(t.id,gtk_entry_get_text(GTK_ENTRY(entryId) ) );
        strcpy(t.sexe,gtk_entry_get_text(GTK_ENTRY(entrysexe) ) );
        strcpy(t.type,gtk_entry_get_text(GTK_ENTRY(entrytype) ) );
        strcpy(t.date,gtk_entry_get_text(GTK_ENTRY(entryDate) ) );
        strcpy(t.prix,gtk_entry_get_text(GTK_ENTRY(entryPrix) ) );

 gtk_widget_hide (success);
// controle saisie
if(strcmp(t.id,"")==0){
		  gtk_widget_show (labelId);
b=0;
}
else {
		  gtk_widget_hide(labelId);
}

if(strcmp(t.sexe,"")==0){
		  gtk_widget_show (labelsexe);
b=0;
}
else {
		  gtk_widget_hide(labelsexe);
}
if(strcmp(t.type,"")==0){
		  gtk_widget_show (labelType);
b=0;
}
else {
		  gtk_widget_hide(labelType);
}
if(strcmp(t.date,"")==0){
		  gtk_widget_show (labelDate);
b=0;
}
else {
		  gtk_widget_hide(labelDate);
}
if(strcmp(t.prix,"")==0){
		  gtk_widget_show (labelPrix);
b=0;
}
else {
		  gtk_widget_hide(labelPrix);
}



if(b==1){

        if(exist_troupeaux(t.id)==1)
        {

				  gtk_widget_show (existe);
        }
        else {
						  gtk_widget_hide (existe);
                ajouter_troupeaux(t);

						  gtk_widget_show (success);
        }
//mise a jour du treeView
        GtkWidget* p=lookup_widget(gestion,"treeview2");

        Affichertroupeaux(p,"troupeaux.txt");
}

}




void
on_Modifiertroupeaux_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
       	 troupeaux t;

        strcpy(t.id,gtk_label_get_text(GTK_LABEL(lookup_widget(gestion,"label20"))));
        strcpy(t.sexe,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestion,"entry6"))));
        strcpy(t.type,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestion,"entry7"))));
        strcpy(t.date,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestion,"entry9"))));
        strcpy(t.prix,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestion,"entry8"))));
        ajouter_troupeaux(t);
//mise ajour du tree view 
        Affichertroupeaux(lookup_widget(gestion,"treeview1"),"troupeaux.txt");
	gtk_widget_show(lookup_widget(gestion,"label37"));
        GtkWidget *p=lookup_widget(gestion,"treeview2");
        Affichertroupeaux(p,"troupeaux.txt");
}





void
on_cherchertroupeaux_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *p1;
GtkWidget *entry;
GtkWidget *labelid;
GtkWidget *nbResultat;
GtkWidget *message;
char id[30];
char chnb[30];
int b=0,nb; //b=0  entry  cherche vide 
entry=lookup_widget(gestion,"entry10");
labelid=lookup_widget(gestion,"label28");
p1=lookup_widget(gestion,"treeview2");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(entry)));

if(strcmp(id,"")==0){
  gtk_widget_show (labelid);b=0;
}else{
b=1;
gtk_widget_hide (labelid);}

if(b==0)
    {return;
    }
    else
    {

nb=Cherchertroupeaux(p1,"troupeaux.txt",id);
// afficher le sexebre de resultats obtenue par la recherche
 

sprintf(chnb,"%d",nb);        //conversion int==> chaine car la fonction gtk_label_set_text naccepte que chaine
nbResultat=lookup_widget(gestion,"label27");
message=lookup_widget(gestion,"label26");
gtk_label_set_text(GTK_LABEL(nbResultat),chnb);

gtk_widget_show (nbResultat);
gtk_widget_show (message);
}

}


void
on_GestionAcceuil_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_widget_show (acceuil);
gtk_widget_destroy (gestion);

}




void
on_bmodifier_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
        gchar *id;
        gchar *sexe;
        gchar *type;
        gchar *date;
        gchar *prix;
  
        GtkTreeModel     *model;
        GtkTreeIter iter;
        if (gtk_tree_selection_get_selected(selection1, &model, &iter))
        {

        gtk_widget_hide(lookup_widget(gestion,"label37"));//cacher label modifier avec succees
                gtk_tree_model_get (model,&iter,0,&id,1,&sexe,2,&type,3,&date,4,&prix,-1);//recuperer les information de la ligne selectionneé
        // //remplir les champs de entry
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestion,"entry6")),sexe);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestion,"entry7")),type);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestion,"entry9")),date);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestion,"entry8")),prix);



                GtkWidget* msgId=lookup_widget(gestion,"label20");
                GtkWidget* msg1=lookup_widget(gestion,"label36");
                gtk_label_set_text(GTK_LABEL(msgId),id);
                gtk_widget_show(msgId);
                gtk_widget_show(msg1);
                gtk_widget_show(lookup_widget(gestion,"button4"));//afficher le bouton modifier
                gtk_notebook_prev_page(GTK_NOTEBOOK(lookup_widget(gestion,"notebook1")));//redirection vers la page precedente
       
        }

}


void
on_bsupprimer_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
    gchar *Id;
    gchar *sexe;
    gchar *Type;
    gchar *date;
    gchar *prix;
  
    GtkTreeModel     *model;
    GtkTreeIter iter;
       if (gtk_tree_selection_get_selected(selection1, &model, &iter))
        {
            gtk_tree_model_get (model,&iter,0,&Id,1,&sexe,2,&Type,3,&date,4,&prix,-1);//recuperer les information de la ligne selectionneé
            supprimer_troupeaux(Id);
            Affichertroupeaux(lookup_widget(gestion,"treeview2"),"troupeaux.txt");        
        }
}


void
on_bafficher12_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
        GtkWidget *p=lookup_widget(gestion,"treeview2");
        Affichertroupeaux(p,"troupeaux.txt");
}


void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)//signale du treeView (Double click)
{
    gchar *id;
        gchar *sexe;
        gchar *type;
        gchar *date;
        gchar *prix;
      
        GtkTreeModel     *model;
        GtkTreeIter iter;
        GtkWidget *p=lookup_widget(gestion,"treeview2");
        selection1 = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
       


}





