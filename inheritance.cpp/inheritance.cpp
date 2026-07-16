// public, private, protected
#include <iostream>
using namespace std;

class Vehicle
{
    protected:
    string name;
    string model;
    int noOftyres;

    public:
    Vehicle(string name, string model, int noOftyres){
        this->name=name;
        this->model=model;
        this->noOftyres = noOftyres;
    }

    public:
    void startEngine(){
        cout << "Engine is Starting" << this->name << " " << this->model << endl;
    }

    void stopEngine(){
        cout << "Engine is Stopping" << this->name << " " << this->model << endl;
    }

    ~Vehicle(){
        cout << "Vechicle Class got deleted" << endl;
    }
};

class Car: public Vehicle{
    public:
    int noOfDoors;
    string transmissionType;

    Car(string name, string model, int noOftyres, int noOfDoors, string transmissionType):Vehicle(name,model,noOftyres){
        this->noOfDoors = noOfDoors;
        this->transmissionType = transmissionType;
    }

    void startAc(){
        cout << "Ac sarted " << name << endl;
    }

    ~Car(){
        cout << "I am inside the Car" << endl;
    }
};
int main(){
    Car A("Maruti 800", "LXI", 4, 4, "manual");
    A.startEngine();
    A.stopEngine();
    A.startAc();
    return 0;
}  