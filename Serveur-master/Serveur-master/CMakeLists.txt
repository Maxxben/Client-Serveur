cmake_minimum_required(VERSION 3.20)
project(serveur C)

set(CMAKE_C_STANDARD 99)

add_executable(serveur main.c source/srvcxnmanager.h source/srvcxnmanager.c
        source/conf_serveur/confServeur.h source/conf_serveur/confServeur.c
        source/res/ini.h source/res/ini.c
        source/output/CsvWriting.h source/output/CsvWriting.c
        source/AlgoJeu/jeu.c source/AlgoJeu/jeu.h)
SET(CMAKE_C_FLAGS -pthread)
add_custom_target(documentation COMMAND doxygen ../Doxyfile)