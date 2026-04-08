#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
    string name;
    int *id;

    public:
    //constructor
    Student() {
        name = "shourov";
        id = new int[100];
    }

    //User defined destructor
    ~Student() {
        delete[] id;//remove heap memory
    }
};

int32_t main() {
    Student* s1 = new Student();
    s1->~Student();
    //delete s1; we can use it because s1 is a pointer or created using "new".
    //If we don't call,when program ends the written destructor is not called automatically because object is created nusing "new".
}