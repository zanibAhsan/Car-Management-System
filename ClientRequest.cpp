#include "ClientRequest.h"
#include <iostream>
using namespace std;

ClientRequest::ClientRequest() {
}
ClientRequest::~ClientRequest() {
    cout<<"Client Request Destructor"<<endl;
}
Client ClientRequest::getClient() {
    return client;
}

Car ClientRequest::getCar() {
    return car;
}


void ClientRequest::setClient(Client &c) {
    client = c;
}

void ClientRequest::setCar(Car &c) {
    car = c;
}
void ClientRequest::print() {
        client.print();
        car.print();

    }


