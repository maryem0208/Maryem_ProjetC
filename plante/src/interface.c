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
create_Gestiondeplantation (void)
{
  GtkWidget *Gestiondeplantation;
  GtkWidget *fixed1;
  GtkWidget *entry20;
  GtkWidget *treeview1;
  GtkWidget *label1;
  GtkWidget *image14;
  GtkWidget *button14;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label2;
  GtkWidget *image13;
  GtkWidget *button12;
  GtkWidget *image12;
  GtkWidget *button1;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label5;
  GtkWidget *button2;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label4;
  GtkWidget *button3;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label3;
  GtkWidget *button11;
  GtkWidget *alignment11;
  GtkWidget *hbox11;
  GtkWidget *image11;
  GtkWidget *label33;
  GtkWidget *label34;

  Gestiondeplantation = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (Gestiondeplantation, 820, 510);
  gtk_window_set_title (GTK_WINDOW (Gestiondeplantation), _("Gestion de plantation"));
  gtk_window_set_resizable (GTK_WINDOW (Gestiondeplantation), FALSE);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (Gestiondeplantation), fixed1);

  entry20 = gtk_entry_new ();
  gtk_widget_show (entry20);
  gtk_fixed_put (GTK_FIXED (fixed1), entry20, 328, 288);
  gtk_widget_set_size_request (entry20, 144, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry20), 8226);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed1), treeview1, 56, 32);
  gtk_widget_set_size_request (treeview1, 728, 240);

  label1 = gtk_label_new (_("Liste des plantes :"));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 0, 0);
  gtk_widget_set_size_request (label1, 144, 40);

  image14 = create_pixmap (Gestiondeplantation, "FinlandFarm-ConvertImage.jpg");
  gtk_widget_show (image14);
  gtk_fixed_put (GTK_FIXED (fixed1), image14, 520, 248);
  gtk_widget_set_size_request (image14, 360, 224);

  button14 = gtk_button_new ();
  gtk_widget_show (button14);
  gtk_fixed_put (GTK_FIXED (fixed1), button14, 480, 288);
  gtk_widget_set_size_request (button14, 104, 40);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button14), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label2 = gtk_label_new_with_mnemonic (_("  Chercher"));
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (hbox1), label2, FALSE, FALSE, 0);

  image13 = create_pixmap (Gestiondeplantation, "AdobeStock_257179572-ConvertImage.jpg");
  gtk_widget_show (image13);
  gtk_fixed_put (GTK_FIXED (fixed1), image13, 0, 264);
  gtk_widget_set_size_request (image13, 256, 200);

  button12 = gtk_button_new ();
  gtk_widget_show (button12);
  gtk_fixed_put (GTK_FIXED (fixed1), button12, 16, 448);
  gtk_widget_set_size_request (button12, 48, 40);

  image12 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image12);
  gtk_container_add (GTK_CONTAINER (button12), image12);

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed1), button1, 72, 448);
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

  button2 = gtk_button_new ();
  gtk_widget_show (button2);
  gtk_fixed_put (GTK_FIXED (fixed1), button2, 448, 448);
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

  button3 = gtk_button_new ();
  gtk_widget_show (button3);
  gtk_fixed_put (GTK_FIXED (fixed1), button3, 624, 448);
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

  button11 = gtk_button_new ();
  gtk_widget_show (button11);
  gtk_fixed_put (GTK_FIXED (fixed1), button11, 240, 448);
  gtk_widget_set_size_request (button11, 136, 40);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (button11), alignment11);

  hbox11 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (alignment11), hbox11);

  image11 = gtk_image_new_from_stock ("gtk-about", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox11), image11, FALSE, FALSE, 0);

  label33 = gtk_label_new_with_mnemonic (_("  Afficher"));
  gtk_widget_show (label33);
  gtk_box_pack_start (GTK_BOX (hbox11), label33, FALSE, FALSE, 0);

  label34 = gtk_label_new (_("Entrer ID  :"));
  gtk_widget_show (label34);
  gtk_fixed_put (GTK_FIXED (fixed1), label34, 216, 288);
  gtk_widget_set_size_request (label34, 152, 40);

  g_signal_connect ((gpointer) treeview1, "row_activated",
                    G_CALLBACK (on_treeview1_row_activated),
                    NULL);
  g_signal_connect ((gpointer) button14, "clicked",
                    G_CALLBACK (on_chercher_clicked),
                    NULL);
  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_Ajouter1_clicked),
                    NULL);
  g_signal_connect ((gpointer) button2, "clicked",
                    G_CALLBACK (on_modifier1_clicked),
                    NULL);
  g_signal_connect ((gpointer) button3, "clicked",
                    G_CALLBACK (on_supprimer_clicked),
                    NULL);
  g_signal_connect ((gpointer) button11, "clicked",
                    G_CALLBACK (on_afficher_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Gestiondeplantation, Gestiondeplantation, "Gestiondeplantation");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, entry20, "entry20");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, label1, "label1");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, image14, "image14");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, button14, "button14");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, image1, "image1");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, label2, "label2");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, image13, "image13");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, button12, "button12");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, image12, "image12");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, button1, "button1");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, image4, "image4");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, label5, "label5");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, button2, "button2");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, image3, "image3");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, label4, "label4");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, button3, "button3");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, image2, "image2");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, label3, "label3");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, button11, "button11");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, image11, "image11");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, label33, "label33");
  GLADE_HOOKUP_OBJECT (Gestiondeplantation, label34, "label34");

  return Gestiondeplantation;
}

GtkWidget*
create_Ajouter_plante (void)
{
  GtkWidget *Ajouter_plante;
  GtkWidget *fixed2;
  GtkWidget *entry3;
  GtkWidget *entry5;
  GtkWidget *entry7;
  GtkWidget *label12;
  GtkWidget *label6;
  GtkWidget *label17;
  GtkWidget *label7;
  GtkWidget *label16;
  GtkWidget *button6;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label15;
  GtkObject *spinbutton1_adj;
  GtkWidget *spinbutton1;
  GtkObject *spinbutton2_adj;
  GtkWidget *spinbutton2;
  GtkWidget *label8;
  GtkWidget *button5;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label14;
  GtkObject *spinbutton3_adj;
  GtkWidget *spinbutton3;
  GtkWidget *label38;
  GtkWidget *label39;
  GtkWidget *label40;
  GtkObject *spinbutton7_adj;
  GtkWidget *spinbutton7;
  GtkWidget *label35;
  GtkWidget *combobox1;

  Ajouter_plante = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Ajouter_plante), _("Ajout d'une plante"));
  gtk_window_set_resizable (GTK_WINDOW (Ajouter_plante), FALSE);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (Ajouter_plante), fixed2);
  gtk_widget_set_size_request (fixed2, 612, 400);

  entry3 = gtk_entry_new ();
  gtk_widget_show (entry3);
  gtk_fixed_put (GTK_FIXED (fixed2), entry3, 152, 48);
  gtk_widget_set_size_request (entry3, 160, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry3), 8226);

  entry5 = gtk_entry_new ();
  gtk_widget_show (entry5);
  gtk_fixed_put (GTK_FIXED (fixed2), entry5, 152, 144);
  gtk_widget_set_size_request (entry5, 160, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry5), 8226);

  entry7 = gtk_entry_new ();
  gtk_widget_show (entry7);
  gtk_fixed_put (GTK_FIXED (fixed2), entry7, 152, 96);
  gtk_widget_set_size_request (entry7, 160, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry7), 8226);

  label12 = gtk_label_new (_("Nom :"));
  gtk_widget_show (label12);
  gtk_fixed_put (GTK_FIXED (fixed2), label12, 0, 48);
  gtk_widget_set_size_request (label12, 72, 32);

  label6 = gtk_label_new (_("Type :"));
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed2), label6, 0, 144);
  gtk_widget_set_size_request (label6, 72, 32);

  label17 = gtk_label_new (_("Saison :"));
  gtk_widget_show (label17);
  gtk_fixed_put (GTK_FIXED (fixed2), label17, 8, 192);
  gtk_widget_set_size_request (label17, 72, 32);

  label7 = gtk_label_new (_("ID :"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed2), label7, 0, 96);
  gtk_widget_set_size_request (label7, 56, 32);

  label16 = gtk_label_new (_("Nombre :"));
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed2), label16, 8, 280);
  gtk_widget_set_size_request (label16, 80, 32);

  button6 = gtk_button_new ();
  gtk_widget_show (button6);
  gtk_fixed_put (GTK_FIXED (fixed2), button6, 8, 8);
  gtk_widget_set_size_request (button6, 112, 40);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (button6), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label15 = gtk_label_new_with_mnemonic (_("  Retour"));
  gtk_widget_show (label15);
  gtk_box_pack_start (GTK_BOX (hbox6), label15, FALSE, FALSE, 0);

  spinbutton1_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton1_adj), 1, 0);
  gtk_widget_show (spinbutton1);
  gtk_fixed_put (GTK_FIXED (fixed2), spinbutton1, 171, 240);
  gtk_widget_set_size_request (spinbutton1, 60, 27);

  spinbutton2_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton2_adj), 1, 0);
  gtk_widget_show (spinbutton2);
  gtk_fixed_put (GTK_FIXED (fixed2), spinbutton2, 272, 240);
  gtk_widget_set_size_request (spinbutton2, 60, 27);

  label8 = gtk_label_new (_("Date de plantation :"));
  gtk_widget_show (label8);
  gtk_fixed_put (GTK_FIXED (fixed2), label8, 0, 232);
  gtk_widget_set_size_request (label8, 136, 40);

  button5 = gtk_button_new ();
  gtk_widget_show (button5);
  gtk_fixed_put (GTK_FIXED (fixed2), button5, 424, 136);
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

  spinbutton3_adj = gtk_adjustment_new (2020, 2020, 2050, 1, 10, 10);
  spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton3_adj), 1, 0);
  gtk_widget_show (spinbutton3);
  gtk_fixed_put (GTK_FIXED (fixed2), spinbutton3, 384, 240);
  gtk_widget_set_size_request (spinbutton3, 60, 27);

  label38 = gtk_label_new (_("Jour:"));
  gtk_widget_show (label38);
  gtk_fixed_put (GTK_FIXED (fixed2), label38, 112, 240);
  gtk_widget_set_size_request (label38, 88, 24);

  label39 = gtk_label_new (_("Mois :"));
  gtk_widget_show (label39);
  gtk_fixed_put (GTK_FIXED (fixed2), label39, 216, 232);
  gtk_widget_set_size_request (label39, 72, 40);

  label40 = gtk_label_new (_("Ann\303\251e:"));
  gtk_widget_show (label40);
  gtk_fixed_put (GTK_FIXED (fixed2), label40, 328, 240);
  gtk_widget_set_size_request (label40, 57, 24);

  spinbutton7_adj = gtk_adjustment_new (1, 1, 200, 1, 10, 10);
  spinbutton7 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton7_adj), 1, 0);
  gtk_widget_show (spinbutton7);
  gtk_fixed_put (GTK_FIXED (fixed2), spinbutton7, 152, 280);
  gtk_widget_set_size_request (spinbutton7, 60, 27);

  label35 = gtk_label_new ("");
  gtk_widget_show (label35);
  gtk_fixed_put (GTK_FIXED (fixed2), label35, 320, 192);
  gtk_widget_set_size_request (label35, 232, 40);

  combobox1 = gtk_combo_box_new_text ();
  gtk_widget_show (combobox1);
  gtk_fixed_put (GTK_FIXED (fixed2), combobox1, 152, 192);
  gtk_widget_set_size_request (combobox1, 128, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("Printemps"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("\303\211t\303\251"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("Automne"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("Hiver"));

  g_signal_connect ((gpointer) button6, "clicked",
                    G_CALLBACK (on_retour1_clicked),
                    NULL);
  g_signal_connect ((gpointer) button5, "clicked",
                    G_CALLBACK (on_ajouter_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Ajouter_plante, Ajouter_plante, "Ajouter_plante");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, entry3, "entry3");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, entry5, "entry5");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, entry7, "entry7");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, label12, "label12");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, label6, "label6");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, label17, "label17");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, label7, "label7");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, label16, "label16");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, button6, "button6");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, image6, "image6");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, label15, "label15");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, spinbutton1, "spinbutton1");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, spinbutton2, "spinbutton2");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, label8, "label8");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, button5, "button5");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, image5, "image5");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, label14, "label14");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, spinbutton3, "spinbutton3");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, label38, "label38");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, label39, "label39");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, label40, "label40");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, spinbutton7, "spinbutton7");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, label35, "label35");
  GLADE_HOOKUP_OBJECT (Ajouter_plante, combobox1, "combobox1");

  return Ajouter_plante;
}

GtkWidget*
create_Modifier_plante (void)
{
  GtkWidget *Modifier_plante;
  GtkWidget *fixed3;
  GtkWidget *entry9;
  GtkWidget *entry10;
  GtkWidget *entry11;
  GtkWidget *label25;
  GtkWidget *label20;
  GtkWidget *label19;
  GtkWidget *label18;
  GtkWidget *label27;
  GtkWidget *button8;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label29;
  GtkWidget *label41;
  GtkObject *spinbutton4_adj;
  GtkWidget *spinbutton4;
  GtkWidget *label42;
  GtkObject *spinbutton5_adj;
  GtkWidget *spinbutton5;
  GtkWidget *label43;
  GtkObject *spinbutton6_adj;
  GtkWidget *spinbutton6;
  GtkWidget *button7;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label28;
  GtkWidget *label21;
  GtkObject *spinbutton8_adj;
  GtkWidget *spinbutton8;
  GtkWidget *label36;
  GtkWidget *combobox2;

  Modifier_plante = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (Modifier_plante, 555, 350);
  gtk_window_set_title (GTK_WINDOW (Modifier_plante), _("Modifier une plante"));
  gtk_window_set_resizable (GTK_WINDOW (Modifier_plante), FALSE);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (Modifier_plante), fixed3);

  entry9 = gtk_entry_new ();
  gtk_widget_show (entry9);
  gtk_fixed_put (GTK_FIXED (fixed3), entry9, 144, 104);
  gtk_widget_set_size_request (entry9, 168, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry9), 8226);

  entry10 = gtk_entry_new ();
  gtk_widget_show (entry10);
  gtk_fixed_put (GTK_FIXED (fixed3), entry10, 144, 144);
  gtk_widget_set_size_request (entry10, 168, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry10), 8226);

  entry11 = gtk_entry_new ();
  gtk_widget_show (entry11);
  gtk_fixed_put (GTK_FIXED (fixed3), entry11, 144, 56);
  gtk_widget_set_size_request (entry11, 168, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry11), 8226);

  label25 = gtk_label_new (_("Nom :"));
  gtk_widget_show (label25);
  gtk_fixed_put (GTK_FIXED (fixed3), label25, 0, 96);
  gtk_widget_set_size_request (label25, 88, 49);

  label20 = gtk_label_new (_("ID :"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed3), label20, 8, 56);
  gtk_widget_set_size_request (label20, 56, 33);

  label19 = gtk_label_new (_("Type :"));
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed3), label19, 8, 144);
  gtk_widget_set_size_request (label19, 72, 33);

  label18 = gtk_label_new (_("Saison :"));
  gtk_widget_show (label18);
  gtk_fixed_put (GTK_FIXED (fixed3), label18, 16, 192);
  gtk_widget_set_size_request (label18, 64, 33);

  label27 = gtk_label_new (_("Nombre :"));
  gtk_widget_show (label27);
  gtk_fixed_put (GTK_FIXED (fixed3), label27, 8, 296);
  gtk_widget_set_size_request (label27, 88, 33);

  button8 = gtk_button_new ();
  gtk_widget_show (button8);
  gtk_fixed_put (GTK_FIXED (fixed3), button8, 8, 8);
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

  label29 = gtk_label_new_with_mnemonic (_("  Retour"));
  gtk_widget_show (label29);
  gtk_box_pack_start (GTK_BOX (hbox8), label29, FALSE, FALSE, 0);

  label41 = gtk_label_new (_("Jour:"));
  gtk_widget_show (label41);
  gtk_fixed_put (GTK_FIXED (fixed3), label41, 112, 240);
  gtk_widget_set_size_request (label41, 88, 24);

  spinbutton4_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton4_adj), 1, 0);
  gtk_widget_show (spinbutton4);
  gtk_fixed_put (GTK_FIXED (fixed3), spinbutton4, 171, 240);
  gtk_widget_set_size_request (spinbutton4, 60, 27);

  label42 = gtk_label_new (_("Mois :"));
  gtk_widget_show (label42);
  gtk_fixed_put (GTK_FIXED (fixed3), label42, 216, 232);
  gtk_widget_set_size_request (label42, 72, 40);

  spinbutton5_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton5_adj), 1, 0);
  gtk_widget_show (spinbutton5);
  gtk_fixed_put (GTK_FIXED (fixed3), spinbutton5, 272, 240);
  gtk_widget_set_size_request (spinbutton5, 60, 27);

  label43 = gtk_label_new (_("Ann\303\251e:"));
  gtk_widget_show (label43);
  gtk_fixed_put (GTK_FIXED (fixed3), label43, 328, 240);
  gtk_widget_set_size_request (label43, 57, 24);

  spinbutton6_adj = gtk_adjustment_new (2020, 2020, 2050, 1, 10, 10);
  spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton6_adj), 1, 0);
  gtk_widget_show (spinbutton6);
  gtk_fixed_put (GTK_FIXED (fixed3), spinbutton6, 384, 240);
  gtk_widget_set_size_request (spinbutton6, 60, 27);

  button7 = gtk_button_new ();
  gtk_widget_show (button7);
  gtk_fixed_put (GTK_FIXED (fixed3), button7, 432, 144);
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

  label21 = gtk_label_new (_("Date de plantation :"));
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed3), label21, 0, 232);
  gtk_widget_set_size_request (label21, 144, 40);

  spinbutton8_adj = gtk_adjustment_new (1, 1, 200, 1, 10, 10);
  spinbutton8 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton8_adj), 1, 0);
  gtk_widget_show (spinbutton8);
  gtk_fixed_put (GTK_FIXED (fixed3), spinbutton8, 144, 296);
  gtk_widget_set_size_request (spinbutton8, 60, 27);

  label36 = gtk_label_new ("");
  gtk_widget_show (label36);
  gtk_fixed_put (GTK_FIXED (fixed3), label36, 320, 192);
  gtk_widget_set_size_request (label36, 224, 40);

  combobox2 = gtk_combo_box_new_text ();
  gtk_widget_show (combobox2);
  gtk_fixed_put (GTK_FIXED (fixed3), combobox2, 144, 192);
  gtk_widget_set_size_request (combobox2, 128, 32);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2), _("Printemps"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2), _("\303\211t\303\251"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2), _("Automne"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2), _("Hiver"));

  g_signal_connect ((gpointer) button8, "clicked",
                    G_CALLBACK (on_retour2_clicked),
                    NULL);
  g_signal_connect ((gpointer) button7, "clicked",
                    G_CALLBACK (on_modifier_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Modifier_plante, Modifier_plante, "Modifier_plante");
  GLADE_HOOKUP_OBJECT (Modifier_plante, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (Modifier_plante, entry9, "entry9");
  GLADE_HOOKUP_OBJECT (Modifier_plante, entry10, "entry10");
  GLADE_HOOKUP_OBJECT (Modifier_plante, entry11, "entry11");
  GLADE_HOOKUP_OBJECT (Modifier_plante, label25, "label25");
  GLADE_HOOKUP_OBJECT (Modifier_plante, label20, "label20");
  GLADE_HOOKUP_OBJECT (Modifier_plante, label19, "label19");
  GLADE_HOOKUP_OBJECT (Modifier_plante, label18, "label18");
  GLADE_HOOKUP_OBJECT (Modifier_plante, label27, "label27");
  GLADE_HOOKUP_OBJECT (Modifier_plante, button8, "button8");
  GLADE_HOOKUP_OBJECT (Modifier_plante, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (Modifier_plante, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (Modifier_plante, image8, "image8");
  GLADE_HOOKUP_OBJECT (Modifier_plante, label29, "label29");
  GLADE_HOOKUP_OBJECT (Modifier_plante, label41, "label41");
  GLADE_HOOKUP_OBJECT (Modifier_plante, spinbutton4, "spinbutton4");
  GLADE_HOOKUP_OBJECT (Modifier_plante, label42, "label42");
  GLADE_HOOKUP_OBJECT (Modifier_plante, spinbutton5, "spinbutton5");
  GLADE_HOOKUP_OBJECT (Modifier_plante, label43, "label43");
  GLADE_HOOKUP_OBJECT (Modifier_plante, spinbutton6, "spinbutton6");
  GLADE_HOOKUP_OBJECT (Modifier_plante, button7, "button7");
  GLADE_HOOKUP_OBJECT (Modifier_plante, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (Modifier_plante, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (Modifier_plante, image7, "image7");
  GLADE_HOOKUP_OBJECT (Modifier_plante, label28, "label28");
  GLADE_HOOKUP_OBJECT (Modifier_plante, label21, "label21");
  GLADE_HOOKUP_OBJECT (Modifier_plante, spinbutton8, "spinbutton8");
  GLADE_HOOKUP_OBJECT (Modifier_plante, label36, "label36");
  GLADE_HOOKUP_OBJECT (Modifier_plante, combobox2, "combobox2");

  return Modifier_plante;
}

GtkWidget*
create_Supprimer_plante (void)
{
  GtkWidget *Supprimer_plante;
  GtkWidget *fixed5;
  GtkWidget *entry21;
  GtkWidget *button10;
  GtkWidget *alignment10;
  GtkWidget *hbox10;
  GtkWidget *image10;
  GtkWidget *label32;
  GtkWidget *id24;
  GtkWidget *button9;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image9;
  GtkWidget *label31;
  GtkWidget *label30;
  GtkWidget *label37;

  Supprimer_plante = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (Supprimer_plante, 400, 200);
  gtk_window_set_title (GTK_WINDOW (Supprimer_plante), _("Supprimer une plante"));
  gtk_window_set_resizable (GTK_WINDOW (Supprimer_plante), FALSE);

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_container_add (GTK_CONTAINER (Supprimer_plante), fixed5);

  entry21 = gtk_entry_new ();
  gtk_widget_show (entry21);
  gtk_fixed_put (GTK_FIXED (fixed5), entry21, 56, 80);
  gtk_widget_set_size_request (entry21, 128, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry21), 8226);

  button10 = gtk_button_new ();
  gtk_widget_show (button10);
  gtk_fixed_put (GTK_FIXED (fixed5), button10, 0, 8);
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

  label32 = gtk_label_new_with_mnemonic (_("  Retour"));
  gtk_widget_show (label32);
  gtk_box_pack_start (GTK_BOX (hbox10), label32, FALSE, FALSE, 0);

  id24 = gtk_label_new (_("ID :"));
  gtk_widget_show (id24);
  gtk_fixed_put (GTK_FIXED (fixed5), id24, 0, 88);
  gtk_widget_set_size_request (id24, 73, 24);

  button9 = gtk_button_new ();
  gtk_widget_show (button9);
  gtk_fixed_put (GTK_FIXED (fixed5), button9, 256, 80);
  gtk_widget_set_size_request (button9, 112, 40);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (button9), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image9 = gtk_image_new_from_stock ("gtk-yes", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox9), image9, FALSE, FALSE, 0);

  label31 = gtk_label_new_with_mnemonic (_("    Confirmer"));
  gtk_widget_show (label31);
  gtk_box_pack_start (GTK_BOX (hbox9), label31, FALSE, FALSE, 0);

  label30 = gtk_label_new (_("Etes-vous sure de supprimer la plante   ?"));
  gtk_widget_show (label30);
  gtk_fixed_put (GTK_FIXED (fixed5), label30, 32, 40);
  gtk_widget_set_size_request (label30, 344, 40);

  label37 = gtk_label_new ("");
  gtk_widget_show (label37);
  gtk_fixed_put (GTK_FIXED (fixed5), label37, 160, 128);
  gtk_widget_set_size_request (label37, 224, 40);

  g_signal_connect ((gpointer) button10, "clicked",
                    G_CALLBACK (on_retour3_clicked),
                    NULL);
  g_signal_connect ((gpointer) button9, "clicked",
                    G_CALLBACK (on_confirmer_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Supprimer_plante, Supprimer_plante, "Supprimer_plante");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, entry21, "entry21");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, button10, "button10");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, hbox10, "hbox10");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, image10, "image10");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, label32, "label32");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, id24, "id24");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, button9, "button9");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, image9, "image9");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, label31, "label31");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, label30, "label30");
  GLADE_HOOKUP_OBJECT (Supprimer_plante, label37, "label37");

  return Supprimer_plante;
}

