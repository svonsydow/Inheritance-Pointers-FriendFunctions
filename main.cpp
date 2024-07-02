//Sandahl von Sydow
//SDEV-340-45 C++ Programming II
//7/23/2023im

#include <iostream>
#include "Car.h"
#include "SportCar.h"
#include "Truck.h"
#include <memory>

using namespace std;


int main() {
//Car base
    Car Sandahl("Sandahl", "Nissan", "Rogue", 2017);
    Sandahl.getInfo();



//Truck derived

    Truck Roddy("Roddy", "Mitsubishi", "Raider", 2008, 30, 2000);
    Truck Roddy2("Roddy", "Mitsubishi", "Might Max", 1996, 27, 1585);
    Roddy.getInfo();

    //regular pointer
    Truck *ptrRoddy2;
    ptrRoddy2 = &Roddy2;
    cout << ptrRoddy2->getOwner() << ": ";
    cout << ptrRoddy2->getMake();
    cout << ", " << ptrRoddy2->getModel();
    cout << ", " << ptrRoddy2->getYear();
    cout << ", " << ptrRoddy2->getcargoSpace() << " sqft";
    cout << ", " << ptrRoddy2->getcargoWeight() << " lbs" << endl;


//SportCar derived
    SportCar Nathan ("Nathan", "Chevrolet", "Camaro", 2017, 170, .6);
    Nathan.getInfo();

//Smart pointer
   auto Morgan= make_unique<SportCar>("Morgan", "Ford", "Mustang", 2019, 150, .5);
    cout << Morgan->getOwner() << ": ";
    cout << Morgan->getMake() << ", ";
    cout << Morgan->getModel() << ", ";
    cout << Morgan->getYear() << ", ";
    cout << Morgan->getcarTopSpeed() << " MPH, ";
    cout << Morgan->getcarZertoToSixty() << " seconds ";
    system("pause>0");
}
