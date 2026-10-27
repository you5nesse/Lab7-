#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H
#include <iostream>
#include <string>

using namespace std;

class CompteBancaire {
private:
    double solde;
    int codeSecurite;
public:

    CompteBancaire();                     // Sans solde initial (solde = 0)
    CompteBancaire(double soldeInitial);  // Avec solde initial


    void afficherSolde();
    void retrait(double montant);                    // Retrait simple
    void retrait(double montant, int codeSaisi);     // Retrait sécurisé avec code
};

#endif // COMPTEBANCAIRE_H
