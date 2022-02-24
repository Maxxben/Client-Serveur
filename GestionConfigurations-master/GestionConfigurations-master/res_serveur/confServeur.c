//
// Created by jeremy on 11/24/21.
//

#include <stdlib.h>
#include "../res/ini.h"
#include "confServeur.h"
#include <string.h>

static int handler(void* config, const char* section, const char* name,
                   const char* value)
{
    Partie* pconfig = (Partie*)config;

#define MATCH(s, n) strcmp(section, s) == 0 && strcmp(name, n) == 0
    if (MATCH("ConfigurationPartie", "NombreDeRound")) {
        pconfig->nb_round = atoi(value);
    } else if (MATCH("ConfigurationPartie", "MiseJoueur1")) {
        pconfig->mise_a = atoi(value);
    } else if (MATCH("ConfigurationPartie", "MiseJoueur2")) {
        pconfig->mise_b = atoi(value);
    } else {
        return 0;  /* unknown section/name, error */
    }
    return 1;
}

Partie configurate(){
    Partie config;
    config.nb_round=0;
    config.mise_a=0;
    config.mise_b=0;

    if (ini_parse("../res_serveur/ConfigServeur.ini", handler, &config) < 0) {
        printf("le fichier de Partie ne peut pas etre chargé'ConfigServeur.ini'\n");
        return config;
    }

    return config;
}