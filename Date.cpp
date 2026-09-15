#include "Date.h"
#include <iostream>
using namespace std;

Date::Date() {
    day = 0;
    month = 0;
    year = 0;
}



int Date::getYear() {
    return year;
}

int Date::getMonth() {
    return month;
}
int Date::getDay() {
    return day;
}

void Date::setYear(int y) {
  year=y;
}

void Date::setMonth(int m) {
    month=m;
}
void Date::setDay(int d) {
    day=d;
}
void Date::print() {

    cout<<year<<"/"<<month<<"/"<<day<<endl;
}

Date::~Date() {
    cout<<"Date object deleted"<<endl;


}






