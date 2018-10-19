#pragma once
#include "Vehicule.h"
class Moto :
	public Vehicule
{
public:
	Moto();
	Moto(double init_vitesse);
	virtual void afficher() const;
	double getVitesse() const;
	void setVitesse(double new_vitesse);
	~Moto();
private:
	double m_vitesse; 
};

