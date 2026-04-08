#include<bits/stdc++.h>
using namespace std;

class Vehicle{
private:
    int serialNo;
protected:
    int speed;
public:
    string brand;
    Vehicle(string brand, int speed, int serialNo): brand(brand),speed(speed), serialNo(serialNo){
        //empty
    }
    int getSerialNo() {return serialNo;}//Only accessible from this class and not accessible from derived class
};
class Car: public Vehicle{
    int cntDoor;
public:
    Car(string brand, int speed, int serialNo, int cntDoor) : 
    Vehicle(brand, speed, serialNo), cntDoor(cntDoor) {
        //empty
    }
    int getCntDoor() {return cntDoor;}
    string getBrand() {return brand;}//accessible because brand is in public section of parent class
    int getSpeed() {return speed;}//accessible because speed is in protected section of parent class
    //int getSerialNo() {return serialNo;} //not accesible because it is in private section of parent class
};

int32_t main() {
    Car c1("Toyota", 1500, 214234, 4);
    cout << "Brand: " << c1.getBrand() << endl;
    cout << "Speed: " << c1.getSpeed() << endl;
    cout << "Serial Number: " << c1.getSerialNo() << endl;
    cout << "Number of Doors: " << c1.getCntDoor() << endl;

    return 0;
}