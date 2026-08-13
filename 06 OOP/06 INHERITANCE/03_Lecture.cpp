#include <iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout << "Animal can Eat" << endl;
    }
};

class Dog : public Animal{
public:
    void bark(){
        cout << "Dog can Bark" << endl;
    }
};

class Puppy : public Dog{
};

int main(){
    Puppy p1;

    p1.eat();
    p1.bark();

    return 0;
}