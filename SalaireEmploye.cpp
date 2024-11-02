// SalaireEmploye.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "ComercGest.h"
#include "Entreprise.h"
using namespace std;
int main()
{
	float salaire;
	Entreprise* ent;
	
	ent = new Entreprise();
	ent->ajouterEmploye("BASKANE", "Ikrame", 160, 20, 500, 1);
	ent->ajouterEmploye("Saad", "Berrada", 140, 10, 700, 0);
	ent->ajouterEmploye("Omar", "Kadiri", 120, 10, 700, 2);
	ent->ajouterEmploye("Hanane", "Nadira", 110, 9, 900, 3);


	ent->afficher();
	salaire = ent->calculerSalaireTotal();
	cout << "Totale de salaire: " << salaire << endl;
	delete ent;
}

