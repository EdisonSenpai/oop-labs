#include "patrat.hpp"

Patrat :: Patrat() : latura(0) {}

Patrat :: Patrat(int l) : latura(l) {}

int Patrat :: getArie() {

	return latura * latura;

}

bool Patrat :: isCerc() {

	return false;

}

void Patrat :: afisare() {

	cout << "===Patrat===" << '\n';
	cout << "Latura: " << latura << '\n';
	cout << "Arie: " << Patrat :: getArie() << '\n';

	cout << '\n';

}