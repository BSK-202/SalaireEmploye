#include "gestionnaire.h"
#include <iostream>
using namespace std;
float gestionnaire::salaireH = 3000;

gestionnaire::gestionnaire(std::string nom, std::string prenom, int nbheur, float taux)
    :Employe(nom, prenom, nbheur, taux)
{
}

void gestionnaire::afficher() const
{
    cout << "Gestionnaire: " << endl;
    Employe::afficher();
}

float gestionnaire::calculerSalaire()
{
    return Employe::calculerSalaire()+salaireH*4;
}

gestionnaire::~gestionnaire(){}
