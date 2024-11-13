#include "triunghi.hpp"

Triunghi :: Triunghi() : baza(0), inaltime(0) {}

Triunghi :: Triunghi(int b, int i) : baza(b), inaltime(i) {}

int Triunghi :: getArie() {

	return baza * inaltime;

}

bool Triunghi :: isCerc() {

	return false;

}

void Triunghi :: afisare() {

	cout << "===Triunghi===" << '\n';
	cout << "Baza: " << baza << '\n';
	cout << "Inaltimea: " << inaltime << '\n';
	//cout << "Arie: " << Triunghi :: getArie() << '\n';

	cout << '\n';

}
