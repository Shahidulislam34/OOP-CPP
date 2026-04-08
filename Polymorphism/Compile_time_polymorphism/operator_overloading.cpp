#include<bits/stdc++.h>
using namespace std;

class Employee{
public:
    int sal, bonus;
    //constructor
    Employee(int sal, int bonus) {
        this->sal = sal;
        this->bonus = bonus;
    }
    //operator overloading
    Employee operator + (Employee e2) {
        Employee tmp(0, 0);
        tmp.sal = this->sal + e2.sal;
        tmp.bonus = this->bonus + e2.bonus;
        return tmp;
    }
    Employee operator + (int sal) {
        this->sal += sal;
        return *this;
    }
};

int32_t main() {
    Employee e1(40000, 10000);
    Employee e2(50000, 15000);

    // Employee total;//when we create constructor then while creating object we must call constructor.
    // total = e1 + e2;

    Employee total = e1 + e2;//when we copy then don't need to call constructor. Compiler automatically call copy constructor
    cout << total.sal << endl;
    cout << total.bonus << endl;

    e1 = e1 + 10000;
    cout << e1.sal << endl;

    return 0;
}