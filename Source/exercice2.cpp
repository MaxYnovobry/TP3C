//
// Created by Admin on 24/04/2022.
//

#include "../Header/exercice2.h"
#include <iostream>
#include <string.h>



// Créer une fonction qui permet de créer un pointeur de la structure Personne

void creer_personne(Personne *p) {
    if (p == nullptr){
        std::cout << "Vous avez donne un pointeur null" << std::endl;
        return ;
    }
    p->numero = 0;
    p->sexe = INCONNU;
    p->nom[0] = '\0';
}

// Créer une fonction qui permet de détruire un pointeur de la structure Personne

void detruire_personne(Personne *p) {
    if (p == nullptr){
        std::cout << "Vous avez donne un pointeur null" << std::endl;
        return ;
    }
    delete p;
    p = nullptr;
    std::cout << "La personne a ete detruite" << std::endl;
}

// Créer une fonction qui permet d'initialiser les champs de la structure Personne

void initialiser_personne(Personne *p, int numero, char *nom, Sexe sexe) {
    if (p == nullptr){
        std::cout << "Vous avez donne un pointeur null" << std::endl;
        return ;
    }
    p->numero = numero;
    strcpy(p->nom, nom);
    p->sexe = sexe;
}

// Créer une fonction qui permet d'afficher les champs de la structure Personne

void afficher_personne(Personne *p) {
    if (p == nullptr){
        std::cout << "Vous avez donne un pointeur null" << std::endl;
        return ;
    }
    std::cout << "Numero : " << "0" << p->numero << std::endl;
    std::cout << "Nom : " << p->nom << std::endl;
    std::cout << "Sexe : ";
    switch (p->sexe) {
        case INCONNU:
            std::cout << "Inconnu" << std::endl;
            break;
        case MASCULIN:
            std::cout << "Masculin" << std::endl;
            break;
        case FEMININ:
            std::cout << "Feminin" << std::endl;
            break;
    }
}

// Créer une fonction qui permet de récupérer le nom de la structure Personne

void nom_personne(Personne *p, char *nom) {
    if (p == nullptr){
        std::cout << "Vous avez donne un pointeur null" << std::endl;
        return ;
    }
    strcpy(nom, p->nom);
}

// Créer une fonction qui permet de récupérer le sexe de la structure Personne

void sexe_personne(Personne *p, Sexe *sexe) {
    if (p == nullptr){
        std::cout << "Vous avez donne un pointeur null" << std::endl;
        return ;
    }
    *sexe = p->sexe;
}

// Créer une fonction qui permet de récupérer le numéro de la structure Personne

void numero_personne(Personne *p, int *numero) {
    if (p == nullptr){
        std::cout << "Vous avez donne un pointeur null" << std::endl;
        return ;
    }
    *numero = p->numero;
}

// Créer une fonction qui permet de tester les fonctions de la structure Personne

void Test_Fonctions() {
    Personne *p = new Personne;
    creer_personne(p);
    initialiser_personne(p, 6'25'47'16'49ULL , "Plouffy", MASCULIN);
    afficher_personne(p);
    char nom[10];
    nom_personne(p, nom);
    std::cout << "Nom : " << nom << std::endl;
    Sexe sexe;
    sexe_personne(p, &sexe);
    std::cout << "Sexe : " ;
    switch (sexe) {
        case INCONNU:
            std::cout << "Inconnu" << std::endl;
            break;
        case MASCULIN:
            std::cout << "Masculin" << std::endl;
            break;
        case FEMININ:
            std::cout << "Feminin" << std::endl;
            break;
    }
    int numero;
    numero_personne(p, &numero);
    std::cout << "Numero : " << "0"<< numero << std::endl;
    detruire_personne(p);
}