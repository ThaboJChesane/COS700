#include "SUV.h"
#include <iostream>
using namespace std;


SUV::SUV() : BMWCar("BMW SUV", 750000), hasAllWheelDrive(false) {}


void SUV::addAllWheelDrive() {
    hasAllWheelDrive = true;
}


int SUV::getPrice() {
    return hasAllWheelDrive ? basePrice + 20000 : basePrice;
}


void SUV::showDetails() {
    BMWCar::showDetails();
    if (hasAllWheelDrive) {
        cout << "Features: All-Wheel Drive (R20,000 extra)" << endl;
    }
}