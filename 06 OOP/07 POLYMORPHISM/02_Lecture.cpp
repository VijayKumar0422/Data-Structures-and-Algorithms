#include <iostream>
using namespace std;

class Sum{
public:

    void add(int a, int b){
        cout << a + b << endl;
    }

    void add(int a, int b, int c){
        cout << a + b + c << endl;
    }
};

int main(){
    Sum s1;

    s1.add(5, 10);
    s1.add(5, 10, 15);

    return 0;
}