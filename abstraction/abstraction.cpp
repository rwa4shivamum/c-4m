#include <iostream>
using namespace std;

//Abstraction:Data Abstraction means hiding internal details and showing only the necessary features to the user.
class BankAccount{
    private:
    string bankHolderName;
    int bankBalance;
    int PIN = 1234;

    public:
        BankAccount(string bankHolderName){
            this->bankHolderName = bankHolderName;
            this->bankBalance = 0;
        }

        void withdraw(int PIN, int money){
            if(this->PIN == PIN && this->bankBalance >= money){
                cout << "money Withdraw Successfull" << endl;
                this->bankBalance -= money;                
            }else{
                cout << "Insuffucient Balance" << endl;
            }
        }

        void checkBalance(int PIN){
            if(this->PIN == PIN){
                cout << this->bankBalance << endl;
            }else{
                cout << "Wrong PIN" << endl;
            }
        }

        void deposit(int money){
            this->bankBalance += money;
        }
};

int main()
{
    BankAccount b1("Shivam");
    b1.deposit(2000);
    b1.checkBalance(1234);
    b1.withdraw(1234,1000);
    b1.checkBalance(1234);
    return 0;
}