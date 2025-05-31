#include <iostream>
#include <string>
#include <conio.h> // Для _getch() — тільки на Windows
#include "Shop.h"

int main() {
    Shop myShop;

    // Додавання 20 товарів
    myShop.addProduct("Bread", 20.5);
    myShop.addProduct("Milk", 30.0);
    myShop.addProduct("Cheese", 100.0);
    myShop.addProduct("Coffee", 150.0);
    myShop.addProduct("Tea", 50.0);
    myShop.addProduct("Sugar", 25.0);
    myShop.addProduct("Butter", 60.0);
    myShop.addProduct("Eggs", 35.0);
    myShop.addProduct("Apples", 40.0);
    myShop.addProduct("Bananas", 45.0);
    myShop.addProduct("Oranges", 42.0);
    myShop.addProduct("Tomatoes", 28.0);
    myShop.addProduct("Cucumbers", 30.0);
    myShop.addProduct("Potatoes", 18.0);
    myShop.addProduct("Onions", 15.0);
    myShop.addProduct("Carrots", 17.0);
    myShop.addProduct("Chicken", 120.0);
    myShop.addProduct("Beef", 200.0);
    myShop.addProduct("Rice", 33.0);
    myShop.addProduct("Pasta", 27.0);

    std::cout << "All products in the shop:\n";
    for (const auto& product : myShop.getProducts()) {
        std::cout << "- " << product.name << ": " << product.price << " UAH\n";
    }

    std::cout << "\nYou can search for any product. Press ESC to exit.\n";

    std::string name;
    while (true) {
        std::cout << "\nEnter product name: ";
        std::getline(std::cin, name);

        auto price = myShop.searchProduct(name);
        if (price.has_value()) {
            std::cout << "Price of \"" << name << "\": " << price.value() << " UAH\n";
        }
        else {
            std::cout << "Product \"" << name << "\" not found.\n";
        }

        std::cout << "Press ESC to exit or any key to continue search...\n";
        int key = _getch(); // Очікує натиск клавіші
        if (key == 27) { // Код ESC = 27
            std::cout << "Exiting...\n";
            break;
        }
    }

    return 0;
}
