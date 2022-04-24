//
// Created by Admin on 24/04/2022.
//

#ifndef TP3C_EXERCICE2_H
#define TP3C_EXERCICE2_H
enum Sexe {INCONNU=0, MASCULIN=1, FEMININ=2};

struct Personne {
    int numero;
    char nom[10];
    Sexe sexe;
};

void Test_Fonctions();
void creer_personne(Personne *p);
void detruire_personne(Personne *p);
void initialiser_personne(Personne *p, int numero, char *nom, Sexe sexe);
void afficher_personne(Personne *p);
void nom_personne(Personne *p, char *nom);
void sexe_personne(Personne *p, Sexe *sexe);
void numero_personne(Personne *p, int *numero);
#endif //TP3C_EXERCICE2_H
