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
    for (/* add loop condition here */) {
        mealPrice = 0.0;
        cout << "Meal " << /* TODO: Add logic to display meal number */ << ":" << endl;

        cout << "Please select your burger type (beef/chicken): ";
        cin >> burgerType;

        // TODO: Add if-else statements to handle burger type selection
        if (/* condition for beef */) {
            mealPrice += 50.0;
        } else if (/* condition for chicken */) {
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
        if (/* condition to check if toppings are needed */) {

            // TODO: Add a loop to handle multiple topping selections
            while (/* add loop condition for topping selection */) {
                cout << "Choose a topping to add (cheese/lettuce/tomato/onions/pickles): ";
                cin >> topping;

                // TODO: Add if-else statements for each topping as well as the price
                if (/* condition for cheese */) {
                  
                  
                    // TODO: Add Cheese to the meal Price
                    
                    cout << "Cheese added!" << endl;
                }
                
                else if (/* condition for lettuce */) {


                    // TODO: Add Lettuce to the meal Price


                    cout << "Lettuce added!" << endl;
                } 
                
                
                else if (/* condition for tomato */) {


                     // TODO: Add Tomato to the meal Price



                    cout << "Tomato added!" << endl;
                } 
                
                else if (/* condition for onions */) {



                    // TODO: Add Onions to the meal Price



                    cout << "Onions added!" << endl;


                } 
                
                else if (/* condition for pickles */) {
                    mealPrice += 3.5;
                    cout << "Pickles added!" << endl;
                } 
                
                else {
                    cout << "Invalid topping. Please choose again." << endl;
                    continue;
                }

                cout << "Would you like to add more toppings? (y/n): ";
                cin >> orderMore;
                // TODO: Add if statement to break the loop if no more toppings are needed
                
                
                if (/* condition to break loop */) {
                    break;
                }
            }
        }

        cout << "Choose fries size (small/medium/large): ";
        cin >> friesSize;

        // TODO: Add if-else statements to handle fries size selection
        if (/* condition for small */) {


             // TODO: Add Small fries to the meal Price


            cout << "Small fries selected." << endl;
        } 
        
        else if (/* condition for medium */) {


             // TODO: Add Medium fries to the meal Price



            cout << "Medium fries selected." << endl;
        } 
        
        else if (/* condition for large */) {



             // TODO: Add Large fries to the meal Price




            cout << "Large fries selected." << endl;
        } 
        
        
        else {
            cout << "Invalid fries size. Defaulting to medium." << endl;
            mealPrice += 15.0;
        }

        cout << "Meal " << /* TODO: Add logic to display meal number */ << " summary: " << endl;
        cout << "Burger: " << burgerType << " with " << bunType << " bun." << endl;
        cout << "Fries: " << friesSize << "." << endl;
        cout << "Price for this meal: R" << mealPrice << endl;
        cout << "---------------------------" << endl;

        // TODO: Add logic to update the total price
        
    }

    cout << "Total amount for " << mealCount << " meal(s): R" << totalPrice << endl;
    cout << "Thank you for your order! Preparing all meals." << endl;

    return 0;
}