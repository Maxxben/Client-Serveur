//
// Created by jeremy on 11/26/21.
//
#include <time.h>
#include <stdio.h>
#include "CsvWriting.h"


/// ecrit l'en tete d'un resultat de partie avec les informations correspondantes
/// \param file fichier de sortie dans lequelle les resultats sont inscrits
void printEnTete(FILE *file){
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    int h, min, s, day, mois, an;
    h = local->tm_hour;
    min = local->tm_min;
    s = local->tm_sec;
    day = local->tm_mday;
    mois = local->tm_mon + 1;
    an = local->tm_year + 1900;
    fprintf(file,"%02d/%02d/%d - %02d:%02d:%02d, JeuJ1, JeuJ2, MiseDeJ1, MiseDeJ2, Score de J1, Score de J2\n",day, mois, an, h, min, s);
}
/// ecrit dans un fichier une ligne avec le resultat du round actuel
/// \param file fichier de sortie dans lequelle les resultats sont inscrits
/// \param res struct resultats ou sont stockés les resultats du round actuel
void printLine(FILE *file,Resultat res){
    fprintf(file,"%d, %s, %s, %d, %d, %d, %d\n", res.numeroRound, res.JeuJ1, res.JeuJ2, res.MiseDeJ1, res.MiseDeJ2, res.Score1, res.Score2);
}