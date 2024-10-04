#ifndef COUPE_H
#define COUPE_H

#include "BMWCar.h"

class Coupe : public BMWCar {
private:
    bool hasLeatherSeats;

public:
    
    Coupe();

    
    void addLeatherSeats();

    
    int getPrice() override;

    void showDetails() override;
};

#endif 