#pragma once
#include "Employe.h"
#include <string>
#include <iostream>
 class Commercial:virtual public Employe
{
private:
	int nb_vente;
	static int commession;
public:
	Commercial(std::string nom, std::string prenom,int taux,int nb_heure,int nb_vente);
	void afficher() const;
	float calculerSalaire() ;
	float indemnite() const;
	virtual ~Commercial();
};

