#include<bits/stdc++.h>
using namespace std;

class A{
public:
    void print() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A{//solve diamond problem
public:
    void show() {
        cout << "Class B" << endl;
    }
};

class C : virtual public A{//solve diamond problem
public:
    void show() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C{
    
};

int main() {
    D* obj = new D();
    obj->print();//diamond problem
    obj->B::show();//use scope resolution operator to solve ambiguity of multiple inheritance

    return 0;
}