#pragma once
#include "Vehicule.h"
class Voiture :
	public Vehicule
{
public:
	Voiture();
	virtual void afficher() const;
	~Voiture();
protected:
	int m_portes;
};

