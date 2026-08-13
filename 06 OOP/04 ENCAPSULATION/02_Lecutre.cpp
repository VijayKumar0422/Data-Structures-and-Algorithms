#include <iostream>
using namespace std;

class BankAccount{
private:
    float balance;

public:
    void deposit(float amount){
        balance = amount;
    }

    void displayBalance(){
        cout << "Balance : " << balance << endl;
    }
};

int main(){
    BankAccount user1;

    user1.deposit(5000);

    user1.displayBalance();

    return 0;
}