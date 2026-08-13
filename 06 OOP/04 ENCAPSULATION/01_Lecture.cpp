#include <iostream>
using namespace std;

class Student{
private:
    int marks;

public:
    void setMarks(int m){
        marks = m;
    }

    void displayMarks(){
        cout << "Marks : " << marks << endl;
    }
};

int main(){
    Student s1;

    s1.setMarks(95);

    s1.displayMarks();

    return 0;
}