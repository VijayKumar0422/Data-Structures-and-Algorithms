#include <iostream>
using namespace std;

class Father{
public:
    void fatherQuality(){
        cout << "Father's Quality" << endl;
    }
};

class Mother{
public:
    void motherQuality(){
        cout << "Mother's Quality" << endl;
    }
};

class Child : public Father, public Mother{
};

int main(){
    Child c1;

    c1.fatherQuality();
    c1.motherQuality();

    return 0;
}