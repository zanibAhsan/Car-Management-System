
#ifndef UNTITLED7_CAR_H
#define UNTITLED7_CAR_H
#include<iostream>
using namespace std;

class Car {

private:
    string Model;
    string Color;
    string Serial_number;
    int Model_year;
    int Milage;
    int price;

public:
    Car();
    ~Car();

    //getter functions:

    string getModel();
    string getColor();
    string getSerial_number();
    int getMilage();
    int getPrice();
    int getModel_year();

    //Setter function:

    void setModel(string);
    void setColor(string);
    void setSerial_number(string);
    void setMilage(int);
    void setPrice(int);
    void setModel_year(int);

    //print functions:

    void print();

};
#endif //UNTITLED7_CAR_H
