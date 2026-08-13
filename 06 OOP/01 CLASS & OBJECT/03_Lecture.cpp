#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int age;
};

int main(){
    Student s1;

    cout << "Enter Name: ";
    cin >> s1.name;

    cout << "Enter Age: ";
    cin >> s1.age;

    cout << "\nStudent Details" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age : " << s1.age << endl;

    return 0;
}