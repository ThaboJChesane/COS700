#include "Pizza.h"
#include <iostream>
using namespace std;


Pizza::Pizza() : basePrice(0), toppingCount(0) {}


void Pizza::addToppings(int count) {
    toppingCount = count;
}


void Pizza::setSize(string pizzaSize) {
    size = pizzaSize;
    if (size == "Small") {
        basePrice = 50;
    } else if (size == "Medium") {
        basePrice = 75;
    } else if (size == "Large") {
        basePrice = 100;
    } else {
        cout << "Invalid size selected!" << endl;
        basePrice = 0;
    }
}


int Pizza::calculatePrice() {
    return basePrice + (toppingCount * 15); 
}

void Pizza::showDetails() {
    cout << "Pizza Base: " << baseType << endl;
    cout << "Size: " << size << endl;
    cout << "Number of Toppings: " << toppingCount << endl;
    cout << "Total Price: R" << calculatePrice() << endl;
}