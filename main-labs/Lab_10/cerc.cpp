#include "cerc.hpp"

Cerc :: Cerc() : raza(0) {}

Cerc :: Cerc(int r) : raza(r) {}

int Cerc :: getArie() {

	return 2 * PI * raza * raza;

}

bool Cerc :: isCerc() {

	return true;

}

void Cerc :: afisare() {

	cout << "===Cerc===" << '\n';
	cout << "Raza: " << raza << '\n';
	cout << "Arie: " << Cerc::getArie() << '\n';

	cout << '\n';

}