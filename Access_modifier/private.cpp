#include<bits/stdc++.h>
using namespace std;

class Phone{
    //automatically set as private
private:
    string imei;
    string macAddress;
public:
    string name;
    string model;
    int price;
    void setImei(string nimei) {
        imei = nimei;
    }
    void setMacAddress(string nmacAddress) {
        macAddress = nmacAddress;
    }
    string getImei() {
        return imei;
    }
    string getMacAddress() {
        return macAddress;
    }
};

int32_t main() {
    Phone nokia20;
    //public elements can be accessible from any location
    nokia20.name = "nokia20";
    nokia20.model = "ab1020";
    nokia20.price = 20000;

    cout << nokia20.name << endl;
    cout << nokia20.model << endl;
    cout << nokia20.price << endl;

    Phone nokia40;
    nokia40.name = "nokia40";
    nokia40.model = "ab2020";
    nokia40.price = 30000;

    cout << nokia40.name << endl;
    cout << nokia40.model << endl;
    cout << nokia40.price << endl;

    //Private elements Cann't access from outside the class.We have to use set and get method to access those private elements
    //nokia20.imei = "ASDKFJFJ";
    //nokia20.macAddress = "SDFJK2343409";

    nokia20.setImei("SDKFDSJF");
    nokia20.setMacAddress("SDFKSJF23434");

    cout << nokia20.getImei() << endl;
    cout << nokia20.getMacAddress() << endl;

    return 0;
}