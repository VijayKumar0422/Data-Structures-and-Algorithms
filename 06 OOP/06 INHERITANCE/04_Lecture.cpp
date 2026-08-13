#include <iostream>
using namespace std;

class Person{
public:
    void show(){
        cout << "I am a Person." << endl;
    }
};

class Student : public Person{
};

class Teacher : public Person{
};

int main(){
    Student s1;
    Teacher t1;

    s1.show();
    t1.show();

    return 0;
}