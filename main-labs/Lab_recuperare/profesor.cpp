#include "profesor.hpp"

Profesor::Profesor() : Angajat() {}

Profesor::Profesor(int s, int v, const char* n) : Angajat(s, v, n) {}

void Profesor::afisare() {

	cout << "//Profesor//\n";
	Angajat::afisare();

}