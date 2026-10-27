#ifndef CONTACT_H
#define CONTACT_H
#include<iostream>
using namespace std;

class Contact
{
    private:
        string nom;
        string telephone;
        string adresseEmail;
    public:
        Contact(string n){
        nom = n;
        }
        Contact(string n,string tel){
        nom = n;
        telephone = tel;
        }
        Contact(string n,string tel,string aEmail){
        nom = n;
        telephone = tel;
        adresseEmail = aEmail;
        }
        void afficher(){
        cout<<"Nom : "<<nom<<endl;
        cout<<"Telaphone : "<<telephone<<endl;
        cout<<"adresse Email : "<<adresseEmail<<endl;
        }

};

#endif // CONTACT_H
