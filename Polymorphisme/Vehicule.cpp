#include "pch.h"
#include "Vehicule.h"
#include <iostream>

using namespace std;
Vehicule::Vehicule()
{
}

 void Vehicule::afficher() const
{
	cout << "Ceci est un vehicule" << endl;
}

 void Vehicule::presenter(Vehicule const& v) const
{
	v.afficher();
}


Vehicule::~Vehicule()
{
}
