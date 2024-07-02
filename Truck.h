#ifndef SVONSYDOW_WEEK2_TRUCK_H
#define SVONSYDOW_WEEK2_TRUCK_H
#include "Car.h"
#include <iostream>

class Truck : public Car {
public:
    using Car::Car;
    Truck();
    Truck(string truckOwner, string truckMake, string truckModel,
          int truckYear, double truckCargoSpace, double truckCargoWeight);

    void setcargoSpace(double truckCargoSpace);
    double getcargoSpace();
    void setcargoWeight(double truckCargoWeight);
    double getcargoWeight();

    void getInfo();

private:
    double cargoSpace;
    double cargoWeight;
};


#endif //SVONSYDOW_WEEK2_TRUCK_H
