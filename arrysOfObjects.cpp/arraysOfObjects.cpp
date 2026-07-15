#include <iostream>
using namespace std;

class Students{
    private:
    string name;
    int age;

    public:
    void student (string name, int age){
        this->name = name;
        this->age = age;
    }

    void display(){
        cout << this->name << " age " << this->age << endl;
    }
};


int main(){

    // int arr[3] = {1,2,4};
    // for(int i=0; i<3; i++){
    //     cout << arr[i] << endl;
    // }
    // Students s1("shivam", 22);
    // s1.display();

    Students s[3];
    s[1].student("shivam", 23);
    s[2].student("rahul", 22);
    s[3].student("ronak", 21);

    for(int i=0; i<=3; i++){
        s[i].display();
    }

    return 0;
}