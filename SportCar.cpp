#include "SportCar.h"
#include <iostream>

//Sport Car class constructors

SportCar::SportCar(){}

SportCar::SportCar(string sportCarOwner, string sportCarMake, string sportCarModel,
                   int sportCarYear, double sportCarTopSpeed, double sportCarZeroToSixty){
    owner = sportCarOwner;
    make = sportCarMake;
    model = sportCarModel;
    year = sportCarYear;
    topSpeed = sportCarTopSpeed;
    zeroToSixty=sportCarZeroToSixty;
}
//Sport Car class setters/getters

void SportCar::setcarTopSpeed(double carTopSpeed) {
    topSpeed = carTopSpeed;
}

double SportCar::getcarTopSpeed() {
    return topSpeed;
}

void SportCar::setcarZeroToSixty(double carZeroToSixty) {
    zeroToSixty = carZeroToSixty;
}

double SportCar::getcarZertoToSixty() {
    return zeroToSixty;
}



//Functions

void SportCar::getInfo(){
    cout << owner << ": " << make << ", " << model << ", " << year << ", "
    << topSpeed << " MPH, " << zeroToSixty << " seconds" <<endl;
}


