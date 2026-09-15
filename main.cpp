#include <iostream>
#include "CarManager.h"
#include "Car.h"
#include "Client.h"
#include "ClientRequest.h"
#include "Date.h"

using namespace std;

int main() {

    CarManager manager;

    int numberCars;

    cout << "How many cars do you want to add to inventory? ";
    cin >> numberCars;

    for (int i = 0; i < numberCars; i++) {

        Car car;

        string model;
        string color;
        string serialNumber;

        int modelYear;
        int mileage;
        int price;

        cout << endl;
        cout << "Enter information for car " << i + 1 << endl;

        cout << "Model: ";
        cin >> model;

        cout << "Color: ";
        cin >> color;

        cout << "Serial number: ";
        cin >> serialNumber;

        cout << "Model year: ";
        cin >> modelYear;

        cout << "Mileage: ";
        cin >> mileage;

        cout << "Price: ";
        cin >> price;

        car.setModel(model);
        car.setColor(color);
        car.setSerial_number(serialNumber);
        car.setModel_year(modelYear);
        car.setMilage(mileage);
        car.setPrice(price);

        manager.addCar(car);
    }

    int numberRequests;

    cout << endl;
    cout << "How many client requests do you want to process? ";
    cin >> numberRequests;

    for (int i = 0; i < numberRequests; i++) {

        Client client;
        Date birthDate;
        Car requestedCar;
        ClientRequest request;
        Date purchaseDate;

        string clientName;

        int birthDay;
        int birthMonth;
        int birthYear;

        string requestedModel;
        string requestedColor;

        int oldestYear;
        int maxMileage;
        int maxPrice;

        int purchaseDay;
        int purchaseMonth;
        int purchaseYear;

        cout << endl;
        cout << "Enter information for client request " << i + 1 << endl;

        cout << "Client name: ";
        cin >> clientName;

        cout << "Client birth day: ";
        cin >> birthDay;

        cout << "Client birth month: ";
        cin >> birthMonth;

        cout << "Client birth year: ";
        cin >> birthYear;

        birthDate.setDay(birthDay);
        birthDate.setMonth(birthMonth);
        birthDate.setYear(birthYear);

        client.setclient_name(clientName);
        client.setdate_of_birth(birthDate);

        cout << "Requested car model: ";
        cin >> requestedModel;

        cout << "Requested car color: ";
        cin >> requestedColor;

        cout << "Oldest model year accepted: ";
        cin >> oldestYear;

        cout << "Maximum mileage accepted: ";
        cin >> maxMileage;

        cout << "Maximum price accepted: ";
        cin >> maxPrice;

        requestedCar.setModel(requestedModel);
        requestedCar.setColor(requestedColor);
        requestedCar.setSerial_number("");
        requestedCar.setModel_year(oldestYear);
        requestedCar.setMilage(maxMileage);
        requestedCar.setPrice(maxPrice);

        request.setClient(client);
        request.setCar(requestedCar);

        cout << "Purchase day: ";
        cin >> purchaseDay;

        cout << "Purchase month: ";
        cin >> purchaseMonth;

        cout << "Purchase year: ";
        cin >> purchaseYear;

        purchaseDate.setDay(purchaseDay);
        purchaseDate.setMonth(purchaseMonth);
        purchaseDate.setYear(purchaseYear);

        Car result = manager.processRequest(request, purchaseDate);

        cout << endl;
        cout << "===== Request Result =====" << endl;

        if (result.getSerial_number() == "") {
            cout << "No car was found for this request." << endl;
        }
        else {
            cout << "Car sold to " << clientName << ":" << endl;
            result.print();
        }
    }

    cout << endl;
    manager.printInventory();

    cout << endl;
    manager.printSoldCars();

    string searchName;

    cout << endl;
    cout << "Enter a client name to search for purchased car serial number: ";
    cin >> searchName;

    string resultSerial = manager.findCarByClientName(searchName);

    cout << "Serial number purchased by "
         << searchName
         << ": "
         << resultSerial
         << endl;

    return 0;
}
