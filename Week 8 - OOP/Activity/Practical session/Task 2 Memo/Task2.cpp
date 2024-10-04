#include "Sedan.h"
#include "SUV.h"
#include "Hatchback.h"
#include "Coupe.h"
#include <iostream>
using namespace std;

int main() {
    int carChoice, featureChoice;

    
    cout << "Select a car model: \n1. BMW Sedan\n2. BMW SUV\n3. BMW Hatchback\n4. BMW Coupe\nChoice: ";
    cin >> carChoice;

    if (carChoice == 1) {
        
        Sedan sedan;
        cout << "Would you like to add a sunroof for R15,000? (1. Yes / 2. No): ";
        cin >> featureChoice;

        if (featureChoice == 1) {
            sedan.addSunroof();
        }

        sedan.showDetails();
        cout << "Total Price: R" << sedan.getPrice() << endl;

    } else if (carChoice == 2) {
       
        SUV suv;
        cout << "Would you like to add all-wheel drive for R20,000? (1. Yes / 2. No): ";
        cin >> featureChoice;

        if (featureChoice == 1) {
            suv.addAllWheelDrive();
        }

        suv.showDetails();
        cout << "Total Price: R" << suv.getPrice() << endl;

    } else if (carChoice == 3) {
        
        Hatchback hatchback;
        cout << "Would you like to add a sport package for R10,000? (1. Yes / 2. No): ";
        cin >> featureChoice;

        if (featureChoice == 1) {
            hatchback.addSportPackage();
        }

        hatchback.showDetails();
        cout << "Total Price: R" << hatchback.getPrice() << endl;

    } else if (carChoice == 4) {
        
        Coupe coupe;
        cout << "Would you like to add leather seats for R12,000? (1. Yes / 2. No): ";
        cin >> featureChoice;

        if (featureChoice == 1) {
            coupe.addLeatherSeats();
        }

        coupe.showDetails();
        cout << "Total Price: R" << coupe.getPrice() << endl;

    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
