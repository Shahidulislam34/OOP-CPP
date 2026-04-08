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
        delete[] id;//free heap memory of id
        //delete this: entire block of object is freed
    }
};

int32_t main() {
    Student s1;
    s1.~Student();//here we can not use "delete" because s1 is not a pointer
    //If we don't call,when program ends the written destructor is called automatically when we careate object without using "new" keyword.
}