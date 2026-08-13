#include <iostream>
using namespace std;

class Student{
private:
    int marks;

public:
    Student(){
        marks = 90;
    }

    friend void displayMarks(Student s);
};

void displayMarks(Student s){
    cout << "Marks: " << s.marks << endl;
}

int main(){
    Student s1;

    displayMarks(s1);

    return 0;
}