#include <iostream>
using namespace std;

class Person{
public:
    void display(){
        cout << "I am a Person." << endl;
    }
};

class Student : public Person{
};

int main(){
    Student s1;

    s1.display();

    return 0;
}