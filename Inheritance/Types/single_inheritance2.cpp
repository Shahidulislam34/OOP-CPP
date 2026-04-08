#include<bits/stdc++.h>
using namespace std;

class Vehicle{
private:
    string brand;
public:
    int price;
};

class Car : public Vehicle{
private:
    int doors;
public:
    Car(int doors) : doors(doors) {
        //smart constructor call
    }
    //or
    // Car(int doors){
    //     this->doors = doors;
    //     //poor call
    // }
    int getDoors() {return doors;}
};

int32_t main() {
    Car c1(4);
    cout << "Number of doors: " << c1.getDoors() << endl;

    return 0;
}