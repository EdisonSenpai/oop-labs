#include "persoana.hpp"

Persoana::Persoana() : varsta(0), esteStudent(false), nume(nullptr) {}

Persoana::Persoana(int v, bool eS, const char* n) : varsta(v), esteStudent(eS) {

	this->nume = new char[strlen(n) + 1];
	strcpy(this->nume, n);

}

Persoana::Persoana(const Persoana& obj) {

	this->nume = nullptr;
	*this = obj;

}

Persoana::~Persoana() {

	delete []this->nume;

}

bool Persoana::isStudent() {

	return esteStudent;

}

Persoana& Persoana::operator =(const Persoana& obj) {

	this->varsta = obj.varsta;
	this->esteStudent = obj.esteStudent;

	if (this->nume)
		delete []this->nume;

	this->nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume, obj.nume);

	return *this;

}

bool Persoana::operator <(Persoana obj) {

	return this->varsta < obj.varsta;

}

void Persoana::afisare() {

	char answ[3];

	if (esteStudent)
		strcpy(answ, "Da");
	else
		strcpy(answ, "Nu");

	cout << "-------------------------" << '\n';
	cout << "|Nume persoana: " << nume << "\t|" << '\n';
	cout << "|Varsta: " << varsta << "\t\t|" << '\n';
	cout << "|Este student?: " << answ << "\t|" << '\n';
	cout << "-------------------------\n";

}