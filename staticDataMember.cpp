#include <iostream>
using namespace std;

class Counter{
    public:
    static int count;

    Counter(){
        count++;
    }
};
int Counter::count = 0;

int main(){
    Counter c1;
    Counter c2;
    Counter c3;
    Counter c4,c5,d6;
    cout << Counter::count << endl;
    return 0;
}