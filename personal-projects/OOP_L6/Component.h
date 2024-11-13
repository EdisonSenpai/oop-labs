#ifndef COMPONENT_H
#define COMPONENT_H

#pragma warning (disable : 4996) // strict pentru VS pentru a da disable la warning-urile generate de 'strcpy'

#include <iostream>
#include <cstring>

class Component {
protected:
    char* name;
    char* manufacturer;

public:
    Component(const char* name, const char* manufacturer);
    Component(const Component& other);
    Component& operator=(const Component& other);
    ~Component();

    void displayInfo() const;

    friend std::ostream& operator<<(std::ostream& out, const Component& comp);
    friend std::istream& operator>>(std::istream& in, Component& comp);
};

#endif // COMPONENT_H
