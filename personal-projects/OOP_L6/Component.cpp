#include "Component.h"

Component::Component(const char* name, const char* manufacturer) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->manufacturer = new char[strlen(manufacturer) + 1];
    strcpy(this->manufacturer, manufacturer);
}

Component::Component(const Component& other) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    manufacturer = new char[strlen(other.manufacturer) + 1];
    strcpy(manufacturer, other.manufacturer);
}

Component& Component::operator=(const Component& other) {
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

Component::~Component() {
    delete[] name;
    delete[] manufacturer;
}

void Component::displayInfo() const {
    std::cout << "Component: " << name << ", Manufacturer: " << manufacturer << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Component& comp) {
    out << "Component: " << comp.name << " by " << comp.manufacturer;
    return out;
}

std::istream& operator>>(std::istream& in, Component& comp) {
    char temp[100];
    std::cout << "Enter component name: ";
    in >> temp;
    delete[] comp.name;
    comp.name = new char[strlen(temp) + 1];
    strcpy(comp.name, temp);

    std::cout << "Enter manufacturer: ";
    in >> temp;
    delete[] comp.manufacturer;
    comp.manufacturer = new char[strlen(temp) + 1];
    strcpy(comp.manufacturer, temp);

    return in;
}
