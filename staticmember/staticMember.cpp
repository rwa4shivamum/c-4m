#include <iostream>
using namespace std;

class Demo{
    public:
    static int x;
};
int Demo::x = 20;

int main(){
    Demo d1,d2,d3;
    d1.x = 10;
    d3.x = 30;

    cout << d2.x << d1.x << endl;
    return 0;
}