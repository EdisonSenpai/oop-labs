#include "angajat.hpp"

Angajat::Angajat() : salariu(0), varsta(0), nume(nullptr) {}

Angajat::Angajat(int s, int v, const char* n) : salariu(s), varsta(v) {

	this->nume = new char[strlen(n) + 1];
	strcpy(this->nume, n);

}

Angajat::~Angajat() {

	delete []this->nume;

}

int Angajat::getSalariu()const {

	return salariu;

}

int Angajat::getVarsta()const {

	return varsta;

}

char* Angajat::getNume()const {

	return nume;

}

void Angajat::afisare() {

	cout << "-----------------\n";
	cout << "Salariu: " << Angajat::getSalariu() << '\n';
	cout << "Varsta: " << Angajat::getVarsta() << '\n';
	cout << "Nume: " << Angajat::getNume() << '\n';
	cout << "-----------------\n\n";

}