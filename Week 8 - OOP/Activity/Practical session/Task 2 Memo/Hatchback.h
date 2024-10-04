#ifndef HATCHBACK_H
#define HATCHBACK_H

#include "BMWCar.h"


class Hatchback : public BMWCar {
private:
    bool hasSportPackage;

public:
    
    Hatchback();

    
    void addSportPackage();

    int getPrice() override;

    void showDetails() override;
};

#endif