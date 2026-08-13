#include <iostream>
using namespace std;

class Vehicle{
public:

    virtual void start(){
        cout << "Vehicle Started" << endl;
    }
};

class Bike : public Vehicle{
public:

    void start(){
        cout << "Bike Started" << endl;
    }
};

int main(){
    Vehicle *v;

    Bike b;

    v = &b;

    v->start();

    return 0;
}