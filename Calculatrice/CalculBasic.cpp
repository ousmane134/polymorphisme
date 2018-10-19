#include "pch.h"
#include "CalculBasic.h"




CalculBasic::CalculBasic(int a, int b): a(a), b(b)
{
}

int CalculBasic::somme(int a, int b)
{
	return (a + b);
}

int CalculBasic::difference(int a, int b)
{
	return (a - b);
}

int CalculBasic::valeur_aboslue(int a)
{
	if (a < 0) a = -a;
	return a;
}

int CalculBasic::multiplication(int a, int b)
{
	return a * b;
}

int CalculBasic::division(int a, int b)
{
	return  a / b;
}

int CalculBasic::modulo(int a, int b)
{
	return a % b;
}


CalculBasic::~CalculBasic()
{
}
