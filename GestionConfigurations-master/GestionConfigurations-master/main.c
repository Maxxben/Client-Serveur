#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "res_serveur/confServeur.h"
#include "res_client/confClient.h"





int main(int argc, char* argv[]) {
    Partie partie1 = configurate();
    printf("chargement de la configuration 'ConfigServeur.ini': nombreRound=%d, MiseDeA=%d, MiseDeB=%d\n",
           partie1.nb_round, partie1.mise_a, partie1.mise_b);
    ConfigClient conf = configurateClient();
    printf("chargement de la configuration 'ConfigClient.ini': identifiant=%d, Ip=%s:%d\n",
           conf.identifiant, conf.ipServeur, conf.port);
}
