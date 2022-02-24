cmake_minimum_required(VERSION 3.20)
project(GestionConfigurations C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled main.c
        res/ini.h
        res/ini.c
        res_serveur/confServeur.h
        res_serveur/confServeur.c res_client/confClient.h res_client/confClient.c)
