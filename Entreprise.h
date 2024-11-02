#pragma once
#include "Employe.h"
class Entreprise
{
private:
	Employe **emp;
	int nbEmp;
	int maxEmp;

public:
	Entreprise();
	void ajouterEmploye(std::string nom, std::string prenom ,int nbheur, float taux,int nbvente,int type);
	void resize();
	float calculerSalaireTotal();
	void afficher() const;
	~Entreprise();
};

