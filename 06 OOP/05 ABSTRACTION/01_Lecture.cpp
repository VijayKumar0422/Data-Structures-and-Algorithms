#include <iostream>
using namespace std;

class Fan{
public:

    void turnOn(){
        cout << "Fan is ON" << endl;
    }

    void turnOff(){
        cout << "Fan is OFF" << endl;
    }
};

int main(){
    Fan f1;

    f1.turnOn();
    f1.turnOff();

    return 0;
}