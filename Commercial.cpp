#include "Commercial.h"
#include <iostream>
using namespace std;
int Commercial::commession = 2;
Commercial::Commercial(std::string nom, std::string prenom, int taux, int nb_heure, int nb_vente)
	:Employe(nom,prenom, nb_heure, taux), nb_vente(nb_vente){}

void Commercial::afficher() const
{
	cout << "Commerciale: " << endl;
	Employe::afficher();
	cout << "Commession: " << commession << endl;
}

float Commercial::calculerSalaire()
{
	return indemnite() + Employe::calculerSalaire();
}

float Commercial::indemnite() const
{
	return nb_vente*commession;
}

Commercial::~Commercial()
{
}


