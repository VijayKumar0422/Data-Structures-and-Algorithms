#include <iostream>
#include <fstream>
using namespace std;

class Student{
public:
    void readFromFile(){
        ifstream file("student.txt");

        if(!file.is_open()){
            cout << "File could not be opened." << endl;
            return;
        }

        string line;

        while(getline(file, line)){
            cout << line << endl;
        }

        file.close();
    }
};

int main(){
    Student s1;

    s1.readFromFile();

    return 0;
}