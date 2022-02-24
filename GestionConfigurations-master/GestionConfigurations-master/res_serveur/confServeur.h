//
// Created by jeremy on 11/24/21.
//


#ifndef UNTITLED_CONFCLIENT_H
typedef struct
{
    int nb_round;
    int mise_a;
    int mise_b;

} Partie;


static int handler(void* config, const char* section, const char* name,const char* value);
Partie configurate();
#define UNTITLED_CONFIGURATION_H

#endif //UNTITLED_CONFCLIENT_H
