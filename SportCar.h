#ifndef SVONSYDOW_WEEK2_SPORTCAR_H
#define SVONSYDOW_WEEK2_SPORTCAR_H
#include "Car.h"
#include <iostream>

class SportCar : public Car {
public:
    using Car::Car;
    SportCar();
    SportCar(string sportCarOwner, string sportCarMake, string sportCarModel, int sportCarYear, double sportCarTopSpeed, double sportCarZeroToSixty);

    void setcarTopSpeed(double topSpeed);
    double getcarTopSpeed();
    void setcarZeroToSixty(double zeroToSixty);
    double getcarZertoToSixty();

    void getInfo();
private:
    double topSpeed;
    double zeroToSixty;
};


#endif //SVONSYDOW_WEEK2_SPORTCAR_H
