#pragma once
#include "Employe.h"
class gestionnaire :virtual public Employe
{
private:
	static float salaireH;
public:
	gestionnaire(std::string nom, std::string prenom, int nbheur, float taux);
	void afficher() const;
	float calculerSalaire() ;
	virtual ~gestionnaire();
};

