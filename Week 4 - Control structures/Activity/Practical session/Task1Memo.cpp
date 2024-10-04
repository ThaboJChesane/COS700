#include <iostream>
#include <string>

using namespace std;

int main() {
    string burgerType;
    string bunType;
    string topping;
    char addToppings;
    char orderMore;
    string friesSize;
    int mealCount;
    double totalPrice = 0.0;
    double mealPrice = 0.0;
    bool isOrderComplete = false;

    cout << "Welcome to the Burger Shop!" << endl;
    cout << "How many meals would you like to order? ";
    cin >> mealCount;

    // TODO: Add a for loop to handle multiple meals
    for (int i = 1; i <= mealCount; i++) {
        mealPrice = 0.0;
        cout << "Meal " << i << ":" << endl;

        cout << "Please select your burger type (beef/chicken): ";
        cin >> burgerType;

        // TODO: Add if-else statements to handle burger type selection
        if (burgerType == "beef") {
            mealPrice += 50.0;
        } else if (burgerType == "chicken") {
            mealPrice += 45.0;
        } else {
            cout << "Invalid burger type. Defaulting to beef." << endl;
            mealPrice += 50.0;
        }

        cout << "Select bun type (regular/wholewheat): ";
        cin >> bunType;

        cout << "Would you like to add toppings? (y/n): ";
        cin >> addToppings;

        // TODO: Add if statement to check if toppings are needed
        if (addToppings == 'y' || addToppings == 'Y') {
            // TODO: Add a loop to handle multiple topping selections
            while (true) {
                cout << "Choose a topping to add (cheese/lettuce/tomato/onions/pickles): ";
                cin >> topping;

                // TODO: Add if-else statements for each topping
                if (topping == "cheese") {
                    mealPrice += 5.0;
                    cout << "Cheese added!" << endl;
                } else if (topping == "lettuce") {
                    mealPrice += 3.0;
                    cout << "Lettuce added!" << endl;
                } else if (topping == "tomato") {
                    mealPrice += 4.0;
                    cout << "Tomato added!" << endl;
                } else if (topping == "onions") {
                    mealPrice += 2.0;
                    cout << "Onions added!" << endl;
                } else if (topping == "pickles") {
                    mealPrice += 3.5;
                    cout << "Pickles added!" << endl;
                } else {
                    cout << "Invalid topping. Please choose again." << endl;
                    continue;
                }

                cout << "Would you like to add more toppings? (y/n): ";
                cin >> orderMore;
                // TODO: Add if statement to break the loop if no more toppings are needed
                if (orderMore == 'n' || orderMore == 'N') {
                    break;
                }
            }
        }

        cout << "Choose fries size (small/medium/large): ";
        cin >> friesSize;

        // TODO: Add if-else statements to handle fries size selection
        if (friesSize == "small") {
            mealPrice += 10.0;
            cout << "Small fries selected." << endl;
        } else if (friesSize == "medium") {
            mealPrice += 15.0;
            cout << "Medium fries selected." << endl;
        } else if (friesSize == "large") {
            mealPrice += 20.0;
            cout << "Large fries selected." << endl;
        } else {
            cout << "Invalid fries size. Defaulting to medium." << endl;
            mealPrice += 15.0;
        }

        cout << "Meal " << i << " summary: " << endl;
        cout << "Burger: " << burgerType << " with " << bunType << " bun." << endl;
        cout << "Fries: " << friesSize << "." << endl;
        cout << "Price for this meal: R" << mealPrice << endl;
        cout << "---------------------------" << endl;

        // TODO: Add logic to update the total price
        totalPrice += mealPrice;
    }

    cout << "Total amount for " << mealCount << " meal(s): R" << totalPrice << endl;
    cout << "Thank you for your order! Preparing all meals." << endl;

    return 0;
}