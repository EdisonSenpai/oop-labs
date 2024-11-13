#include "interfata.h"
#include "patrat.hpp"
#include "dreptunghi.hpp"
#include "triunghi.hpp"
#include "triunghi_dreptunghic.hpp"
#include "cerc.hpp"

int main() {

	Interfata **v;
	Interfata *aux;

	int n = 6;

	v = new Interfata * [n];

	v[0] = new Patrat(4);
	v[1] = new Patrat(6);
	v[2] = new Dreptunghi(5, 3);
	v[3] = new Dreptunghi(7, 2);
	//v[4] = new Triunghi(4, 8);
	//v[5] = new Triunghi(3, 5);
	//v[6] = new Triunghi_dreptunghic(4, 2 ,8);
	//v[7] = new Triunghi_dreptunghic(3, 2, 6);
	v[4] = new Cerc(2);
	v[5] = new Cerc(4);

	cout << "Afisare vector de elemente: \n\n";
	for (int i = 0; i < n; i++)
		v[i] -> afisare();

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (v[i]->getArie() < v[j]->getArie()) {

				aux = v[i];
				v[i] = v[j];
				v[j] = aux;

				//delete []aux;

			}

	cout << "\n\n";

	cout << "Vector sortat in functie de arie: \n\n";

	for (int i = 0; i < n; i++)
		v[i] -> afisare();

	cout << "\n\n";

	cout << "Afisare doar obiecte de tip Cerc din vector: \n\n";

	for (int i = 0; i < n; i++)
		if (v[i] -> isCerc())
			v[i] -> afisare();

	for (int i = 0; i < n; i++)
		delete v[i];

	delete []v;

    return 0;

}
