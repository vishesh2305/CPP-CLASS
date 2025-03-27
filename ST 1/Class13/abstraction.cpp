#include <iostream>
using namespace std;




class BankAccount{
    private:
    double balance = 100000000000000;

    public:
    BankAccount()
    {
    }
    void deposit(double amount){
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited $" << amount << endl;
        }
        else{
            cout << "Invalid deposit amount" << endl;
        }
    }

    void displayBalance(){
        cout << "Your balance is: $" << balance << endl;
    }
};

int main() {

BankAccount account;
account.displayBalance();
account.deposit(1000);
account.displayBalance();

return 0;

}