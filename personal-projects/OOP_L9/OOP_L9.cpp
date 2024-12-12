#include "Circuit.h"
#include "Car.h"

int main() {

    Circuit c;

    c.SetLength(500);
    c.SetWeather(Weather::Sunny);

    c.AddCar(new Dacia());
    c.AddCar(new Toyota());
    c.AddCar(new Mercedes());
    c.AddCar(new Ford());
    c.AddCar(new Mazda());

    c.Race();
    c.ShowFinalRanks();
    c.ShowWhoDidNotFinish();

    return 0;

}