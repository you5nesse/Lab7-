#include "CompteBancaire.h"
#include <iostream>

using namespace std;

// Constructeur sans paramètre
CompteBancaire::CompteBancaire() {
    solde = 0.0;
    codeSecurite = 1234; // Code par défaut
}

// Constructeur avec solde initial
CompteBancaire::CompteBancaire(double soldeInitial) {
    if (soldeInitial >= 0) {
        solde = soldeInitial;
    } else {
        solde = 0.0;
        cout << "Solde initial invalide. Mis a 0." << endl;
    }
    codeSecurite = 1234;
}

// Affichage du solde
void CompteBancaire::afficherSolde() {
    cout << "Solde actuel du compte : " << solde << " DH" << endl;
}

// Retrait simple (sans code)
void CompteBancaire::retrait(double montant) {
    if (montant > 0 && montant <= solde) {
        solde -= montant;
        cout << "Retrait de " << montant << " DH effectue avec succes." << endl;
    } else {
        cout << "Erreur : Montant invalide ou solde insuffisant." << endl;
    }
}

// Retrait sécurisé avec code de sécurité
void CompteBancaire::retrait(double montant, int codeSaisi) {
    if (codeSaisi != codeSecurite) {
        cout << "Erreur : Code de securite incorrect !" << endl;
        return;
    }

    // Si le code est correct, on effectue le même contrôle que le retrait simple
    if (montant > 0 && montant <= solde) {
        solde -= montant;
        cout << "Retrait securise de " << montant << " DH effectue avec succes." << endl;
    } else {
        cout << "Erreur : Montant invalide ou solde insuffisant." << endl;
    }
}
