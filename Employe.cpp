#include "Employe.h"
#include <iostream>
using namespace std;
Employe::Employe(std::string nom, std::string prenom, int nbheur, float taux)
	:m_nom(nom),m_prenom(prenom),m_nbheur(nbheur),m_taux(taux)
{
}
void Employe::afficher() const
{
	Salarie::afficher();
	cout << "Nom: " << m_nom << endl;
	cout << "Nom: " << m_prenom << endl;
	cout << "NbreHeure: " << m_nbheur << endl;
	cout << "Taux: " << m_taux << endl;
}
float Employe::calculerSalaire()
{
	return m_taux * m_nbheur;
}

Employe::~Employe(){}
