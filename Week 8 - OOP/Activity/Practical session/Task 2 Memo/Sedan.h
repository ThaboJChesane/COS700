#ifndef SEDAN_H
#define SEDAN_H

#include "BMWCar.h"


class Sedan : public BMWCar {
private:
    bool hasSunroof;

public:
  
    Sedan();

    
    void addSunroof();

   
    int getPrice() override;

   
    void showDetails() override;
};

#endif 