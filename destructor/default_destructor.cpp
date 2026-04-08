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

    //default or empty destructor
    ~Student() {
        //don't delete the heap memory those are create using new keyword like id.
    }
};

int32_t main() {
    Student s1;

    //when program ends the default destructor is called automatically.Remove only stack memory
}