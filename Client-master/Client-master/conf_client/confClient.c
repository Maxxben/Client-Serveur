//
// Created by jeremy on 11/24/21.
//

#include <stdlib.h>
#include "../res/ini.h"
#include "confClient.h"
#include <string.h>

static int handler(void* config, const char* section, const char* name,
                   const char* value)
{
    ConfigClient* pconfig = (ConfigClient*)config;

#define MATCH(s, n) strcmp(section, s) == 0 && strcmp(name, n) == 0
    if (MATCH("ConfigurationClient", "Identifiant")) {
        pconfig->identifiant = atoi(value);
    } else if (MATCH("ConfigurationClient", "IpDuServeur")) {
        pconfig->ipServeur = strdup(value);
    } else if (MATCH("ConfigurationClient", "Port")) {
        pconfig->port = atoi(value);
    } else {
        return 0;  /* unknown section/name, error */
    }
    return 1;
}

ConfigClient configurateClient(){
    ConfigClient config;
    config.identifiant=0;
    config.ipServeur=NULL;
    config.port=0;

    if (ini_parse("../res_client/ConfigClient.ini", handler, &config) < 0) {
        printf("le fichier de Partie ne peut pas etre chargé'ConfigClient.ini'\n");
        return config;
    }
    return config;
}