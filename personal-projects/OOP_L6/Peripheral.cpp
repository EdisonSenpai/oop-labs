#include "Peripheral.h"

Peripheral::Peripheral(const char* name, const char* manufacturer) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->manufacturer = new char[strlen(manufacturer) + 1];
    strcpy(this->manufacturer, manufacturer);
}

Peripheral::Peripheral(const Peripheral& other) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    manufacturer = new char[strlen(other.manufacturer) + 1];
    strcpy(manufacturer, other.manufacturer);
}

Peripheral& Peripheral::operator=(const Peripheral& other) {
    if (this != &other) {
        delete[] name;
        delete[] manufacturer;
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        manufacturer = new char[strlen(other.manufacturer) + 1];
        strcpy(manufacturer, other.manufacturer);
    }
    return *this;
}

Peripheral::~Peripheral() {
    delete[] name;
    delete[] manufacturer;
}

void Peripheral::displayInfo() const {
    std::cout << "Peripheral: " << name << ", Manufacturer: " << manufacturer << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Peripheral& peripheral) {
    out << "Peripheral: " << peripheral.name << " by " << peripheral.manufacturer;
    return out;
}

std::istream& operator>>(std::istream& in, Peripheral& peripheral) {
    char temp[100];
    std::cout << "Enter peripheral name: ";
    in >> temp;
    delete[] peripheral.name;
    peripheral.name = new char[strlen(temp) + 1];
    strcpy(peripheral.name, temp);

    std::cout << "Enter manufacturer: ";
    in >> temp;
    delete[] peripheral.manufacturer;
    peripheral.manufacturer = new char[strlen(temp) + 1];
    strcpy(peripheral.manufacturer, temp);

    return in;
}
