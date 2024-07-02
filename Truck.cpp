#include "Truck.h"
#include <iostream>

//Truck class constructors
Truck::Truck(){}

Truck::Truck(string truckOwner, string truckMake, string truckModel,
             int truckYear, double truckCargoSpace, double truckCargoWeight) {
    owner = truckOwner;
    make = truckMake;
    model = truckModel;
    year = truckYear;
    cargoSpace = truckCargoSpace;
    cargoWeight = truckCargoWeight;
}

//Truck class setters/getters

void Truck::setcargoSpace(double truckCargoSpace) {
    cargoSpace = truckCargoSpace;
}

double Truck::getcargoSpace() {
    return cargoSpace;
}

void Truck::setcargoWeight(double truckCargoWeight) {
    cargoWeight = truckCargoWeight;
}

double Truck::getcargoWeight() {
    return cargoWeight;
}

//Functions

void Truck::getInfo(){
    cout << owner << ": " << make << ", " << model << ", " << year
    << ", " << cargoSpace << " sqft, " << cargoWeight << " lbs" << endl;
}










