#include "ComercGest.h"
#include <iostream>
using namespace std;
ComercGest::ComercGest(std::string nom, std::string prenom, int taux, int nb_heure, int nb_vente)
	:Commercial(nom,prenom,taux,nb_heure,nb_vente),gestionnaire(nom, prenom, nb_heure, nb_vente),
	Employe(nom, prenom, nb_heure, nb_vente)
{
}

void ComercGest::afficher() const
{
	cout << "Gestionnaire/Commerciale: " << endl;
	Commercial::afficher();
}

float ComercGest::CalculerSalaire()
{
	return Commercial::calculerSalaire()+gestionnaire::calculerSalaire();
}
