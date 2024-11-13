#include "inginer.hpp"

Inginer::Inginer() : Angajat() {}

Inginer::Inginer(int s, int v, const char* n) : Angajat(s, v, n) {}

void Inginer::afisare() {

	cout << "//Inginer//\n";
	Angajat::afisare();

}