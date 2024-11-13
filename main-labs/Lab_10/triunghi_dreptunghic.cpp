#include "triunghi_dreptunghic.hpp"

Triunghi_dreptunghic :: Triunghi_dreptunghic() : Triunghi(), cateta(0) {}

Triunghi_dreptunghic :: Triunghi_dreptunghic(int b, int i, int c) : Triunghi(b, i), cateta(c) {}
 
int Triunghi_dreptunghic :: getArie() {

	return baza * cateta;

}

bool Triunghi_dreptunghic :: isCerc() {

	return false;

}

void Triunghi_dreptunghic :: afisare() {

	cout << "===Triunghi_dreptunghic===" << '\n';
	cout << "Cateta: " << cateta << '\n';
	cout << "Arie: " << Triunghi_dreptunghic :: getArie() << '\n';

	cout << '\n';

}
