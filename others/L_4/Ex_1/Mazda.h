#ifndef MAZDA_H_INCLUDED
#define MAZDA_H_INCLUDED

#include "Car.h"

class Mazda : public Car {
public:
	Mazda();
	float GoCar(bool& b, int, int) override;
	char* getName() override;
};

#endif // !MAZDA_H_INCLUDED
