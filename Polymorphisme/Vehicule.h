#pragma once
class Vehicule
{
public:
	Vehicule();
	virtual void afficher() const;
	void presenter(Vehicule const& v) const;
	~Vehicule();
private:
	int m_prix;
};

