#include "Sedan.h"
#include <iostream>
using namespace std;

Sedan::Sedan() : BMWCar("BMW Sedan", 500000), hasSunroof(false) {}


void Sedan::addSunroof() {
    hasSunroof = true;
}


int Sedan::getPrice() {
    return hasSunroof ? basePrice + 15000 : basePrice;
}

void Sedan::showDetails() {
    BMWCar::showDetails();
    if (hasSunroof) {
        cout << "Features: Sunroof (R15,000 extra)" << endl;
    }
}