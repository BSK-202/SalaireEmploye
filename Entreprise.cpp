#include "Entreprise.h"
#include "Commercial.h"
#include "gestionnaire.h"
#include "ComercGest.h"
#include <iostream>
using namespace std;
Entreprise::Entreprise():nbEmp(0),maxEmp(2)
{
	emp = new Employe * [maxEmp];
	for (int i = 0; i < maxEmp; i++)
		emp[i] = nullptr;
}

void Entreprise::ajouterEmploye(std::string nom, std::string prenom, int nbheur, float taux,int nbvente,int type)
	
{
	Employe* empp;
	switch (type)
	{
		case 0: empp = new Employe(nom, prenom, nbheur, taux); break;
		case 1: empp = new Commercial(nom, prenom, taux, nbheur, nbvente); break;
		case 2: empp = new gestionnaire(nom, prenom, nbheur, taux); break;
		case 3: empp = new ComercGest(nom, prenom, taux, nbheur, nbvente); break;
		default:cout << "donner le type d employe entre 1 et 3"; return;
	}
	if (nbEmp == maxEmp)
		resize();
	emp[nbEmp++] = empp;
}


void Entreprise::resize()
{
	maxEmp *= 2;
	Employe **New= new Employe * [maxEmp];
	for (int i = 0; i < nbEmp; i++)
		New[i] = emp[i];
	for (int i = nbEmp; i < maxEmp; i++)
		New[i] = nullptr;
	delete[] emp;
	emp = New;
}

float Entreprise::calculerSalaireTotal()
{
	float toto=0;
	for (int i = 0; i < nbEmp; i++)
		toto+= emp[i]->calculerSalaire();
	return toto;
}

void Entreprise::afficher() const
{
	cout << "Liste des employe:" << endl;
	for (int i=0; i < nbEmp; i++)
	{
		emp[i]->afficher();
		cout << endl;
	}
}

Entreprise::~Entreprise()
{
	for (int i = 0; i < nbEmp; i++)
		delete emp[i];
	delete[] emp;
}


