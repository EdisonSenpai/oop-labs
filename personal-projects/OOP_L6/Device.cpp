#include "Device.h"
#include <cstring>

Device::Device(const char* name) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

Device::Device(const Device& other) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
}

Device& Device::operator=(const Device& other) {
    if (this != &other) {
        delete[] name;
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    }
    return *this;
}

Device::~Device() {
    delete[] name;
}

void Device::displayInfo() const {
    std::cout << "Device: " << name << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Device& device) {
    out << "Device: " << device.name;
    return out;
}

std::istream& operator>>(std::istream& in, Device& device) {
    char temp[100];
    std::cout << "Enter device name: ";
    in >> temp;
    delete[] device.name;
    device.name = new char[strlen(temp) + 1];
    strcpy(device.name, temp);
    return in;
}
