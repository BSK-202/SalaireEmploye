#pragma once
#include "Commercial.h"
#include "gestionnaire.h"
class ComercGest :public Commercial ,public gestionnaire
{
public:
	ComercGest(std::string nom, std::string prenom, int taux, int nb_heure, int nb_vente);
	void afficher() const;
	float CalculerSalaire();
};

