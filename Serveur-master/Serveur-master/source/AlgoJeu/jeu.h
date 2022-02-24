#ifndef JEU_H
#define JEU_H

typedef struct {
    int Jetons;
    int Mise;
    int Décision;
    int Score;
}Donnees_Client_Jeu;

typedef struct  {
    int RoundRestant;
    Donnees_Client_Jeu o1;
    Donnees_Client_Jeu o2;
}Donnees_Resultat_Round;

typedef struct {
    Donnees_Client_Jeu i1;
    Donnees_Client_Jeu i2;
}Donnees_Initiales_Round;

#endif /* JEU_H */

Donnees_Resultat_Round jeu_round(Donnees_Initiales_Round d);