#include "Electronics.hpp"

Electronics::Electronics(const char* name, double price, const char* brand, int warranty)
    : Item(name, price), brand(nullptr), warranty(warranty) {

    if (brand) {

        this->brand = new char[strlen(brand) + 1];
        strcpy(this->brand, brand);

    }

}

Electronics::Electronics(const Electronics& other)
    : Item(other), brand(nullptr), warranty(other.warranty) {

    if (other.brand) {

        this->brand = new char[strlen(other.brand) + 1];
        strcpy(this->brand, other.brand);

    }

}

Electronics& Electronics::operator=(const Electronics& other) {

    if (this != &other) {

        Item::operator=(other);

        delete[] brand;
        brand = nullptr;
        warranty = other.warranty;

        if (other.brand) {

            brand = new char[strlen(other.brand) + 1];
            strcpy(this->brand, other.brand);

        }

    }

    return *this;

}

Electronics::~Electronics() {

    delete[] brand;

}

void Electronics::display() const {

    Item::display();
    std::cout << ", Brand: " << brand << ", Warranty: " << warranty << " years" << std::endl;

}
