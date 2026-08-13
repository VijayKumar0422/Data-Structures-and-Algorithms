#include <iostream>
using namespace std;

class ATM{
public:

    void withdraw(){
        cout << "Cash Withdraw Successful" << endl;
    }
};

int main(){
    ATM user;

    user.withdraw();

    return 0;
}