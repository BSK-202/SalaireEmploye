#pragma once
#include <string>
#include<iostream>
#include "Salarie.h"
class Employe :public Salarie
{
protected:
	std::string m_nom;
	std::string m_prenom;
	float m_taux;
	int m_nbheur;
public:
	Employe(std::string nom, std::string prenom, int nbheur, float taux);
	virtual void afficher() const;
	float calculerSalaire();
	virtual ~Employe();
};

