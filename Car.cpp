#include "Car.h"
#include <iostream>
using namespace std;
//Car class constructors
Car::Car(){}

Car::Car(string carOwner, string carMake, string carModel, int carYear) {
    owner = carOwner;
    make = carMake;
    model = carModel;
    year = carYear;
}

//Car class setters/getters
void Car::setOwner(string carOwner) {
    owner = carOwner;
}

string Car::getOwner() {
    return owner;
}

void Car::setMake(string carMake) {
    make = carMake;
}

string Car::getMake() {
    return make;
}

void Car::setModel(string carModel) {
    model = carModel;
}

string Car::getModel() {
    return model;
}

void Car::setYear(int carYear) {
    year = carYear;
}

int Car::getYear() {
    return year;
}

//Functions

void Car::getInfo(){
    cout << owner << ": " << make << ", " << model << ", " << year << endl;
}


