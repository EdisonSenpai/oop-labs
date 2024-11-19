#include "Inventory.hpp"

int main() {

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

    std::cout << "_______________________\n";
    std::cout << "|Welcome to mini-eMag!|\n";
    std::cout << "|_____________________|\n";

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

    return 0;
}
