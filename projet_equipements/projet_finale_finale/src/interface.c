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
create_window_home (void)
{
  GtkWidget *window_home;
  GtkWidget *notebook1;
  GtkWidget *fixed1;
  GtkWidget *treeview1;
  GtkWidget *entry_num_serie_recherche;
  GtkWidget *label3;
  GtkWidget *recherche;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label14;
  GtkWidget *afficher;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label16;
  GtkWidget *supprimer;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label18;
  GtkWidget *modifier;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label17;
  GtkWidget *label1;
  GtkWidget *fixed2;
  GtkWidget *entry_num_serie_ajout;
  GtkWidget *entry_marque_ajout;
  GtkWidget *entry_modele_ajout;
  GtkWidget *label7;
  GtkWidget *label6;
  GtkWidget *label5;
  GtkWidget *label4;
  GtkWidget *button_ajouter;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label15;
  GtkWidget *combobox1_ajout;
  GtkWidget *label2;

  window_home = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window_home), _("les equipement agricoles"));

  notebook1 = gtk_notebook_new ();
  gtk_widget_show (notebook1);
  gtk_container_add (GTK_CONTAINER (window_home), notebook1);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed1);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed1), treeview1, 16, 64);
  gtk_widget_set_size_request (treeview1, 472, 288);

  entry_num_serie_recherche = gtk_entry_new ();
  gtk_widget_show (entry_num_serie_recherche);
  gtk_fixed_put (GTK_FIXED (fixed1), entry_num_serie_recherche, 712, 32);
  gtk_widget_set_size_request (entry_num_serie_recherche, 152, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_num_serie_recherche), 8226);

  label3 = gtk_label_new (_("Num\303\251ro de s\303\251rie :"));
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed1), label3, 576, 32);
  gtk_widget_set_size_request (label3, 144, 32);

  recherche = gtk_button_new ();
  gtk_widget_show (recherche);
  gtk_fixed_put (GTK_FIXED (fixed1), recherche, 872, 32);
  gtk_widget_set_size_request (recherche, 88, 32);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (recherche), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label14 = gtk_label_new_with_mnemonic (_("Chercher"));
  gtk_widget_show (label14);
  gtk_box_pack_start (GTK_BOX (hbox1), label14, FALSE, FALSE, 0);

  afficher = gtk_button_new ();
  gtk_widget_show (afficher);
  gtk_fixed_put (GTK_FIXED (fixed1), afficher, 760, 104);
  gtk_widget_set_size_request (afficher, 208, 40);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (afficher), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-media-play", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label16 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label16);
  gtk_box_pack_start (GTK_BOX (hbox3), label16, FALSE, FALSE, 0);

  supprimer = gtk_button_new ();
  gtk_widget_show (supprimer);
  gtk_fixed_put (GTK_FIXED (fixed1), supprimer, 760, 160);
  gtk_widget_set_size_request (supprimer, 208, 40);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (supprimer), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label18 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (label18);
  gtk_box_pack_start (GTK_BOX (hbox5), label18, FALSE, FALSE, 0);

  modifier = gtk_button_new ();
  gtk_widget_show (modifier);
  gtk_fixed_put (GTK_FIXED (fixed1), modifier, 760, 216);
  gtk_widget_set_size_request (modifier, 208, 40);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (modifier), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label17 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label17);
  gtk_box_pack_start (GTK_BOX (hbox4), label17, FALSE, FALSE, 0);

  label1 = gtk_label_new (_("Equipements"));
  gtk_widget_show (label1);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), label1);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed2);

  entry_num_serie_ajout = gtk_entry_new ();
  gtk_widget_show (entry_num_serie_ajout);
  gtk_fixed_put (GTK_FIXED (fixed2), entry_num_serie_ajout, 280, 80);
  gtk_widget_set_size_request (entry_num_serie_ajout, 184, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_num_serie_ajout), 8226);

  entry_marque_ajout = gtk_entry_new ();
  gtk_widget_show (entry_marque_ajout);
  gtk_fixed_put (GTK_FIXED (fixed2), entry_marque_ajout, 280, 176);
  gtk_widget_set_size_request (entry_marque_ajout, 184, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_marque_ajout), 8226);

  entry_modele_ajout = gtk_entry_new ();
  gtk_widget_show (entry_modele_ajout);
  gtk_fixed_put (GTK_FIXED (fixed2), entry_modele_ajout, 280, 224);
  gtk_widget_set_size_request (entry_modele_ajout, 184, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_modele_ajout), 8226);

  label7 = gtk_label_new (_("Mod\303\250le de l'\303\251quipement :"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed2), label7, 0, 224);
  gtk_widget_set_size_request (label7, 232, 40);

  label6 = gtk_label_new (_("Marque de l'\303\251quipement :"));
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed2), label6, 0, 176);
  gtk_widget_set_size_request (label6, 232, 40);

  label5 = gtk_label_new (_("Type de l'\303\251quipement :"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed2), label5, 8, 128);
  gtk_widget_set_size_request (label5, 192, 48);

  label4 = gtk_label_new (_("Num\303\251ro de s\303\251rie de l'\303\251quipement :"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed2), label4, 32, 80);
  gtk_widget_set_size_request (label4, 232, 48);

  button_ajouter = gtk_button_new ();
  gtk_widget_show (button_ajouter);
  gtk_fixed_put (GTK_FIXED (fixed2), button_ajouter, 248, 304);
  gtk_widget_set_size_request (button_ajouter, 128, 48);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (button_ajouter), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label15 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label15);
  gtk_box_pack_start (GTK_BOX (hbox2), label15, FALSE, FALSE, 0);

  combobox1_ajout = gtk_combo_box_new_text ();
  gtk_widget_show (combobox1_ajout);
  gtk_fixed_put (GTK_FIXED (fixed2), combobox1_ajout, 280, 128);
  gtk_widget_set_size_request (combobox1_ajout, 184, 40);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1_ajout), _("tracteur"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1_ajout), _("camionette"));

  label2 = gtk_label_new (_("Ajout d'un \303\251quipement"));
  gtk_widget_show (label2);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), label2);

  g_signal_connect ((gpointer) treeview1, "row_activated",
                    G_CALLBACK (on_treeview1_row_activated),
                    NULL);
  g_signal_connect ((gpointer) recherche, "clicked",
                    G_CALLBACK (on_recherche_clicked),
                    NULL);
  g_signal_connect ((gpointer) afficher, "clicked",
                    G_CALLBACK (on_afficher_clicked),
                    NULL);
  g_signal_connect ((gpointer) supprimer, "clicked",
                    G_CALLBACK (on_supprimer_clicked),
                    NULL);
  g_signal_connect ((gpointer) modifier, "clicked",
                    G_CALLBACK (on_modifier_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_ajouter, "clicked",
                    G_CALLBACK (on_button_ajouter_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window_home, window_home, "window_home");
  GLADE_HOOKUP_OBJECT (window_home, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (window_home, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window_home, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (window_home, entry_num_serie_recherche, "entry_num_serie_recherche");
  GLADE_HOOKUP_OBJECT (window_home, label3, "label3");
  GLADE_HOOKUP_OBJECT (window_home, recherche, "recherche");
  GLADE_HOOKUP_OBJECT (window_home, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window_home, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (window_home, image1, "image1");
  GLADE_HOOKUP_OBJECT (window_home, label14, "label14");
  GLADE_HOOKUP_OBJECT (window_home, afficher, "afficher");
  GLADE_HOOKUP_OBJECT (window_home, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (window_home, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (window_home, image3, "image3");
  GLADE_HOOKUP_OBJECT (window_home, label16, "label16");
  GLADE_HOOKUP_OBJECT (window_home, supprimer, "supprimer");
  GLADE_HOOKUP_OBJECT (window_home, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (window_home, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (window_home, image5, "image5");
  GLADE_HOOKUP_OBJECT (window_home, label18, "label18");
  GLADE_HOOKUP_OBJECT (window_home, modifier, "modifier");
  GLADE_HOOKUP_OBJECT (window_home, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (window_home, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (window_home, image4, "image4");
  GLADE_HOOKUP_OBJECT (window_home, label17, "label17");
  GLADE_HOOKUP_OBJECT (window_home, label1, "label1");
  GLADE_HOOKUP_OBJECT (window_home, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (window_home, entry_num_serie_ajout, "entry_num_serie_ajout");
  GLADE_HOOKUP_OBJECT (window_home, entry_marque_ajout, "entry_marque_ajout");
  GLADE_HOOKUP_OBJECT (window_home, entry_modele_ajout, "entry_modele_ajout");
  GLADE_HOOKUP_OBJECT (window_home, label7, "label7");
  GLADE_HOOKUP_OBJECT (window_home, label6, "label6");
  GLADE_HOOKUP_OBJECT (window_home, label5, "label5");
  GLADE_HOOKUP_OBJECT (window_home, label4, "label4");
  GLADE_HOOKUP_OBJECT (window_home, button_ajouter, "button_ajouter");
  GLADE_HOOKUP_OBJECT (window_home, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (window_home, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (window_home, image2, "image2");
  GLADE_HOOKUP_OBJECT (window_home, label15, "label15");
  GLADE_HOOKUP_OBJECT (window_home, combobox1_ajout, "combobox1_ajout");
  GLADE_HOOKUP_OBJECT (window_home, label2, "label2");

  return window_home;
}

GtkWidget*
create_window_modification (void)
{
  GtkWidget *window_modification;
  GtkWidget *fixed3;
  GtkWidget *entry_num_serie_modif;
  GtkWidget *entry_marque_modif;
  GtkWidget *entry_modele_modif;
  GtkWidget *label8;
  GtkWidget *label9;
  GtkWidget *label10;
  GtkWidget *label11;
  GtkWidget *label12;
  GtkWidget *label13;
  GtkWidget *radiobutton_oui_panne;
  GSList *radiobutton_oui_panne_group = NULL;
  GtkWidget *radiobutton_non_panne;
  GtkWidget *radiobutton_occupee_status;
  GSList *radiobutton_occupee_status_group = NULL;
  GtkWidget *radiobutton_libre_status;
  GtkWidget *button_modifier_modif;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label19;
  GtkWidget *button_retour_modifier;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label20;
  GtkWidget *combobox2_modif;

  window_modification = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window_modification), _("modification d'un equipement"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (window_modification), fixed3);

  entry_num_serie_modif = gtk_entry_new ();
  gtk_widget_show (entry_num_serie_modif);
  gtk_fixed_put (GTK_FIXED (fixed3), entry_num_serie_modif, 336, 48);
  gtk_widget_set_size_request (entry_num_serie_modif, 184, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_num_serie_modif), 8226);

  entry_marque_modif = gtk_entry_new ();
  gtk_widget_show (entry_marque_modif);
  gtk_fixed_put (GTK_FIXED (fixed3), entry_marque_modif, 336, 144);
  gtk_widget_set_size_request (entry_marque_modif, 184, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_marque_modif), 8226);

  entry_modele_modif = gtk_entry_new ();
  gtk_widget_show (entry_modele_modif);
  gtk_fixed_put (GTK_FIXED (fixed3), entry_modele_modif, 336, 192);
  gtk_widget_set_size_request (entry_modele_modif, 184, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_modele_modif), 8226);

  label8 = gtk_label_new (_("Num\303\251ro de serie de l'\303\251quipement :"));
  gtk_widget_show (label8);
  gtk_fixed_put (GTK_FIXED (fixed3), label8, 96, 48);
  gtk_widget_set_size_request (label8, 232, 40);

  label9 = gtk_label_new (_("Type de l'\303\251quipement :"));
  gtk_widget_show (label9);
  gtk_fixed_put (GTK_FIXED (fixed3), label9, 96, 96);
  gtk_widget_set_size_request (label9, 232, 40);

  label10 = gtk_label_new (_("Marque de l'\303\251quipement :"));
  gtk_widget_show (label10);
  gtk_fixed_put (GTK_FIXED (fixed3), label10, 96, 144);
  gtk_widget_set_size_request (label10, 232, 40);

  label11 = gtk_label_new (_("Mod\303\250le de l'\303\251quipement :"));
  gtk_widget_show (label11);
  gtk_fixed_put (GTK_FIXED (fixed3), label11, 96, 192);
  gtk_widget_set_size_request (label11, 232, 40);

  label12 = gtk_label_new (_("Panne :"));
  gtk_widget_show (label12);
  gtk_fixed_put (GTK_FIXED (fixed3), label12, 256, 248);
  gtk_widget_set_size_request (label12, 80, 32);

  label13 = gtk_label_new (_("Status :"));
  gtk_widget_show (label13);
  gtk_fixed_put (GTK_FIXED (fixed3), label13, 256, 288);
  gtk_widget_set_size_request (label13, 80, 32);

  radiobutton_oui_panne = gtk_radio_button_new_with_mnemonic (NULL, _("Oui"));
  gtk_widget_show (radiobutton_oui_panne);
  gtk_fixed_put (GTK_FIXED (fixed3), radiobutton_oui_panne, 336, 248);
  gtk_widget_set_size_request (radiobutton_oui_panne, 116, 32);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton_oui_panne), radiobutton_oui_panne_group);
  radiobutton_oui_panne_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton_oui_panne));

  radiobutton_non_panne = gtk_radio_button_new_with_mnemonic (NULL, _("Non"));
  gtk_widget_show (radiobutton_non_panne);
  gtk_fixed_put (GTK_FIXED (fixed3), radiobutton_non_panne, 448, 248);
  gtk_widget_set_size_request (radiobutton_non_panne, 116, 32);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton_non_panne), radiobutton_oui_panne_group);
  radiobutton_oui_panne_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton_non_panne));

  radiobutton_occupee_status = gtk_radio_button_new_with_mnemonic (NULL, _("Occup\303\251e"));
  gtk_widget_show (radiobutton_occupee_status);
  gtk_fixed_put (GTK_FIXED (fixed3), radiobutton_occupee_status, 448, 288);
  gtk_widget_set_size_request (radiobutton_occupee_status, 116, 32);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton_occupee_status), radiobutton_occupee_status_group);
  radiobutton_occupee_status_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton_occupee_status));

  radiobutton_libre_status = gtk_radio_button_new_with_mnemonic (NULL, _("Libre"));
  gtk_widget_show (radiobutton_libre_status);
  gtk_fixed_put (GTK_FIXED (fixed3), radiobutton_libre_status, 336, 288);
  gtk_widget_set_size_request (radiobutton_libre_status, 116, 32);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton_libre_status), radiobutton_occupee_status_group);
  radiobutton_occupee_status_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton_libre_status));

  button_modifier_modif = gtk_button_new ();
  gtk_widget_show (button_modifier_modif);
  gtk_fixed_put (GTK_FIXED (fixed3), button_modifier_modif, 336, 328);
  gtk_widget_set_size_request (button_modifier_modif, 120, 37);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (button_modifier_modif), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label19 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label19);
  gtk_box_pack_start (GTK_BOX (hbox6), label19, FALSE, FALSE, 0);

  button_retour_modifier = gtk_button_new ();
  gtk_widget_show (button_retour_modifier);
  gtk_fixed_put (GTK_FIXED (fixed3), button_retour_modifier, 216, 328);
  gtk_widget_set_size_request (button_retour_modifier, 120, 37);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (button_retour_modifier), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label20 = gtk_label_new_with_mnemonic (_("Retour"));
  gtk_widget_show (label20);
  gtk_box_pack_start (GTK_BOX (hbox7), label20, FALSE, FALSE, 0);

  combobox2_modif = gtk_combo_box_new_text ();
  gtk_widget_show (combobox2_modif);
  gtk_fixed_put (GTK_FIXED (fixed3), combobox2_modif, 336, 96);
  gtk_widget_set_size_request (combobox2_modif, 184, 40);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2_modif), _("tracteur"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2_modif), _("camionette"));

  g_signal_connect ((gpointer) button_modifier_modif, "clicked",
                    G_CALLBACK (on_button_modifier_modif_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_retour_modifier, "clicked",
                    G_CALLBACK (on_button_retour_modifier_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window_modification, window_modification, "window_modification");
  GLADE_HOOKUP_OBJECT (window_modification, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (window_modification, entry_num_serie_modif, "entry_num_serie_modif");
  GLADE_HOOKUP_OBJECT (window_modification, entry_marque_modif, "entry_marque_modif");
  GLADE_HOOKUP_OBJECT (window_modification, entry_modele_modif, "entry_modele_modif");
  GLADE_HOOKUP_OBJECT (window_modification, label8, "label8");
  GLADE_HOOKUP_OBJECT (window_modification, label9, "label9");
  GLADE_HOOKUP_OBJECT (window_modification, label10, "label10");
  GLADE_HOOKUP_OBJECT (window_modification, label11, "label11");
  GLADE_HOOKUP_OBJECT (window_modification, label12, "label12");
  GLADE_HOOKUP_OBJECT (window_modification, label13, "label13");
  GLADE_HOOKUP_OBJECT (window_modification, radiobutton_oui_panne, "radiobutton_oui_panne");
  GLADE_HOOKUP_OBJECT (window_modification, radiobutton_non_panne, "radiobutton_non_panne");
  GLADE_HOOKUP_OBJECT (window_modification, radiobutton_occupee_status, "radiobutton_occupee_status");
  GLADE_HOOKUP_OBJECT (window_modification, radiobutton_libre_status, "radiobutton_libre_status");
  GLADE_HOOKUP_OBJECT (window_modification, button_modifier_modif, "button_modifier_modif");
  GLADE_HOOKUP_OBJECT (window_modification, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (window_modification, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (window_modification, image6, "image6");
  GLADE_HOOKUP_OBJECT (window_modification, label19, "label19");
  GLADE_HOOKUP_OBJECT (window_modification, button_retour_modifier, "button_retour_modifier");
  GLADE_HOOKUP_OBJECT (window_modification, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (window_modification, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (window_modification, image7, "image7");
  GLADE_HOOKUP_OBJECT (window_modification, label20, "label20");
  GLADE_HOOKUP_OBJECT (window_modification, combobox2_modif, "combobox2_modif");

  return window_modification;
}
