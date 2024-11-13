#ifndef PERIPHERAL_H
#define PERIPHERAL_H

#pragma warning (disable : 4996)

#include <iostream>
#include <cstring>

class Peripheral {
protected:
    char* name;
    char* manufacturer;

public:
    Peripheral(const char* name, const char* manufacturer);
    Peripheral(const Peripheral& other);
    Peripheral& operator=(const Peripheral& other);
    ~Peripheral();

    void displayInfo() const;

    friend std::ostream& operator<<(std::ostream& out, const Peripheral& peripheral);
    friend std::istream& operator>>(std::istream& in, Peripheral& peripheral);
};

#endif // PERIPHERAL_H
