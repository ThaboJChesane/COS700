#include "DebonairsPizza.h"
#include "RomansPizza.h"
#include <iostream>
using namespace std;

int main() {
    int pizzaChoice, toppingCount;
    string size;

    cout << "Select Pizza Store: \n1. Debonairs (Stuffed Crust)\n2. Romans (Pan Pizza)\nChoice: ";
    cin >> pizzaChoice;

    Pizza* pizza = nullptr;

    
    if (pizzaChoice == 1) {
        DebonairsPizza debonairs;
        pizza = &debonairs;
        pizza->makeBase();
    } else if (pizzaChoice == 2) {
        RomansPizza romans;
        pizza = &romans;
        pizza->makeBase();
    } else {
        cout << "Invalid choice!" << endl;
        return 1;
    }

   
    cout << "Select Pizza Size (Small/Medium/Large): ";
    cin >> size;
    pizza->setSize(size);


    cout << "How many toppings would you like? ";
    cin >> toppingCount;
    pizza->addToppings(toppingCount);

    pizza->showDetails();

    return 0;
}