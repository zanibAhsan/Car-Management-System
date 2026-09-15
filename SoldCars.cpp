#include "SoldCars.h"
#include <iostream>

using namespace std;

SoldCars::SoldCars() {

}

SoldCars::~SoldCars() {
    cout << "SoldCars object destroyed" << endl;
}

Client SoldCars::getClient() {
    return client;
}

Car SoldCars::getCar() {
    return car;
}

Date SoldCars::getPurchaseDate() {
    return purchaseDate;
}

void SoldCars::setClient(Client &c) {
    client = c;
}

void SoldCars::setCar(Car &ca) {
    car = ca;
}

void SoldCars::setPurchaseDate(Date &d) {
    purchaseDate = d;
}

void SoldCars::print() {
    cout << "Client Information:" << endl;
    client.print();

    cout << "Purchased Car:" << endl;
    car.print();

    cout << "Purchase Date: ";
    purchaseDate.print();
}
