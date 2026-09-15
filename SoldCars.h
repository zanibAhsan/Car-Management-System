#ifndef SOLDCARS_H
#define SOLDCARS_H

#include "Client.h"
#include "Car.h"
#include "Date.h"

class SoldCars {

private:
    Client client;
    Car car;
    Date purchaseDate;   // NO parentheses

public:
    SoldCars();
    ~SoldCars();

    Client getClient();
    Car getCar();
    Date getPurchaseDate();

    void setClient(Client &c);
    void setCar(Car &ca);
    void setPurchaseDate(Date &d);

    void print();
};

#endif
