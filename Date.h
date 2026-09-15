#ifndef UNTITLED7_DATE_H
#define UNTITLED7_DATE_H
#include<iostream>
using namespace std;

// Define a class Date that has the following integer data members: month, day and year.
class Date {
    private:
    int day;
    int month;
    int year;

    public:
    //contructor
    Date();
    //getter functions
    int getYear();
    int getMonth();
    int getDay();

    //setter functions
    void setYear(int year);
    void setMonth(int month);
    void setDay(int day);
    //print function
    void print();
~Date();

};
#endif //UNTITLED7_DATE_H
