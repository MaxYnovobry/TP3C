//
// Created by maxim on 24/04/2022.
//

//
// Created by Laurie on 01/04/2022.
//


#include <iostream>
#include "../Header/exercice1.h"
#include "../Header/exercice2.h"
#include "../Header/Gestion_Erreur.h"


void Menu() {
    int choix;
    do {
        std::cout << "----------- Menu ------------" << std::endl;
        std::cout << "1. Exercice 1" << std::endl;
        std::cout << "2. Exercice 2" << std::endl;
        std::cout << "3. Quitter" << std::endl;
        std::cout <<"Entrez votre choix (1 a 3)  :" << std::endl;
        choix  = isANumber2(choix) ;
        switch (choix) {
            case 1:
                exercice1();
                break;
            case 2:
                Test_Fonctions();
                break;
            case 3:
                break;
            default :
                std::cout << "Choix invalide" << std::endl;
        }
    } while (choix != 3);

}

