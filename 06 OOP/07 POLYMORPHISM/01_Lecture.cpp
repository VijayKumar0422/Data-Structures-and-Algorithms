#include <iostream>
using namespace std;

class Calculate{
public:

    void add(int a, int b){
        cout << "Sum = " << a + b << endl;
    }

    void add(double a, double b){
        cout << "Sum = " << a + b << endl;
    }
};

int main(){
    Calculate c1;

    c1.add(10, 20);
    c1.add(10.5, 20.5);

    return 0;
}