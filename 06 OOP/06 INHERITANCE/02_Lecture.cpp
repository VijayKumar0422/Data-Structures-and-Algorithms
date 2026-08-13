#include <iostream>
using namespace std;

class Person{
public:
    void showName(){
        cout << "Name : Vijay" << endl;
    }
};

class Student : public Person{
public:
    void showCourse(){
        cout << "Course : BCA" << endl;
    }
};

int main(){
    Student s1;

    s1.showName();
    s1.showCourse();

    return 0;
}