#include <iostream>
#include "Facture.h"

using namespace std;

int main() {
    Facture f;

    f.ajouterArticle("Cahier", 15.0f);                  // Version 1
    f.ajouterArticle("Stylo", 3.5f, 5);                 // Version 2
    f.ajouterArticle("PC Portable", 5000.0f, 1, 20.0f); // Version 3

    f.afficherTotal();

    return 0;
}
