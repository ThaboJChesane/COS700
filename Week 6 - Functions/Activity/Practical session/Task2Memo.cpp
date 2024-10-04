#include <iostream>
#include <cstdlib> 
#include <ctime>    
using namespace std;


double getPizzaSizePrice(int size) {
    if (size == 1) {
        return 50.0;  
    } else if (size == 2) {
        return 70.0;  
    } else if (size == 3) {
        return 90.0;  
    }
    return 0.0;  
}


double getCrustPrice(int crust) {
    if (crust == 1) {
        return 20.0;  
    } else if (crust == 2) {
        return 30.0;  
    } else if (crust == 3) {
        return 40.0;  
    }
    return 0.0;  
}


double getToppingPrice() {
    return rand() % 16 + 5; 
}


double calculateTotal(int size, int crust, int numToppings) {
    double sizePrice = getPizzaSizePrice(size);
    double crustPrice = getCrustPrice(crust);
    double toppingCost = 0;

    cout << "Price per topping: " << endl;

   
    for (int i = 0; i < numToppings; i++) {
        double toppingPrice = getToppingPrice();
        cout << "Topping " << i + 1 << ": R" << toppingPrice << endl;
        toppingCost += toppingPrice;
    }

    
    double totalCost = sizePrice + crustPrice + toppingCost;
    return totalCost;
}

int main() {
    srand(time(0));  

    int size, crust, numToppings;
    string customerName;

    
    cout << "Welcome to the Custom Pizza Ordering System!" << endl;

    
    cout << "Please enter your name: ";
    cin >> customerName;

    
    cout << "\nChoose your pizza size:" << endl;
    cout << "1. Small (R50)" << endl;
    cout << "2. Medium (R70)" << endl;
    cout << "3. Large (R90)" << endl;
    cout << "Enter the number corresponding to your choice: ";
    cin >> size;

   
    cout << "\nChoose your crust type:" << endl;
    cout << "1. Thin Crust (R20)" << endl;
    cout << "2. Thick Crust (R30)" << endl;
    cout << "3. Stuffed Crust (R40)" << endl;
    cout << "Enter the number corresponding to your choice: ";
    cin >> crust;

    
    cout << "\nHow many toppings would you like? ";
    cin >> numToppings;

   
    double totalCost = calculateTotal(size, crust, numToppings);

    
    cout << "\nOrder Summary for " << customerName << ":" << endl;
    cout << "Pizza Size: ";
    if (size == 1) cout << "Small (R50)" << endl;
    else if (size == 2) cout << "Medium (R70)" << endl;
    else cout << "Large (R90)" << endl;

    cout << "Crust Type: ";
    if (crust == 1) cout << "Thin Crust (R20)" << endl;
    else if (crust == 2) cout << "Thick Crust (R30)" << endl;
    else cout << "Stuffed Crust (R40)" << endl;

    cout << "Number of Toppings: " << numToppings << endl;
    cout << "Total cost of your pizza: R" << totalCost << endl;

    return 0;
}