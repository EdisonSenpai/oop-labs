#ifndef ITEM_HPP
#define ITEM_HPP

#pragma warning (disable : 4996)

#include <iostream>
#include <cstring>

class Item {
protected:
    char* name;
    double price;

public:
    Item(const char* name, double price);
    Item(const Item& other);
    Item& operator=(const Item& other);
    ~Item();

    double getPrice() const;
    void display() const;

};

#endif // ITEM_HPP
