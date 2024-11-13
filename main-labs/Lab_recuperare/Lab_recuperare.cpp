#include "profesor.hpp"
#include "inginer.hpp"
#include "muncitor.hpp"
#include "tehnician.hpp"

int main() {

	auto dimension(8);

	Angajat** v = new Angajat * [dimension];
	Angajat* aux;

	v[0] = new Profesor(2000, 35, "Gheorghe");
	v[1] = new Profesor(2500, 40, "Tudor");
	v[2] = new Inginer(8500, 25, "Andrei");
	v[3] = new Inginer(10000, 27, "Eduard");
	v[4] = new Muncitor(3000, 45, "Vasile");
	v[5] = new Muncitor(3500, 41, "Gheorghe");
	v[6] = new Tehnician(4500, 53, "Mihai");
	v[7] = new Tehnician(3500, 30, "Gheorghe");

	cout << "//Prima afisare\n\n";

	for (auto i = 0; i < dimension; i++)
		v[i]->afisare();

	// Sortare dupa salariu

	for (auto i = 0; i < dimension - 1; i++)
		for (auto j = i + 1; j < dimension; j++) {

			if (v[i]->getSalariu() < v[j]->getSalariu()) {

				aux = v[i];
				v[i] = v[j];
				v[j] = aux;

			}

		}

	cout << "\n\n//Afisare dupa sortare in ordine descrescatoare\n\n";

	for (auto i = 0; i < dimension; i++)
		v[i]->afisare();

	// Afisare angajati cu numele "Gheorghe"

	cout << "\n\n//Afisare doar angajatii cu numele \"Gheorghe\"\n\n";

	for (auto i = 0; i < dimension; i++)
		if (!strcmp(v[i]->getNume(), "Gheorghe"))
			v[i]->afisare();

	for (auto i = 0; i< dimension; i++)
		delete v[i];

	delete []v;

	return 0;

}