#include "BMWCar.h"
#include <iostream>
using namespace std;


BMWCar::BMWCar(string m, int price) : model(m), basePrice(price) {}


void BMWCar::showDetails() {
    cout << "Model: " << model << endl;
    cout << "Base Price: R" << basePrice << endl;
}


int BMWCar::getPrice() {
    return basePrice;
}