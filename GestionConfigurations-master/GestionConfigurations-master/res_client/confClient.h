//
// Created by jeremy on 11/24/21.
//

#ifndef UNTITLED_CONFCLIENT_H
#define UNTITLED_CONFCLIENT_H
typedef struct
{
    int identifiant;
    char* ipServeur;
    int port;

} ConfigClient;


static int handler(void* config, const char* section, const char* name,const char* value);
ConfigClient configurateClient();
#endif //UNTITLED_CONFCLIENT_H
