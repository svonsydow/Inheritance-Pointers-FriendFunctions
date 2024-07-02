#ifndef SVONSYDOW_WEEK2_CAR_H
#define SVONSYDOW_WEEK2_CAR_H
#include <iostream>



using namespace std;

class Car {
public:
    Car();
    Car(string carOwner, string carMake, string carModel, int carYear);
    void setOwner(string carOwner);
    string getOwner();
    void setMake(string carMake);
    string getMake();
    void setModel(string carModel);
    string getModel();
    void setYear(int carYear);
    int getYear();

    void getInfo();

    friend class Truck;
    friend class SportCar;

private:
string owner;
string make;
string model;
int year;

};






#endif //SVONSYDOW_WEEK2_CAR_H
