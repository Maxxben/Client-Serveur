# ProDyn
Dans ce tp nous abordons la recherche par dichotomie, la resolution du probleme du sac à dos
avec un algorithme glouton et la resolution d'un probleme de pixel avec la programmation
dynamique

## Installation
#### Prerequis :
avoir Cmake et un Compiler de c/c++ installé sur
sa machine

Installez : 
\`pkg-config --cflags gtk+-3.0 --libs gtk+-3.0\`   -rdynamic
glade gtk3-devel gtk+-devel gtk3-devel-docs
### Linux
* cloner le code ou telecharger le .zip et decompresser le
* se placer dans le dossier build et faire
* ```shell
    cmake ..
    make 
  ```
* le fichier executable a été géneré dans le repertoire build


## Documentation
Pour generer la documentation se placer dans le dossier source
### Linux
```shell
make documentation
```
La Doc est generé dans un dossier Doc à la racine du projet. Pour la
consulter il suffit d'ouvrir le fichier index.html avec un navigateur
## Configuration
le fichier de configuration ConfigServeur.ini permet de configurer les parametres d'une partie 
il doit etre modifié avant que le serveur soit lancer afin de garantir le bon fonctionnement de l'application 

## Fonctionnement
Le serveur de l'application de nessecite plus de parametrage une fois lancer 
il suffit de faire tourner le serveur dans un invité de commande linux


