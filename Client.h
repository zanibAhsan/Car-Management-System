#include <iostream>
using namespace std;
#include "Date.h"
#ifndef UNTITLED7_CLIENT_H
#define UNTITLED7_CLIENT_H


//Define a class Client with the following data members:
// The name of the client as a standard library string.
// The date of birth of the client (from part a).

class Client {

private:
    string client_name;
    Date date_of_birth;

public:
    //constructor:
    Client();
    //destructor:
    ~Client();
    //getter function:
    string getclient_name();
    Date getdate_of_birth();
    //setter function:
    void setclient_name(string n);
    void setdate_of_birth(Date d);
    //print function:
    void print();

};








#endif //UNTITLED7_CLIENT_H

