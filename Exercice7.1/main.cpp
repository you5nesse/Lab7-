#include <iostream>
#include<Contact.h>
using namespace std;

int main()
{
    Contact c1("ahmed");
    Contact c2("younesse","0656897845");
    Contact c3("hamza","0656897845","hamza@gmail.com");
    c1.afficher();
    c2.afficher();
    c3.afficher();
    return 0;
}
