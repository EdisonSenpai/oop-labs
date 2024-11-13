#include "muncitor.hpp"

Muncitor::Muncitor() : Angajat() {}

Muncitor::Muncitor(int s, int v, const char* n) : Angajat(s, v, n) {}

void Muncitor::afisare() {

	cout << "//Muncitor//\n";
	Angajat::afisare();

}