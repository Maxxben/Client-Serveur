/**
 * @file interfaceJeu.c
 * @author Antoine Chassefiere & Thomas Chemin
 */

#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>

#include "interfaceJeu.h"



GtkBuilder *builder = NULL;

GtkWidget *windowJeu;
GtkWidget *fixedJeu;

GtkWidget *fixedMise;
GtkWidget *btn25;
GtkWidget *btn50;
GtkWidget *btn100;

GtkWidget *fixedRestants;
GtkWidget *nbRoundsRestants;
GtkWidget *nbJetonsRestants;

GtkWidget *txtviewRounds;
GtkWidget *txtviewJetons;

GtkWidget *fixedChoix;
GtkWidget *btnCooperer;
GtkWidget *btnTrahir;

GtkWidget *btnValider;


int timer_id = 0;
int elapsed_time = 0;

/**
 * @brief Cette fonction nous permet de choisir entre 3 mises différentes : 25, 50 et 100
 * et deux choix : trahir et cooperer
 * on la relance deux fois pour chaque liste
 */
void OnValider(GtkWidget *pBtn, gpointer data)
{
    GSList *btnListe; // liste de tous les boutons de l'interface
    const gchar *sLabel;
 
    /* Récupération de la liste des boutons */
    btnListe = gtk_radio_button_get_group(GTK_RADIO_BUTTON(data));
 
    /* Parcours de la liste */
    while(btnListe)
    {
        /* Le bouton est-il sélectionné */
        if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(btnListe->data)))
        {
            /* OUI -> on copie le label du bouton */
            sLabel = gtk_button_get_label(GTK_BUTTON(btnListe->data));
            /* On met la liste a NULL pour sortir de la boucle */
            btnListe = NULL;
        }
        else
        {
            /* NON -> on passe au bouton suivant */
            btnListe = g_slist_next(btnListe);
        }
    }
}


/**
 * @brief fonction pour afficher le nombre de rounds et de jetons restants
 */

void affichage() {
    GtkTextBuffer *bufferJetons;
    GtkTextBuffer *bufferRounds;

    textJetonsRestants = "100"; //importer le nombre de jetons en int et le convertir en char
    textRoundsRestants = "10"; //importer le nombre de jetons en int et le convertir en char
    buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (textJetons)); 
    gtk_text_buffer_set_text (buffer, textJetons); 

}


/**
 * destroy_window() :
 * @brief Fonction de fermeture de la fenetre cette fonction est invoke par le gestionnaire d'evenement
 */
void destroy_window() {
    printf("Vous quittez le jeu\n ");
    gtk_main_quit();
}