#include "Inventory.hpp"

template <typename T>
Inventory<T>::Inventory(int initialCapacity, int initialCount)
    : capacity(initialCapacity), count(initialCount) {

    items = new T * [capacity];

}

template <typename T>
Inventory<T>::~Inventory() {

    for (int i = 0; i < count; ++i) {

        delete items[i];

    }

    delete[] items;

}

template <typename T>
void Inventory<T>::addItem(T* item) {

    if (count >= capacity) {

        resize();

    }

    items[count++] = item;

}

template <typename T>
void Inventory<T>::displayItems() const {

    for (int i = 0; i < count; i++) {

        items[i]->display();

    }

}

template <typename T>
T* Inventory<T>::getMaxPriceItem() const {

    if (count == 0) return nullptr;

    T* maxItem = items[0];

    for (int i = 1; i < count; i++) {

        if (items[i]->getPrice() > maxItem->getPrice()) {

            maxItem = items[i];

        }

    }

    return maxItem;

}

template <typename T>
void Inventory<T>::sortItemsByPriceAscending() {

    for (int i = 0; i < count - 1; i++) {

        for (int j = i + 1; j < count; j++) {

            if (items[i]->getPrice() > items[j]->getPrice()) {

                T* temp = items[i];
                items[i] = items[j];
                items[j] = temp;

            }

        }

    }

}

template <typename T>
void Inventory<T>::sortItemsByPriceDescending() {

    for (int i = 0; i < count - 1; i++) {

        for (int j = i + 1; j < count; j++) {

            if (items[i]->getPrice() < items[j]->getPrice()) {

                T* temp = items[i];
                items[i] = items[j];
                items[j] = temp;

            }

        }

    }

}

template <typename T>
void Inventory<T>::resize() {

    capacity *= 2;

    T** newItems = new T * [capacity];

    for (int i = 0; i < count; i++) {

        newItems[i] = items[i];

    }

    delete[] items;
    items = newItems;

}

void test() {

    // Cream inventare pentru fiecare categorie
    Inventory<Electronics> electronicsInventory;
    Inventory<Appliances> appliancesInventory;
    Inventory<Fashion> fashionInventory;
    Inventory<HomeAndGarden> homeInventory;

    // Adaugam produse in inventar
    electronicsInventory.addItem(new Electronics("Laptop", 3500.99, "Dell", 2));
    electronicsInventory.addItem(new Electronics("Smartphone", 2500.50, "Samsung", 1));
    electronicsInventory.addItem(new Electronics("TV", 4000.00, "LG", 3));

    appliancesInventory.addItem(new Appliances("Washing Machine", 1800.00, 500));
    appliancesInventory.addItem(new Appliances("Fridge", 3000.00, 150));
    appliancesInventory.addItem(new Appliances("Microwave", 499.99, 800));

    fashionInventory.addItem(new Fashion("Jacket", 299.99, "M", "Leather"));
    fashionInventory.addItem(new Fashion("T-shirt", 99.99, "L", "Cotton"));

    homeInventory.addItem(new HomeAndGarden("Garden Table", 450.00, "150x90x75 cm", "Wood"));
    homeInventory.addItem(new HomeAndGarden("Chair", 150.00, "45x45x90 cm", "Plastic"));

    // Comparare: Cel mai scump produs din Electronice
    Electronics* mostExpensiveElectronic = electronicsInventory.getMaxPriceItem();
    std::cout << "\nMost expensive electronic:\n";
    if (mostExpensiveElectronic) {
        mostExpensiveElectronic->display();
    }

    // Sortare: Electrocasnice dupa pret descrescator
    appliancesInventory.sortItemsByPriceDescending();
    std::cout << "\nAppliances sorted by price descending:\n";
    appliancesInventory.displayItems();

    // Sortare: Produse pentru casa si gradina crescator
    homeInventory.sortItemsByPriceAscending();
    std::cout << "\nHome and Garden sorted by price ascending:\n";
    homeInventory.displayItems();

    // Afisare produse Fashion
    std::cout << "\nFashion items:\n";
    fashionInventory.displayItems();

}