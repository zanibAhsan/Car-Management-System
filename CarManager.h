#ifndef CARMANAGER_H
#define CARMANAGER_H

#include "Car.h"
#include "SoldCars.h"
#include "ClientRequest.h"
#include "Date.h"
#include <iostream>
using namespace std;

class CarManager {

private:
    int numberOfCars;
    int numberOfSoldCars;

    Car* cars[1000];
    SoldCars* soldCars[200];

public:
    CarManager();
    ~CarManager();

    void addCar(Car &car);

    Car processRequest(ClientRequest &request, Date &purchaseDate);


    string findCarByClientName(string clientName);

    void printInventory();

    void printSoldCars();

};

#endif
