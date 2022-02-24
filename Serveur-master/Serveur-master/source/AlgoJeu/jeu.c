#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "jeu.h"

/**
 * @brief Traitement d'un round (mises et decisions et calcul du score) a partir de données initiales (Mises, Décisions, Score et Jetons) 
 * et renvoi d'une structure de données résultats (Mises, Décisions, Score et Jetons)
 * @param[in] Donnees_Initiales_Round d : Structure de données initiales, composée de 
 * deux instances de structure de données des clients (jetons, mise, décision et score)
 * @param[out] Donnees_Resultat_Round R : Structure de données de résultat, composée de
 * deux instances de structure de données des clients (jetons, mise, décision et score) ainsi que 
 * du nombre de round restant
 */
Donnees_Resultat_Round jeu_round(Donnees_Initiales_Round d) {

    Donnees_Resultat_Round R;
    // Constante multiplicatrice de gains en cas de DoubleCoopération
    int doubleCooperation = 2;


// Traitement du round
    

    // les 2 coopèrent
    if(d.i1.Décision == 0 && d.i2.Décision == 0) {
        R.o1.Score = d.i1.Mise*doubleCooperation;
        R.o2.Score = d.i2.Mise*doubleCooperation; 
    }
    // joueur A coopère & joueur B trahi
    else if(d.i1.Décision == 0 && d.i2.Décision == 1) {
        R.o1.Score = 0;
        R.o2.Score = d.i1.Mise + d.i2.Mise;        
    }
    // joueur A trahi & joueur B coopère
    else if(d.i1.Décision == 1 && d.i2.Décision == 0) {
        R.o1.Score = d.i1.Mise + d.i2.Mise;
        R.o2.Score = 0;
    }
    // les 2 trahissent
    else {
        int divMise = (d.i1.Mise + d.i2.Mise) / 2;
        R.o1.Score = divMise;
        R.o2.Score = divMise;
    }


//Implémentation de la structure de Resultat


    // Soustraction de la mise aux jetons
    R.o1.Jetons = d.i1.Jetons - d.i1.Mise;
    R.o2.Jetons = d.i2.Jetons - d.i2.Mise;
    
    R.o1.Mise = d.i1.Mise;
    R.o2.Mise = d.i2.Mise;

    R.o1.Décision = d.i1.Décision;
    R.o2.Décision = d.i2.Décision;

    // Addition du score
    R.o1.Score = d.i1.Score + R.o1.Score;
    R.o2.Score = d.i2.Score + R.o2.Score;

    R.RoundRestant = R.RoundRestant - 1;

    return R;
}
