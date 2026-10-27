#include "Facture.h"
#include <iostream>

using namespace std;

// Version 1 : Nom et prix unitaire (quantité par défaut = 1, TVA par défaut = 0%)
void Facture::ajouterArticle(string nom, float prixUnitaire) {
    articles.push_back({1, nom, prixUnitaire, 0.0f});
}

// Version 2 : Nom, prix unitaire et quantité (TVA par défaut = 0%)
void Facture::ajouterArticle(string nom, float prixUnitaire, int quantite) {
    articles.push_back({quantite, nom, prixUnitaire, 0.0f});
}

// Version 3 : Nom, prix unitaire, quantité et taux de TVA
void Facture::ajouterArticle(string nom, float prixUnitaire, int quantite, float tauxTVA) {
    articles.push_back({quantite, nom, prixUnitaire, tauxTVA});
}

// Calcul et affichage du total HT et TTC
void Facture::afficherTotal() {
    float totalHT = 0.0f;
    float totalTTC = 0.0f;

    cout << "------ FACTURE ------" << endl;

    for (const auto &a : articles) {
        float ht = a.prixUnitaire * a.quantite;
        float ttc = ht * (1.0f + a.tauxTVA / 100.0f);

        totalHT += ht;
        totalTTC += ttc;

        cout << "- " << a.nom << " (x" << a.quantite << ") : "
             << a.prixUnitaire << " DH | TVA : " << a.tauxTVA << "%" << endl;
    }

    cout << "---------------------" << endl;
    cout << "Total HT  : " << totalHT << " DH" << endl;
    cout << "Total TTC : " << totalTTC << " DH" << endl;
}
