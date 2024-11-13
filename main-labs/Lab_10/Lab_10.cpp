#include "interfata.hpp"
#include "patrat.hpp"
#include "dreptunghi.hpp"
#include "triunghi.hpp"
#include "triunghi_dreptunghic.hpp"
#include "cerc.hpp"

int main() {

	Interfata **v;
	Interfata *aux;

	v = new Interfata * [10];

	v[0] = new Patrat(4);
	v[1] = new Patrat(6);
	v[2] = new Dreptunghi(5, 3);
	v[3] = new Dreptunghi(7, 2);
	v[4] = new Triunghi(4, 8);
	v[5] = new Triunghi(3, 5);
	v[6] = new Triunghi_dreptunghic(4, 2 ,8);
	v[7] = new Triunghi_dreptunghic(3, 2, 6);
	v[8] = new Cerc(2);
	v[9] = new Cerc(4);

	cout << "Afisare vector de elemente: " << '\n' << '\n';
	for (int i = 0; i < 10; i++)
		v[i] -> afisare();

	for (int i = 0; i < 9; i++)
		for (int j = i + 1; j < 10; j++)
			if (v[i]->getArie() < v[j]->getArie()) {

				aux = v[i];
				v[i] = v[j];
				v[j] = aux;

			}

	cout << '\n' << '\n';

	cout << "Vector sortat in functie de arie: " << '\n' << '\n';

	for (int i = 0; i < 10; i++)
		v[i] -> afisare();

	cout << '\n' << '\n';

	cout << "Afisare doar obiecte de tip Cerc din vector: " << '\n' << '\n';

	for (int i = 0; i < 10; i++)
		if (v[i] -> isCerc())
			v[i] -> afisare();

	for (int i = 0; i < 10; i++)
		delete v[i];

	delete []v;

}

// Lab_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
