//
// Created by Admin on 24/04/2022.
//

#include "../Header/exercice1.h"
#include "iostream"

void exercice1(){
    debug();
    valeur(4, 8);

}

// Ecrire une macro de debuggage qui affiche systématiquement le numéro de la ligne et le nom du fichier

void debug(){
    printf("Nom du fichier : %s, ligne numero = %d.\n", __FILE__, __LINE__);
}

// Ecrire une macro qui rend le maximum de deux valeurs

void valeur(int a, int b) {
    if (a > b) {
        printf("%d est plus grand que %d.\n", a, b);
    } else if (a < b) {
        printf("%d est plus grand que %d.\n", b, a);
    } else {
        printf("%d est égal à %d.\n", a, b);
    }
}