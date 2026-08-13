#include <iostream>
#include <fstream>
using namespace std;

class Employee{
public:
    string name;
    float salary;

    void input(){
        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    void saveToFile(){
        ofstream file("employee.txt", ios::app);

        file << "Name: " << name << endl;
        file << "Salary: " << salary << endl;
        file << "-------------------" << endl;

        file.close();
    }
};

int main(){
    Employee e1;

    e1.input();

    e1.saveToFile();

    cout << "Employee data added successfully." << endl;

    return 0;
}