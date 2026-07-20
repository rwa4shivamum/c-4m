#include <iostream>
using namespace std;
class Animal{
    public:
    string name;
    int age;

    Animal(string name, int age){
        this->name = name;
        this->age = age;
    }
};
int main(){
    Animal* a1 = new Animal("dog", 1);
    cout << a1 << endl;

    Animal* a2[3];
    for(int i=0; i<3; i++){
        a2[i] = new Animal("dog",2);
        cout << a2 << endl;
    }
    return 0;
}
