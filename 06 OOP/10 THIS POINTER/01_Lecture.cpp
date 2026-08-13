#include <iostream>
using namespace std;

class Student{
private:
    string name;
    int age;

public:
    Student(string name, int age){
        this->name = name;
        this->age = age;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main(){
    string name;
    int age;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Student Age: ";
    cin >> age;

    Student s1(name, age);

    s1.display();

    return 0;
}