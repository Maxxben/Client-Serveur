

/**
 * @file   main.c
 * @author Antoine Chassefiere
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <stdbool.h>
#include "clientcxnmanager.h"
#include <gtk/gtk.h>
#include "interface/interfaceJeu.h"

int main(int argc, char** argv) {


    int sockfd;
    int status = 0;
    char msg[100];
    pthread_t thread;
    jeu jeu1;
    sockfd = open_connection();
    jeu1.test = 10;
    jeu1.test2 = 12;

    strcpy(msg, "Hello from Xeon"); //Xeon is the name of the this client
    printf("sending : %s\n", msg);
    write(sockfd, &jeu1, sizeof(jeu1));

    //Creation d'un pthread de lecture
    pthread_create(&thread, 0, threadProcess, &sockfd);

    //write(connection->sock,"Main APP Still running",15);
    pthread_detach(thread);
    do {
        fgets(msg, 100, stdin);
        //printf("sending : %s\n", msg);
        status = write(sockfd,&jeu1,sizeof(jeu));
        //memset(msg,'\0',100);
    } while (status != -1);

    Donnees_Client_Jeu donneesJeu;
    
    GtkWidget *windowJeu;

    gtk_init(&argc, &argv);
    
    builder = gtk_builder_new_from_file("InterfaceJeu.glade");

    windowJeu = GTK_WIDGET(gtk_builder_get_object(builder, "windowJeu"));
    
    gtk_builder_connect_signals(builder, NULL);

    g_signal_connect(G_OBJECT(btnValider), "clicked", G_CALLBACK(OnValider), btn25);
    g_signal_connect(G_OBJECT(btnValider), "clicked", G_CALLBACK(OnValider), btnCooperer);
    
    gtk_widget_show(windowJeu); //affichage de la fenetre
    
    gtk_main();
    return (EXIT_SUCCESS);
}
