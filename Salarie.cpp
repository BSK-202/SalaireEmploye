#include "Salarie.h"
#include <iostream>
using namespace std;
int Salarie::m_cmpt = 0;
Salarie::Salarie():m_id(++m_cmpt){}

void Salarie::afficher() const
{
	cout << "id: " << m_id << endl;
}
