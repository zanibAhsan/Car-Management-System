#ifndef CLIENTREQUEST_H
#define CLIENTREQUEST_H


#include "Car.h"
#include "Client.h"
#include <iostream>
using namespace std;

class ClientRequest {


private:
    Client client;
    Car car;

public:
    ClientRequest();
    ~ClientRequest();

//getters
    Client getClient();
    Car getCar();
    //settters
    void setClient(Client &client);
    void setCar(Car &car);
  //print
    void print();


};
#endif
