#include <iostream>
using namespace std;

class Employee{
public:
    int id;
    string name;
    float salary;

    void input(){
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    void display(){
        cout << "\n----- Employee Details -----" << endl;
        cout << "ID     : " << id << endl;
        cout << "Name   : " << name << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main(){
    Employee e1;

    e1.input();

    e1.display();

    return 0;
}