/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_Gestion_des_clients (void)
{
  GtkWidget *Gestion_des_clients;
  GtkWidget *fixed1;
  GtkWidget *entry20;
  GtkWidget *treeview1;
  GtkWidget *label34;
  GtkWidget *label1;
  GtkWidget *button11;
  GtkWidget *alignment11;
  GtkWidget *hbox11;
  GtkWidget *image13;
  GtkWidget *label36;
  GtkWidget *button14;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label2;
  GtkWidget *button1;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label5;
  GtkWidget *button12;
  GtkWidget *image12;
  GtkWidget *button3;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label3;
  GtkWidget *button2;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label4;
  GtkWidget *image14;

  Gestion_des_clients = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (Gestion_des_clients, 700, 800);
  gtk_window_set_title (GTK_WINDOW (Gestion_des_clients), _("Gestion des clients"));
  gtk_window_set_resizable (GTK_WINDOW (Gestion_des_clients), FALSE);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (Gestion_des_clients), fixed1);

  entry20 = gtk_entry_new ();
  gtk_widget_show (entry20);
  gtk_fixed_put (GTK_FIXED (fixed1), entry20, 272, 40);
  gtk_widget_set_size_request (entry20, 168, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry20), 8226);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed1), treeview1, 16, 88);
  gtk_widget_set_size_request (treeview1, 664, 240);

  label34 = gtk_label_new (_("Entrer CIN  :"));
  gtk_widget_show (label34);
  gtk_fixed_put (GTK_FIXED (fixed1), label34, 120, 40);
  gtk_widget_set_size_request (label34, 152, 40);

  label1 = gtk_label_new (_("Liste des clients :"));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 0, 0);
  gtk_widget_set_size_request (label1, 152, 80);

  button11 = gtk_button_new ();
  gtk_widget_show (button11);
  gtk_fixed_put (GTK_FIXED (fixed1), button11, 512, 40);
  gtk_widget_set_size_request (button11, 160, 41);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (button11), alignment11);

  hbox11 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (alignment11), hbox11);

  image13 = gtk_image_new_from_stock ("gtk-select-all", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image13);
  gtk_box_pack_start (GTK_BOX (hbox11), image13, FALSE, FALSE, 0);

  label36 = gtk_label_new_with_mnemonic (_("  Afficher"));
  gtk_widget_show (label36);
  gtk_box_pack_start (GTK_BOX (hbox11), label36, FALSE, FALSE, 0);

  button14 = gtk_button_new ();
  gtk_widget_show (button14);
  gtk_fixed_put (GTK_FIXED (fixed1), button14, 456, 40);
  gtk_widget_set_size_request (button14, 48, 40);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button14), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label2 = gtk_label_new_with_mnemonic ("");
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (hbox1), label2, FALSE, FALSE, 0);

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed1), button1, 40, 736);
  gtk_widget_set_size_request (button1, 128, 40);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (button1), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label5 = gtk_label_new_with_mnemonic (_("  Ajouter"));
  gtk_widget_show (label5);
  gtk_box_pack_start (GTK_BOX (hbox4), label5, FALSE, FALSE, 0);

  button12 = gtk_button_new ();
  gtk_widget_show (button12);
  gtk_fixed_put (GTK_FIXED (fixed1), button12, 624, 736);
  gtk_widget_set_size_request (button12, 48, 40);

  image12 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image12);
  gtk_container_add (GTK_CONTAINER (button12), image12);

  button3 = gtk_button_new ();
  gtk_widget_show (button3);
  gtk_fixed_put (GTK_FIXED (fixed1), button3, 440, 736);
  gtk_widget_set_size_request (button3, 120, 40);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (button3), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label3 = gtk_label_new_with_mnemonic (_("  Supprimer"));
  gtk_widget_show (label3);
  gtk_box_pack_start (GTK_BOX (hbox2), label3, FALSE, FALSE, 0);

  button2 = gtk_button_new ();
  gtk_widget_show (button2);
  gtk_fixed_put (GTK_FIXED (fixed1), button2, 240, 736);
  gtk_widget_set_size_request (button2, 128, 40);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (button2), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label4 = gtk_label_new_with_mnemonic (_("  Modifier"));
  gtk_widget_show (label4);
  gtk_box_pack_start (GTK_BOX (hbox3), label4, FALSE, FALSE, 0);

  image14 = create_pixmap (Gestion_des_clients, "measuring-customer-satisfaction-ConvertImage.png");
  gtk_widget_show (image14);
  gtk_fixed_put (GTK_FIXED (fixed1), image14, 24, 352);
  gtk_widget_set_size_request (image14, 656, 376);

  g_signal_connect ((gpointer) treeview1, "row_activated",
                    G_CALLBACK (on_treeview1_row_activated),
                    NULL);
  g_signal_connect ((gpointer) button11, "clicked",
                    G_CALLBACK (on_button11_clicked),
                    NULL);
  g_signal_connect ((gpointer) button14, "clicked",
                    G_CALLBACK (on_button14_clicked),
                    NULL);
  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_button1_clicked),
                    NULL);
  g_signal_connect ((gpointer) button3, "clicked",
                    G_CALLBACK (on_button3_clicked),
                    NULL);
  g_signal_connect ((gpointer) button2, "clicked",
                    G_CALLBACK (on_button2_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Gestion_des_clients, Gestion_des_clients, "Gestion_des_clients");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, entry20, "entry20");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, label34, "label34");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, label1, "label1");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, button11, "button11");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, image13, "image13");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, label36, "label36");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, button14, "button14");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, image1, "image1");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, label2, "label2");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, button1, "button1");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, image4, "image4");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, label5, "label5");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, button12, "button12");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, image12, "image12");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, button3, "button3");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, image2, "image2");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, label3, "label3");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, button2, "button2");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, image3, "image3");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, label4, "label4");
  GLADE_HOOKUP_OBJECT (Gestion_des_clients, image14, "image14");

  return Gestion_des_clients;
}

GtkWidget*
create_ajouter_clients (void)
{
  GtkWidget *ajouter_clients;
  GtkWidget *fixed2;
  GtkWidget *entry3;
  GtkWidget *entry4;
  GtkWidget *entry5;
  GtkWidget *entry6;
  GtkWidget *entry7;
  GtkWidget *entry8;
  GtkWidget *label12;
  GtkWidget *label13;
  GtkWidget *button6;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label15;
  GtkWidget *button5;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label14;
  GtkWidget *label35;
  GtkObject *spinbutton1_adj;
  GtkWidget *spinbutton1;
  GtkWidget *label7;
  GtkWidget *label6;
  GtkWidget *label17;
  GtkWidget *label16;
  GtkWidget *combobox1;
  GtkWidget *Age;
  GtkWidget *Sexe;

  ajouter_clients = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (ajouter_clients, 555, 350);
  gtk_window_set_title (GTK_WINDOW (ajouter_clients), _("Ajout d'un client"));
  gtk_window_set_resizable (GTK_WINDOW (ajouter_clients), FALSE);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (ajouter_clients), fixed2);

  entry3 = gtk_entry_new ();
  gtk_widget_show (entry3);
  gtk_fixed_put (GTK_FIXED (fixed2), entry3, 64, 32);
  gtk_widget_set_size_request (entry3, 168, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry3), 8226);

  entry4 = gtk_entry_new ();
  gtk_widget_show (entry4);
  gtk_fixed_put (GTK_FIXED (fixed2), entry4, 344, 32);
  gtk_widget_set_size_request (entry4, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry4), 8226);

  entry5 = gtk_entry_new ();
  gtk_widget_show (entry5);
  gtk_fixed_put (GTK_FIXED (fixed2), entry5, 152, 144);
  gtk_widget_set_size_request (entry5, 256, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry5), 8226);

  entry6 = gtk_entry_new ();
  gtk_widget_show (entry6);
  gtk_fixed_put (GTK_FIXED (fixed2), entry6, 152, 200);
  gtk_widget_set_size_request (entry6, 256, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry6), 8226);

  entry7 = gtk_entry_new ();
  gtk_widget_show (entry7);
  gtk_fixed_put (GTK_FIXED (fixed2), entry7, 152, 96);
  gtk_widget_set_size_request (entry7, 256, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry7), 8226);

  entry8 = gtk_entry_new ();
  gtk_widget_show (entry8);
  gtk_fixed_put (GTK_FIXED (fixed2), entry8, 152, 256);
  gtk_widget_set_size_request (entry8, 256, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry8), 8226);

  label12 = gtk_label_new (_("Nom :"));
  gtk_widget_show (label12);
  gtk_fixed_put (GTK_FIXED (fixed2), label12, 8, 32);
  gtk_widget_set_size_request (label12, 64, 32);

  label13 = gtk_label_new (_("Prenom :"));
  gtk_widget_show (label13);
  gtk_fixed_put (GTK_FIXED (fixed2), label13, 256, 32);
  gtk_widget_set_size_request (label13, 80, 32);

  button6 = gtk_button_new ();
  gtk_widget_show (button6);
  gtk_fixed_put (GTK_FIXED (fixed2), button6, 432, 280);
  gtk_widget_set_size_request (button6, 104, 40);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (button6), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label15 = gtk_label_new_with_mnemonic (_("  Annuler"));
  gtk_widget_show (label15);
  gtk_box_pack_start (GTK_BOX (hbox6), label15, FALSE, FALSE, 0);

  button5 = gtk_button_new ();
  gtk_widget_show (button5);
  gtk_fixed_put (GTK_FIXED (fixed2), button5, 432, 232);
  gtk_widget_set_size_request (button5, 104, 40);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (button5), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label14 = gtk_label_new_with_mnemonic (_("  Ajouter"));
  gtk_widget_show (label14);
  gtk_box_pack_start (GTK_BOX (hbox5), label14, FALSE, FALSE, 0);

  label35 = gtk_label_new ("");
  gtk_widget_show (label35);
  gtk_fixed_put (GTK_FIXED (fixed2), label35, 416, 112);
  gtk_widget_set_size_request (label35, 144, 48);

  spinbutton1_adj = gtk_adjustment_new (12, 12, 100, 1, 10, 10);
  spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton1_adj), 1, 0);
  gtk_widget_show (spinbutton1);
  gtk_fixed_put (GTK_FIXED (fixed2), spinbutton1, 344, 304);
  gtk_widget_set_size_request (spinbutton1, 68, 35);

  label7 = gtk_label_new (_("CIN :"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed2), label7, 8, 96);
  gtk_widget_set_size_request (label7, 64, 32);

  label6 = gtk_label_new (_("Adresse :"));
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed2), label6, 0, 144);
  gtk_widget_set_size_request (label6, 88, 32);

  label17 = gtk_label_new (_("E-mail :"));
  gtk_widget_show (label17);
  gtk_fixed_put (GTK_FIXED (fixed2), label17, 8, 200);
  gtk_widget_set_size_request (label17, 64, 32);

  label16 = gtk_label_new (_("T\303\251l\303\250phone :"));
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed2), label16, 8, 256);
  gtk_widget_set_size_request (label16, 80, 32);

  combobox1 = gtk_combo_box_new_text ();
  gtk_widget_show (combobox1);
  gtk_fixed_put (GTK_FIXED (fixed2), combobox1, 152, 304);
  gtk_widget_set_size_request (combobox1, 104, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("Homme"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("Femme"));

  Age = gtk_label_new (_("Age :"));
  gtk_widget_show (Age);
  gtk_fixed_put (GTK_FIXED (fixed2), Age, 272, 304);
  gtk_widget_set_size_request (Age, 64, 32);

  Sexe = gtk_label_new (_("Sexe :"));
  gtk_widget_show (Sexe);
  gtk_fixed_put (GTK_FIXED (fixed2), Sexe, 8, 304);
  gtk_widget_set_size_request (Sexe, 80, 32);

  g_signal_connect ((gpointer) button6, "clicked",
                    G_CALLBACK (on_button6_clicked),
                    NULL);
  g_signal_connect ((gpointer) button5, "clicked",
                    G_CALLBACK (on_button5_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ajouter_clients, ajouter_clients, "ajouter_clients");
  GLADE_HOOKUP_OBJECT (ajouter_clients, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (ajouter_clients, entry3, "entry3");
  GLADE_HOOKUP_OBJECT (ajouter_clients, entry4, "entry4");
  GLADE_HOOKUP_OBJECT (ajouter_clients, entry5, "entry5");
  GLADE_HOOKUP_OBJECT (ajouter_clients, entry6, "entry6");
  GLADE_HOOKUP_OBJECT (ajouter_clients, entry7, "entry7");
  GLADE_HOOKUP_OBJECT (ajouter_clients, entry8, "entry8");
  GLADE_HOOKUP_OBJECT (ajouter_clients, label12, "label12");
  GLADE_HOOKUP_OBJECT (ajouter_clients, label13, "label13");
  GLADE_HOOKUP_OBJECT (ajouter_clients, button6, "button6");
  GLADE_HOOKUP_OBJECT (ajouter_clients, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (ajouter_clients, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (ajouter_clients, image6, "image6");
  GLADE_HOOKUP_OBJECT (ajouter_clients, label15, "label15");
  GLADE_HOOKUP_OBJECT (ajouter_clients, button5, "button5");
  GLADE_HOOKUP_OBJECT (ajouter_clients, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (ajouter_clients, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (ajouter_clients, image5, "image5");
  GLADE_HOOKUP_OBJECT (ajouter_clients, label14, "label14");
  GLADE_HOOKUP_OBJECT (ajouter_clients, label35, "label35");
  GLADE_HOOKUP_OBJECT (ajouter_clients, spinbutton1, "spinbutton1");
  GLADE_HOOKUP_OBJECT (ajouter_clients, label7, "label7");
  GLADE_HOOKUP_OBJECT (ajouter_clients, label6, "label6");
  GLADE_HOOKUP_OBJECT (ajouter_clients, label17, "label17");
  GLADE_HOOKUP_OBJECT (ajouter_clients, label16, "label16");
  GLADE_HOOKUP_OBJECT (ajouter_clients, combobox1, "combobox1");
  GLADE_HOOKUP_OBJECT (ajouter_clients, Age, "Age");
  GLADE_HOOKUP_OBJECT (ajouter_clients, Sexe, "Sexe");

  return ajouter_clients;
}

GtkWidget*
create_modifier_clients (void)
{
  GtkWidget *modifier_clients;
  GtkWidget *fixed3;
  GtkWidget *fixed4;
  GtkWidget *entry9;
  GtkWidget *entry10;
  GtkWidget *entry11;
  GtkWidget *entry12;
  GtkWidget *entry13;
  GtkWidget *entry14;
  GtkWidget *label26;
  GtkWidget *label25;
  GtkWidget *label20;
  GtkWidget *button7;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label28;
  GtkWidget *button8;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label29;
  GtkWidget *label19;
  GtkWidget *label18;
  GtkWidget *label27;
  GtkWidget *label53;
  GtkObject *spinbutton2_adj;
  GtkWidget *spinbutton2;
  GtkWidget *label54;
  GtkWidget *label40;
  GtkWidget *combobox2;

  modifier_clients = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (modifier_clients, 555, 350);
  gtk_window_set_title (GTK_WINDOW (modifier_clients), _("Modifier un client"));
  gtk_window_set_resizable (GTK_WINDOW (modifier_clients), FALSE);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (modifier_clients), fixed3);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_fixed_put (GTK_FIXED (fixed3), fixed4, 296, 144);
  gtk_widget_set_size_request (fixed4, 50, 50);

  entry9 = gtk_entry_new ();
  gtk_widget_show (entry9);
  gtk_fixed_put (GTK_FIXED (fixed3), entry9, 104, 104);
  gtk_widget_set_size_request (entry9, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry9), 8226);

  entry10 = gtk_entry_new ();
  gtk_widget_show (entry10);
  gtk_fixed_put (GTK_FIXED (fixed3), entry10, 368, 104);
  gtk_widget_set_size_request (entry10, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry10), 8226);

  entry11 = gtk_entry_new ();
  gtk_widget_show (entry11);
  gtk_fixed_put (GTK_FIXED (fixed3), entry11, 184, 32);
  gtk_widget_set_size_request (entry11, 240, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry11), 8226);

  entry12 = gtk_entry_new ();
  gtk_widget_show (entry12);
  gtk_fixed_put (GTK_FIXED (fixed3), entry12, 104, 152);
  gtk_widget_set_size_request (entry12, 240, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry12), 8226);

  entry13 = gtk_entry_new ();
  gtk_widget_show (entry13);
  gtk_fixed_put (GTK_FIXED (fixed3), entry13, 104, 200);
  gtk_widget_set_size_request (entry13, 240, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry13), 8226);

  entry14 = gtk_entry_new ();
  gtk_widget_show (entry14);
  gtk_fixed_put (GTK_FIXED (fixed3), entry14, 104, 248);
  gtk_widget_set_size_request (entry14, 240, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry14), 8226);

  label26 = gtk_label_new (_("Prenom :"));
  gtk_widget_show (label26);
  gtk_fixed_put (GTK_FIXED (fixed3), label26, 280, 96);
  gtk_widget_set_size_request (label26, 72, 48);

  label25 = gtk_label_new (_("Nom :"));
  gtk_widget_show (label25);
  gtk_fixed_put (GTK_FIXED (fixed3), label25, 0, 96);
  gtk_widget_set_size_request (label25, 88, 49);

  label20 = gtk_label_new (_("CIN :"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed3), label20, 96, 32);
  gtk_widget_set_size_request (label20, 56, 33);

  button7 = gtk_button_new ();
  gtk_widget_show (button7);
  gtk_fixed_put (GTK_FIXED (fixed3), button7, 424, 248);
  gtk_widget_set_size_request (button7, 112, 40);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (button7), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label28 = gtk_label_new_with_mnemonic (_("  Modifier"));
  gtk_widget_show (label28);
  gtk_box_pack_start (GTK_BOX (hbox7), label28, FALSE, FALSE, 0);

  button8 = gtk_button_new ();
  gtk_widget_show (button8);
  gtk_fixed_put (GTK_FIXED (fixed3), button8, 424, 296);
  gtk_widget_set_size_request (button8, 112, 40);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (button8), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label29 = gtk_label_new_with_mnemonic (_("  Annuler"));
  gtk_widget_show (label29);
  gtk_box_pack_start (GTK_BOX (hbox8), label29, FALSE, FALSE, 0);

  label19 = gtk_label_new (_("Adresse :"));
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed3), label19, 16, 152);
  gtk_widget_set_size_request (label19, 64, 33);

  label18 = gtk_label_new (_("E_mail :"));
  gtk_widget_show (label18);
  gtk_fixed_put (GTK_FIXED (fixed3), label18, 8, 200);
  gtk_widget_set_size_request (label18, 72, 33);

  label27 = gtk_label_new (_("T\303\251l\303\250phone :"));
  gtk_widget_show (label27);
  gtk_fixed_put (GTK_FIXED (fixed3), label27, 8, 248);
  gtk_widget_set_size_request (label27, 88, 33);

  label53 = gtk_label_new (_("Sexe :"));
  gtk_widget_show (label53);
  gtk_fixed_put (GTK_FIXED (fixed3), label53, 16, 304);
  gtk_widget_set_size_request (label53, 80, 32);

  spinbutton2_adj = gtk_adjustment_new (12, 12, 100, 1, 10, 10);
  spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton2_adj), 1, 0);
  gtk_widget_show (spinbutton2);
  gtk_fixed_put (GTK_FIXED (fixed3), spinbutton2, 304, 304);
  gtk_widget_set_size_request (spinbutton2, 72, 32);

  label54 = gtk_label_new (_("Age :"));
  gtk_widget_show (label54);
  gtk_fixed_put (GTK_FIXED (fixed3), label54, 240, 304);
  gtk_widget_set_size_request (label54, 64, 32);

  label40 = gtk_label_new ("");
  gtk_widget_show (label40);
  gtk_fixed_put (GTK_FIXED (fixed3), label40, 360, 185);
  gtk_widget_set_size_request (label40, 176, 39);

  combobox2 = gtk_combo_box_new_text ();
  gtk_widget_show (combobox2);
  gtk_fixed_put (GTK_FIXED (fixed3), combobox2, 104, 304);
  gtk_widget_set_size_request (combobox2, 104, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2), _("Homme"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2), _("Femme"));

  g_signal_connect ((gpointer) button7, "clicked",
                    G_CALLBACK (on_button7_clicked),
                    NULL);
  g_signal_connect ((gpointer) button8, "clicked",
                    G_CALLBACK (on_button8_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (modifier_clients, modifier_clients, "modifier_clients");
  GLADE_HOOKUP_OBJECT (modifier_clients, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (modifier_clients, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (modifier_clients, entry9, "entry9");
  GLADE_HOOKUP_OBJECT (modifier_clients, entry10, "entry10");
  GLADE_HOOKUP_OBJECT (modifier_clients, entry11, "entry11");
  GLADE_HOOKUP_OBJECT (modifier_clients, entry12, "entry12");
  GLADE_HOOKUP_OBJECT (modifier_clients, entry13, "entry13");
  GLADE_HOOKUP_OBJECT (modifier_clients, entry14, "entry14");
  GLADE_HOOKUP_OBJECT (modifier_clients, label26, "label26");
  GLADE_HOOKUP_OBJECT (modifier_clients, label25, "label25");
  GLADE_HOOKUP_OBJECT (modifier_clients, label20, "label20");
  GLADE_HOOKUP_OBJECT (modifier_clients, button7, "button7");
  GLADE_HOOKUP_OBJECT (modifier_clients, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (modifier_clients, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (modifier_clients, image7, "image7");
  GLADE_HOOKUP_OBJECT (modifier_clients, label28, "label28");
  GLADE_HOOKUP_OBJECT (modifier_clients, button8, "button8");
  GLADE_HOOKUP_OBJECT (modifier_clients, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (modifier_clients, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (modifier_clients, image8, "image8");
  GLADE_HOOKUP_OBJECT (modifier_clients, label29, "label29");
  GLADE_HOOKUP_OBJECT (modifier_clients, label19, "label19");
  GLADE_HOOKUP_OBJECT (modifier_clients, label18, "label18");
  GLADE_HOOKUP_OBJECT (modifier_clients, label27, "label27");
  GLADE_HOOKUP_OBJECT (modifier_clients, label53, "label53");
  GLADE_HOOKUP_OBJECT (modifier_clients, spinbutton2, "spinbutton2");
  GLADE_HOOKUP_OBJECT (modifier_clients, label54, "label54");
  GLADE_HOOKUP_OBJECT (modifier_clients, label40, "label40");
  GLADE_HOOKUP_OBJECT (modifier_clients, combobox2, "combobox2");

  return modifier_clients;
}

GtkWidget*
create_supprimer_clients (void)
{
  GtkWidget *supprimer_clients;
  GtkWidget *fixed5;
  GtkWidget *entry21;
  GtkWidget *cin24;
  GtkWidget *button10;
  GtkWidget *alignment10;
  GtkWidget *hbox10;
  GtkWidget *image10;
  GtkWidget *label32;
  GtkWidget *button9;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image9;
  GtkWidget *label31;
  GtkWidget *label30;
  GtkWidget *label50;

  supprimer_clients = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (supprimer_clients, 400, 200);
  gtk_window_set_title (GTK_WINDOW (supprimer_clients), _("Supprimer un client"));
  gtk_window_set_resizable (GTK_WINDOW (supprimer_clients), FALSE);

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_container_add (GTK_CONTAINER (supprimer_clients), fixed5);

  entry21 = gtk_entry_new ();
  gtk_widget_show (entry21);
  gtk_fixed_put (GTK_FIXED (fixed5), entry21, 120, 32);
  gtk_widget_set_size_request (entry21, 216, 43);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry21), 8226);

  cin24 = gtk_label_new (_("cin"));
  gtk_widget_show (cin24);
  gtk_fixed_put (GTK_FIXED (fixed5), cin24, 40, 40);
  gtk_widget_set_size_request (cin24, 73, 24);

  button10 = gtk_button_new ();
  gtk_widget_show (button10);
  gtk_fixed_put (GTK_FIXED (fixed5), button10, 240, 160);
  gtk_widget_set_size_request (button10, 112, 41);

  alignment10 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment10);
  gtk_container_add (GTK_CONTAINER (button10), alignment10);

  hbox10 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox10);
  gtk_container_add (GTK_CONTAINER (alignment10), hbox10);

  image10 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image10);
  gtk_box_pack_start (GTK_BOX (hbox10), image10, FALSE, FALSE, 0);

  label32 = gtk_label_new_with_mnemonic (_("  Annuler"));
  gtk_widget_show (label32);
  gtk_box_pack_start (GTK_BOX (hbox10), label32, FALSE, FALSE, 0);

  button9 = gtk_button_new ();
  gtk_widget_show (button9);
  gtk_fixed_put (GTK_FIXED (fixed5), button9, 112, 160);
  gtk_widget_set_size_request (button9, 104, 40);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (button9), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image9 = gtk_image_new_from_stock ("gtk-yes", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox9), image9, FALSE, FALSE, 0);

  label31 = gtk_label_new_with_mnemonic (_("    Ok"));
  gtk_widget_show (label31);
  gtk_box_pack_start (GTK_BOX (hbox9), label31, FALSE, FALSE, 0);

  label30 = gtk_label_new (_("voulez-vous vraiment supprimer le client  ?"));
  gtk_widget_show (label30);
  gtk_fixed_put (GTK_FIXED (fixed5), label30, 8, 112);
  gtk_widget_set_size_request (label30, 424, 56);

  label50 = gtk_label_new ("");
  gtk_widget_show (label50);
  gtk_fixed_put (GTK_FIXED (fixed5), label50, 56, 80);
  gtk_widget_set_size_request (label50, 304, 32);

  g_signal_connect ((gpointer) button10, "clicked",
                    G_CALLBACK (on_button10_clicked),
                    NULL);
  g_signal_connect ((gpointer) button9, "clicked",
                    G_CALLBACK (on_button9_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (supprimer_clients, supprimer_clients, "supprimer_clients");
  GLADE_HOOKUP_OBJECT (supprimer_clients, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (supprimer_clients, entry21, "entry21");
  GLADE_HOOKUP_OBJECT (supprimer_clients, cin24, "cin24");
  GLADE_HOOKUP_OBJECT (supprimer_clients, button10, "button10");
  GLADE_HOOKUP_OBJECT (supprimer_clients, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (supprimer_clients, hbox10, "hbox10");
  GLADE_HOOKUP_OBJECT (supprimer_clients, image10, "image10");
  GLADE_HOOKUP_OBJECT (supprimer_clients, label32, "label32");
  GLADE_HOOKUP_OBJECT (supprimer_clients, button9, "button9");
  GLADE_HOOKUP_OBJECT (supprimer_clients, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (supprimer_clients, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (supprimer_clients, image9, "image9");
  GLADE_HOOKUP_OBJECT (supprimer_clients, label31, "label31");
  GLADE_HOOKUP_OBJECT (supprimer_clients, label30, "label30");
  GLADE_HOOKUP_OBJECT (supprimer_clients, label50, "label50");

  return supprimer_clients;
}
