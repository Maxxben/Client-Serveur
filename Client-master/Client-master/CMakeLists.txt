cmake_minimum_required(VERSION 3.20)
project(client C)

set(CMAKE_C_STANDARD 99)

add_executable(client main.c clientcxnmanager.c clientcxnmanager.h
        conf_client/confClient.h conf_client/confClient.c
        res/ini.c res/ini.h)
SET(CMAKE_C_FLAGS -pthread)
