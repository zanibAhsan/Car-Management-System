#include "CarManager.h"
#include <iostream>
using namespace std;

CarManager::CarManager() {
    numberOfCars = 0;
    numberOfSoldCars = 0;

    for (int i = 0; i < 1000; i++) {
        cars[i] = nullptr;
    }

    for (int i = 0; i < 200; i++) {
        soldCars[i] = nullptr;
    }
}

CarManager::~CarManager() {
    for (int i = 0; i < numberOfCars; i++) {
        delete cars[i];
    }

    for (int i = 0; i < numberOfSoldCars; i++) {
        delete soldCars[i];
    }

    cout << "CarManager object destroyed" << endl;
}

void CarManager::addCar(Car &car) {
    if (numberOfCars < 1000) {
        cars[numberOfCars] = new Car();
        *cars[numberOfCars] = car;
        numberOfCars++;
    }
}

Car CarManager::processRequest(ClientRequest &request, Date &purchaseDate) {
    Car requestedCar = request.getCar();

    int bestIndex = -1;

    for (int i = 0; i < numberOfCars; i++) {

        if (cars[i]->getModel() == requestedCar.getModel() &&
            cars[i]->getColor() == requestedCar.getColor() &&
            cars[i]->getModel_year() >= requestedCar.getModel_year() &&
            cars[i]->getPrice() <= requestedCar.getPrice() &&
            cars[i]->getMilage() <= requestedCar.getMilage()) {

            if (bestIndex == -1) {
                bestIndex = i;
            }
            else if (cars[i]->getModel_year() > cars[bestIndex]->getModel_year()) {
                bestIndex = i;
            }
            else if (cars[i]->getModel_year() == cars[bestIndex]->getModel_year() &&
                     cars[i]->getPrice() < cars[bestIndex]->getPrice()) {
                bestIndex = i;
            }
            else if (cars[i]->getModel_year() == cars[bestIndex]->getModel_year() &&
                     cars[i]->getPrice() == cars[bestIndex]->getPrice() &&
                     cars[i]->getMilage() < cars[bestIndex]->getMilage()) {
                bestIndex = i;
            }
        }
    }

    if (bestIndex == -1) {
        Car emptyCar;
        return emptyCar;
    }

    Car soldCar = *cars[bestIndex];

    if (numberOfSoldCars < 200) {
        soldCars[numberOfSoldCars] = new SoldCars();

        Client soldClient = request.getClient();

        soldCars[numberOfSoldCars]->setClient(soldClient);
        soldCars[numberOfSoldCars]->setCar(soldCar);
        soldCars[numberOfSoldCars]->setPurchaseDate(purchaseDate);

        numberOfSoldCars++;
    }

    delete cars[bestIndex];

    for (int i = bestIndex; i < numberOfCars - 1; i++) {
        cars[i] = cars[i + 1];
    }

    cars[numberOfCars - 1] = nullptr;
    numberOfCars--;

    return soldCar;
}
string CarManager::findCarByClientName(string clientName) {

    string serialNumber = "0";

    for (int i = 0; i < numberOfSoldCars; i++) {

        string name = soldCars[i]->getClient().getclient_name();

        if (name == clientName) {
            string serial = soldCars[i]->getCar().getSerial_number();
            serialNumber = serial;
        }
    }

    return serialNumber;
}

void CarManager::printInventory() {
    cout << "===== Cars in Inventory =====" << endl;

    if (numberOfCars == 0) {
        cout << "No cars in inventory." << endl;
    }

    for (int i = 0; i < numberOfCars; i++) {
        cars[i]->print();
        cout << endl;
    }
}

void CarManager::printSoldCars() {
    cout << "===== Sold Cars =====" << endl;

    if (numberOfSoldCars == 0) {
        cout << "No sold cars." << endl;
    }

    for (int i = 0; i < numberOfSoldCars; i++) {
        soldCars[i]->print();
        cout << endl;
    }
}
