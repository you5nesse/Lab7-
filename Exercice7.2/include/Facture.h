#ifndef FACTURE_H
#define FACTURE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Facture {
private:
    struct Article {
        int quantite;
        string nom;
        float prixUnitaire;
        float tauxTVA;
    };

    vector<Article> articles;

public:
    // Surcharges de la méthode ajouterArticle
    void ajouterArticle(string nom, float prixUnitaire);
    void ajouterArticle(string nom, float prixUnitaire, int quantite);
    void ajouterArticle(string nom, float prixUnitaire, int quantite, float tauxTVA);

    // Méthode pour afficher le total
    void afficherTotal();
};

#endif // FACTURE_H
