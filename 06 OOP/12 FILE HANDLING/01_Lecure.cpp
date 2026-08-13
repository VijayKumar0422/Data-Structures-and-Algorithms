#include <iostream>
#include <fstream>
using namespace std;

class Student{
public:
    string name;
    int age;

    void input(){
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Student Age: ";
        cin >> age;
    }

    void saveToFile(){
        ofstream file("student.txt");

        file << "Name: " << name << endl;
        file << "Age: " << age << endl;

        file.close();
    }
};

int main(){
    Student s1;

    s1.input();

    s1.saveToFile();

    cout << "Student data saved successfully." << endl;

    return 0;
}