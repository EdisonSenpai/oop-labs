#ifndef DEVICE_H
#define DEVICE_H

#pragma warning (disable : 4996)

#include <iostream>

class Device {

protected:
    char* name;

public:
    Device(const char* name);
    Device(const Device& other); // Constructor de copiere
    Device& operator=(const Device& other); // Operator de atribuire
    ~Device();

    void displayInfo() const;

    friend std::ostream& operator<<(std::ostream& out, const Device& device);
    friend std::istream& operator>>(std::istream& in, Device& device);

};

#endif // DEVICE_H
