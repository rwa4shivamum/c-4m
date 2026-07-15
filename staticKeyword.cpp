#include <iostream>
using namespace std;

class Test
{
public:
    static int count;
};

int Test::count = 0;    

int main()
{
    Test t1, t2;

    t1.count++;
    t2.count++;

    cout << Test::count; // Output: 2
}