// Complexe.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "complexe.h"
using namespace std;
int main()
{
	complexe* C1 = new complexe(3, 5);
	complexe* C2 = new complexe(3, 5);

	cout << "complexe+complexe par operator+ :" << endl;

	complexe C3 = *C1 + *C2;//operator+
	C3.afficher();

	cout << "complexe+double par operator+ :" << endl;

	double a = 3;//operator+ c+a
	C3 = *C1 + a;
	C3.afficher();

	cout << "complexe-complexe par operator- :" << endl;

	complexe C4 = *C1 - *C2;
	C4.afficher();

	cout << "complexe-double par operator- :" << endl;

	C4 = *C1 - a;
	C4.afficher();

	cout << "complexe*complexe par operator* :" << endl;
	complexe C5 = *C1 * *C2;
	C5.afficher();

	cout << "complexe*double par operator* :" << endl;
	C5 = *C1 * a;
	C5.afficher();

	cout << "complexe/complexe par operator/ :" << endl;
	complexe C7 = *C1 / *C2;
	C7.afficher();

	cout << "complexe/double par operator/ :" << endl;
	C7 = *C1 / a;
	C7.afficher();

	cout << "complexe < complexe par operator< :" << endl;
	if (C1 < C2)
		cout << "c1 est inferieur a c2"<<endl;
	else
		cout << "c1 est superieur a c2"<<endl;


	cout << "complexe <= complexe par operator<= :" << endl;
	if (C3 <= C4)
		cout << "c1 est inferieur ou egal a c2"<<endl;
	else
		cout << "c1 est superieur a c2"<<endl;

	cout << "complexe > complexe par operator<= :" << endl;
	if (C3 > C4)
		cout << "c1 est superieur a c2" << endl;
	else
		cout << "c1 est inferieur a c2" << endl;


	cout << "complexe > complexe par operator<= :" << endl;
	if (C3 >= C4)
		cout << "c1 est superieur ou egal a c2" << endl;
	else
		cout << "c1 est inferieur a c2" << endl;

	cout << "complexe == complexe par operator<= :" << endl;
	if (C3 == C4)
		cout << "c1 est égale a c2" << endl;
	else
		cout << "c1 est different a c2" << endl;

	cout << "complexe != complexe par operator<= :" << endl;
	if (C3 != C4)
		cout << "c1 est different a c2" << endl;
	else
		cout << "c1 est égale a c2" << endl;






}
// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.


