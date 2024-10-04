#ifndef BMWCAR_H
#define BMWCAR_H

#include <string>
using namespace std;

class BMWCar {
protected:
    string model;
    int basePrice;

public:
    
    BMWCar(string m, int price);

    
    virtual void showDetails();

    
    virtual int getPrice();
};

#endif 