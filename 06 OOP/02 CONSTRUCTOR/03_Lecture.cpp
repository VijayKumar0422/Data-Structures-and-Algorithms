#include <iostream>
using namespace std;

class Student{
public:

    Student(){
        cout << "Constructor Called" << endl;
    }

};

int main(){
    Student s1;
    Student s2;

    return 0;
}