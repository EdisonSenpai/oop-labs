#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include <iostream>
#include "Electronics.hpp"
#include "Appliances.hpp"
#include "Fashion.hpp"
#include "HomeAndGarden.hpp"

template <typename T>
class Inventory {
private:
    T** items;
    int capacity;
    int count;

    void resize();

public:
    Inventory(int initialCapacity = 10, int initialCount = 0);
    ~Inventory();

    void addItem(T* item);
    void displayItems() const;

    T* getMaxPriceItem() const;

    void sortItemsByPriceAscending();
    void sortItemsByPriceDescending();

};

#endif // INVENTORY_HPP
