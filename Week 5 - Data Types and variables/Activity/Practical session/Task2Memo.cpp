
#include <iostream>
using namespace std;

int main() {
    double totalPrice;
    int tipPercentage;
    int numberOfPeople;

    
    cout << "Enter the total price of the food: ";
    cin >> totalPrice;

  
    cout << "Enter the tip percentage (10, 20, 30): ";
    cin >> tipPercentage;

    cout << "Enter the number of people splitting the bill: ";
    cin >> numberOfPeople;

    double tipAmount = (totalPrice * tipPercentage) / 100;

    double totalBill = totalPrice + tipAmount;

    double amountPerPerson = totalBill / numberOfPeople;

    cout << "The total bill is: $" << totalBill << endl;
    cout << "Each person should pay: $" << amountPerPerson << endl;

    return 0;
}