// Polymorphisme.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include "Vehicule.h"
#include "Moto.h"
#include "Voiture.h"
#include <iomanip>

using namespace std;

//void echanger(int *pa, int *pb) {
//	int tempo;
//	tempo = *pa;
//	*pa = *pb;
//	*pb = tempo;
//}
//
//void fact(int& n) {
//
//	int somme = 1;
//	for (int i = 1; i <= n; i++) {
//		somme *= i;
//
//	}
//	n = somme;
//
//	//return n;
//}
//
//int fact2(int const & n) {
//	int somme = n;
//	if (n == 1) return 1;
//	
//	return n* fact2(n-1);
//		
//}
int main() {

	int untab[]{ 5,19,14,8,-10,99 };
	int *unptr1 = untab;
	int *unptr2 = &untab[0];
	

	if (unptr1 == unptr1) cout << "YES, you did it !" << endl;
	else cout << "Your shit sucks AF !" << endl;





}

//
//{
//
//	int a(98);
//	int b(70);
//
//	
//
//	int n(10);
//	int somme(0);
//
//	cout << "Avant l'appel de la fonction echanger:" << endl;
//	cout << "La valeur de a vaut: " << a << endl;
//	cout << "La vaeur de b vaut: " << b << endl;
//
//
//	echanger(&a, &b);
//	cout << "Apres l'appel de la fonction echanger:" << endl;
//
//	cout << "La valeur de a vaut: " << a << endl;
//	cout << "La vaeur de b vaut: " << b << endl;
//
//	cout << "----------------------------" << endl;
//	cout << "La valeur de n avant l'appel de la fonction factorielle: " << n << endl;
//	fact(n);
//	cout << "----------------------------" << endl;
//	cout << "La valeur de n avant l'appel de la fonction factorielle: " << n << endl;
//
//
//}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
