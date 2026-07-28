#include <iostream>
using namespace std;

// int main(){
//     int a = 10,b=0;
//     try{
//         if(b==0){
//             throw "Deivision by zer error";
//         }
//         cout << "Result: " << a / b;
//     }
//     catch(const char* msg) {
//         cout << "Exception caught: " << msg;
//     }
//     cout << "\nProgram continues...";
//     return 0;
// }

int main()
{
    try
    {
        int choice;
        cout << "Enter 1 or 2: ";
        cin >> choice;

        if (choice == 1)
            throw 100; // int exception
        else if (choice == 2)
            throw "Error!"; // string exception
    }
    catch (int x)
    {
        cout << "Integer Exception: " << x << endl;
    }
    catch (const char *msg)
    {
        cout << "String Exception: " << msg << endl;
    }
}