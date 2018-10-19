#pragma once
 class CalculBasic
{
public:
	CalculBasic() = default;
	CalculBasic(int a, int b);
	int somme(int a, int b);
	int difference(int a, int b);
	int valeur_aboslue(int a);
	int multiplication(int a, int b);
	int division(int a, int b);
	int modulo(int a, int b);
	~CalculBasic();
private:
	int a;
	int b;

};

