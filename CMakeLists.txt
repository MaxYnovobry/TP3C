cmake_minimum_required(VERSION 3.21)
project(TP3C)

set(CMAKE_CXX_STANDARD 14)


file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "Source/.cpp" "Header/.h" "main.cpp")
add_executable(TP3C ${SOURCES} Header/exercice1.h Source/exercice1.cpp Header/exercice2.h Source/exercice2.cpp Source/menu.cpp Source/Gestion_Erreur.cpp Header/Gestion_Erreur.h Header/menu.h)