//
// Created by jeremy on 11/26/21.
//

#ifndef WRITECSV_CSVWRITING_H
#define WRITECSV_CSVWRITING_H
typedef struct {
    int numeroRound;
    char* JeuJ1;
    char* JeuJ2;
    int MiseDeJ1;
    int MiseDeJ2;
    int Score1;
    int Score2;
}Resultat;

void printEnTete(FILE *file);
void printLine(FILE *file,Resultat res);
#endif //WRITECSV_CSVWRITING_H
