//
// Created by maxim on 24/04/2022.
//


#include <iostream>
#include "../Header/Gestion_Erreur.h"
#include "limits"

// Write a program that can see if the input is a number or not

int isANumber(int nombre) {
    std::cin >> nombre;
    if (std::cin.fail()) {
        std::cout << "Erreur de saisie" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return isANumber(nombre);
    }

    else if (nombre < 0) {
        std::cout << "Veuillez saisir un nombre positif" << std::endl;
        return isANumber(nombre);
    }

    else if (nombre > INT_MAX) {
        std::cout << "Veuillez saisir un nombre inférieur à " << INT_MAX << std::endl;
        return isANumber(nombre);
    }

    else {
        return nombre;
    }
    return nombre;
}


// Write a program that can see if the input is an integer or not, if it is, it can be positive or negative and return the number

int isANumber2(int nombre) {
    std::cin >> nombre;
    if (std::cin.fail()) {
        std::cout << "Erreur de saisie" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return isANumber2(nombre);
    } else {
        return nombre;
    }
    return nombre;
}