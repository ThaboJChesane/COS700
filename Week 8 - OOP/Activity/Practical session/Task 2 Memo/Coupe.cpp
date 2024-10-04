#include "Coupe.h"
#include <iostream>
using namespace std;

Coupe::Coupe() : BMWCar("BMW Coupe", 550000), hasLeatherSeats(false) {}

void Coupe::addLeatherSeats() {
    hasLeatherSeats = true;
}

int Coupe::getPrice() {
    return hasLeatherSeats ? basePrice + 12000 : basePrice;
}

void Coupe::showDetails() {
    BMWCar::showDetails();
    if (hasLeatherSeats) {
        cout << "Features: Leather Seats (R12,000 extra)" << endl;
    }
}