#include <iostream>
using namespace std;

class Animal{
public:
    virtual void sound(){
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal{
public:
    void sound() override{
        cout << "Dog barks." << endl;
    }
};

int main(){
    int choice;

    cout << "Enter 1 for Animal and 2 for Dog: ";
    cin >> choice;

    Animal *animal;

    Dog dog;

    if(choice == 1){
        animal = new Animal();
    }
    else{
        animal = &dog;
    }

    animal->sound();

    if(choice == 1){
        delete animal;
    }

    return 0;
}