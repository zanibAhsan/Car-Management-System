#include "Client.h"
#include"Date.h"
#include <iostream>
using namespace std;


//constructor
Client::Client() {
    client_name = "";
}
Client::~Client() {
    cout<<"Client object deleted";
}
//getterfunction
string Client::getclient_name() {
    return client_name;
}
Date Client::getdate_of_birth() {
    return date_of_birth;
}
//setter functions
void Client::setclient_name(string n) {
    client_name = n;
}
void Client::setdate_of_birth(Date d) {
    date_of_birth = d;
}
//print functions
void Client::print() {
    cout << "Client Name: " << client_name << endl;
    cout << "Date of Birth: ";
    date_of_birth.print();
}
