//procedural or functional programming
//OOPS or Object oriented Programming(OPPS means life)

#include <iostream>
using namespace std;

class Students{
    //attributes means name = "tirth"
    //methods or functions isSleep 
    public:
     string name;
     int age;

    Students(string name, int age){
        this->name=name,
        this->age=age,
        cout << "hello" << endl;
    }

    private:
    void sleep(){
        cout << this->name <<" Sleep" << endl;
    }

    public:
    void sleepCallPrivate(){
        sleep();
    }

    ~Students(){
        cout << "calling dtor" << endl;
    }
};

// student1 = {
//     "name":"tirth",
//     "age":21
//     isStudy():{

//     }
// }

// student2

// int add(int a, int b){
//     return a+b;
// }
int main(){
    Students s1("tirth", 21);
    s1.sleepCallPrivate();
    return 0;
}