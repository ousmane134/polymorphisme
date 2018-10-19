#include "pch.h"
#include "Moto.h"
#include <iostream>


using namespace std;
Moto::Moto()
{
}
Moto::Moto(double init_vitesse) : m_vitesse(init_vitesse) {

}
void Moto::afficher() const
{
	cout << "Ceci est une moto." << endl;
}

double Moto::getVitesse() const
{
	return m_vitesse;
}

void Moto::setVitesse(double new_vitesse)
{
	m_vitesse = new_vitesse;
}


Moto::~Moto()
{
}
