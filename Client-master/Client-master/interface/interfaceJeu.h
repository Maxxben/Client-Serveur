#ifndef INTERFACEJEU_H
#define INTERFACEJEU_H

/*
* Structure des clients
*/
typedef struct {
    int Jetons;
    int Mise;
    int Décision;
    int Score;
} Donnees_Client_Jeu;

/**
 * @brief Fonction de fermeture de la fenetre cette fonction est invoke par le gestionnaire d'evenement
 */
void destroy_window()

/**
 * @brief fonction pour afficher le nombre de rounds et de jetons restants
 */
void affichage()

/**
 * @brief Cette fonction nous permet de choisir entre 3 mises différentes : 25, 50 et 100
 * et deux choix : trahir et cooperer
 * on la relance deux fois pour chaque liste 
 */
void OnValider(GtkWidget *pBtn, gpointer data)

#endif /* INTERFACEJEU_H */