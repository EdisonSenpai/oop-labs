#include "tehnician.hpp"

Tehnician::Tehnician() : Angajat() {}

Tehnician::Tehnician(int s, int v, const char* n) : Angajat(s, v, n) {}

void Tehnician::afisare() {

	cout << "//Tehnician//\n";
	Angajat::afisare();

}