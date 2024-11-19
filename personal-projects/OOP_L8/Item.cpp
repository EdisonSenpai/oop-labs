#include "Item.hpp"

Item::Item(const char* name, double price) : name(nullptr), price(price) {

    if (name) {

        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);

    }

}

Item::Item(const Item& other) : name(nullptr), price(other.price) {

    if (other.name) {

        this->name = new char[strlen(other.name) + 1];
        strcpy(this->name, other.name);

    }

}

Item& Item::operator=(const Item& other) {

    if (this != &other) {

        delete[] name;
        name = nullptr;
        price = other.price;

        if (other.name) {

            name = new char[strlen(other.name) + 1];
            strcpy(this->name, other.name);

        }

    }

    return *this;

}

Item::~Item() {

    delete[] name;

}

double Item::getPrice() const {

    return price;

}

void Item::display() const {

    std::cout << "Name: " << name << ", Price: " << price << " Lei";

}
