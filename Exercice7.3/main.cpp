#include <iostream>
#include "CompteBancaire.h"

using namespace std;

int main() {
    // Test des constructeurs surchargés
    CompteBancaire c1;                 // Constructeur sans paramètre
    CompteBancaire c2(1000.0);         // Constructeur avec solde initial

    cout << "--- Test Compte 1 ---" << endl;
    c1.afficherSolde();
    c1.retrait(50.0); // Échec (solde insuffisant)

    cout << "\n--- Test Compte 2 ---" << endl;
    c2.afficherSolde();

    // Retrait avec code incorrect
    c2.retrait(200.0, 9999);

    // Retrait avec code correct
    c2.retrait(200.0, 1234);

    c2.afficherSolde();

    return 0;
}
