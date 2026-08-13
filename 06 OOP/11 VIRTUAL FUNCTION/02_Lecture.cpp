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

class Cat : public Animal{
public:
    void sound() override{
        cout << "Cat meows." << endl;
    }
};

int main(){
    int choice;

    cout << "Enter 1 for Dog or 2 for Cat: ";
    cin >> choice;

    Animal *animal;

    Dog dog;
    Cat cat;

    if(choice == 1){
        animal = &dog;
    }
    else if(choice == 2){
        animal = &cat;
    }
    else{
        cout << "Invalid choice." << endl;
        return 0;
    }

    animal->sound();

    return 0;
}