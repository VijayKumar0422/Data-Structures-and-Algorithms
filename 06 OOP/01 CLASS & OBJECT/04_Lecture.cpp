#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int age;
};

int main(){
    Student s1, s2, s3;

    s1.name = "Vijay";
    s1.age = 20;

    s2.name = "Rahul";
    s2.age = 21;

    s3.name = "Aman";
    s3.age = 19;

    cout << "Student 1" << endl;
    cout << "Name : " << s1.name << endl;
    cout << "Age  : " << s1.age << endl;

    cout << "\nStudent 2" << endl;
    cout << "Name : " << s2.name << endl;
    cout << "Age  : " << s2.age << endl;

    cout << "\nStudent 3" << endl;
    cout << "Name : " << s3.name << endl;
    cout << "Age  : " << s3.age << endl;

    return 0;
}