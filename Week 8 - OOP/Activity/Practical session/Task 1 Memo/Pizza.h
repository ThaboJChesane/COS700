#ifndef PIZZA_H
#define PIZZA_H

#include <string>
using namespace std;

class Pizza {
protected:
    string baseType;
    string size;
    int basePrice;
    int toppingCount;

public:
    Pizza(); 

    
    virtual void makeBase() = 0;

    
    void addToppings(int count);

    
    void setSize(string pizzaSize);

    
    int calculatePrice();

    
    void showDetails();
};

#endif 