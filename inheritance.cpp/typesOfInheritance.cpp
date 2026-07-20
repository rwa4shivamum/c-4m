#include <iostream>
using namespace std;

/*types of inheritance
1.single level inheritance
Main class: Vehicle
Sub Class: Car

2.multiple inheritance
Main class: father and mother
subclass: child

3.multilevel inheritance
grand parent
  |
  |
  |
parent
  |
  |
  |
child
 
#4.hierarchical inheritance
# #one parent -> multiple children 

#5.hybrid inheritance
#mixture of all types of inheritance
*/

class Father
{
protected:
    string fatherName;
    int fatherAge;

public:
    Father(string fatherName, int fatherAge)
    {
        this->fatherName = fatherName;
        this->fatherAge = fatherAge;
    }

    void isEarning()
    {
        cout << "Father is Earning" << this->fatherName << endl;
    }
};

class Mother
{
protected:
    string motherName;
    int motherAge;

public:
    Mother(string motherName, int motherAge)
    {
        this->motherName = motherName;
        this->motherAge = motherAge;
    }
    void houseWife()
    {
        cout << "mother is homeMaker" << this->motherName << endl;
    }
};

class Child : public Father , public Mother
{
private:
    string name;
    int age;

public:
    Child(string fatherName, int fatherAge, string motherName, int motherAge, string name, int age) : Father(fatherName, fatherAge), Mother(motherName, motherAge)
    {
        this->name = name;
        this->age = age;
    }

    void isStudying()
    {
        cout << "child is studying" << this->name << endl;
    }
};

int main()
{
    Child c1("mohan", 43, "maithili", 40, "mohanlal", 19);
    c1.isEarning();
    c1.isStudying();
    c1.houseWife();
    return 0;
}