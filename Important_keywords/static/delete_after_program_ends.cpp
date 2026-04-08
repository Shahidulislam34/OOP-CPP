#include<bits/stdc++.h>
using namespace std;

class Vehicle{
public:
    Vehicle() {
        cout << "Constructor" << endl;
    }
    ~Vehicle() {
        cout << "Delete Object" << endl;
    }
};

int main() {
    if (true) {
        static Vehicle car;//automatically, destructor is called after ends the program for static.
    }
    if (true) {
        Vehicle car2;//destructor called before static 
    }
    if (true) {
        static Vehicle car3;
    }
    Vehicle car4;
    car4.~Vehicle();
    // car3.~Vehicle();//we cann't delete static object manually. Because It deletes automatically after programs ends when object is created into stack memory

    Vehicle* car5 = new Vehicle();
    delete car5;

    cout << "Program Ends" << endl;
    return 0;
}