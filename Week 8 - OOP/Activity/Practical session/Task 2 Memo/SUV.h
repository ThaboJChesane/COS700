#ifndef SUV_H
#define SUV_H

#include "BMWCar.h"


class SUV : public BMWCar {
private:
    bool hasAllWheelDrive;

public:
    
    SUV();

    
    void addAllWheelDrive();

    
    int getPrice() override;

    
    void showDetails() override;
};

#endif 