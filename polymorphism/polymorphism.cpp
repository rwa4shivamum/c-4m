#include <iostream>
using namespace std;

//method overloading (same method name but different behaviour)
class Add{
    public:
    int add(int a, int b){
        return a+b;
    };

    float add(float a, float b){
        return a+b;
    }
};

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal sound";
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks";
    }
};

int main(){
    // Add a;
    // cout << a.add(2,3) << endl;
    // cout << a.add(2.5f,3.5f) << endl;

    Animal *a;
    Dog d;
    a = &d;
    a->sound();
    return 0;
}