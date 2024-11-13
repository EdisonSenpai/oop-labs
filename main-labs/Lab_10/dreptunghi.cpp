#include "dreptunghi.hpp"

Dreptunghi :: Dreptunghi() : lungime(0), latime(0) {}

Dreptunghi :: Dreptunghi(int lun, int lat) : lungime(lun), latime(lat) {}

int Dreptunghi :: getArie() {

	return lungime * latime;

}

bool Dreptunghi :: isCerc() {

	return false;

}

void Dreptunghi :: afisare() {

	cout << "===Dreptunghi===" << '\n';
	cout << "Lungime: " << lungime << '\n';
	cout << "Latime: " << latime << '\n';
	cout << "Arie: " << Dreptunghi :: getArie() << '\n';

	cout << '\n';

}
