#ifndef FORD_H_INCLUDED
#define FORD_H_INCLUDED

#include "Car.h"

class Ford : public Car {
public:
	Ford();
	float GoCar(bool& b, int, int) override;
	char* getName() override;
};

#endif // !FORD_H_INCLUDED
