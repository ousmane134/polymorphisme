#pragma once
#include "Vehicule.h"
class Moto :
	public Vehicule
{
public:
	Moto();
	virtual void afficher() const;
	~Moto();
private:
	double m_vitesse; 
};

