#include "Car.h"
#include <iostream>
using namespace std;


Car::Car() {
    Model = "";
    Color = "";
    Serial_number = "";
    Model_year = 0;
    Milage = 0;
    price = 0;
}



string Car::getModel() {
    return Model;
}
string Car::getColor() {
    return Color;
}
string Car::getSerial_number() {
    return Serial_number;
}
int Car::getModel_year() {
    return Model_year;
}
int Car::getMilage() {
    return Milage;
}
int Car::getPrice() {
    return price;
}

void Car::setModel(string m) {
    Model=m;
}
void Car::setColor(string c) {
    Color=c;
}
void Car::setSerial_number(string s) {
    Serial_number=s;
}
void Car::setMilage(int m) {
    Milage=m;
}
void Car::setPrice(int p) {
    price=p;
}
void Car::setModel_year(int m) {
    Model_year=m;
}

void Car::print() {
    cout << "Model: " << Model << endl;
    cout << "Color: " << Color << endl;
    cout << "Serial Number: " << Serial_number << endl;
    cout << "Mileage: " << Milage << endl;
    cout << "Price: " << price << endl;
    cout << "Model Year: " << Model_year << endl;
}


Car::~Car() {
    cout<<"Car object deleted"<<endl;
}
