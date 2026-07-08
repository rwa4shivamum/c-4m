#include <iostream>
using namespace std;

//Encapsulation: 
class Student{
    public:
    string name;
    int age;

    private:
    string girlfrndName;

    public:
        Student(string name, int age, string girlfrndName){
            this->name = name;
            this->age = age;
            this->girlfrndName = girlfrndName;
        }

        string isGirlfrndNameKnowOnlyhisfrnd(string frndName){
            if(frndName == "rishi"){
                return this->girlfrndName;
            }else{
                return "Not Known Frnd";
            }
        }
};


class BankAccount{
    private:
    string accoutHolderName;
    int AccountNumber;
    int bankBalance;
    int AtmPin;

    public:
        BankAccount(string accoutHolderName, int AccountNumber){
            this->accoutHolderName = accoutHolderName;
            this->AccountNumber = AccountNumber;
            this->AtmPin = 1234;
            this->bankBalance = 0;
        }

        bool withdrawMoney(int money, int AtmPin){
            if(this->bankBalance >= money && this->AtmPin == AtmPin){
                this->bankBalance = this->bankBalance - money;
                return true;
            }else{
                return false;
            }
        }

        bool deposit(int money){
            this->bankBalance = this->bankBalance + money;
            return true;
        }

        void display(){
            cout << this->accoutHolderName << " accountNumber " << this->AccountNumber << " bankbalance " << this->bankBalance <<  endl;
        }
    
};
int main(){
    // Student s1("mohit", 21, "shivani");
    // cout << s1.name << " here " << s1.age << endl;
    // cout << s1.isGirlfrndNameKnowOnlyhisfrnd("rish") << endl;

    BankAccount b1("shivam", 9834894);
    b1.deposit(500);
    b1.withdrawMoney(400, 1234);
    b1.display();

    BankAccount b2("sani", 923840984);
    b2.deposit(500);
    b2.withdrawMoney(400, 1234);
    b2.display();

    return 0;
}