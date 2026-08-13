#include <iostream>
using namespace std;

class Student{
public:
    string name = "Vijay";
};

int main(){
    Student s1;

    cout << "Student Name: " << s1.name;

    return 0;
}
