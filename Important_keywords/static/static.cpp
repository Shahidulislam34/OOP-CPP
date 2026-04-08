#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;//non-static.different for different object
    static int numOfObj;//It is common for all object. It is declared one times.
    Student(string name) {
        this->name = name;//Because this variable is created for a specific object
    }
    void countObj() {
        ++numOfObj;//cann't use "this". Because this variable is not created for a specific object.
        cout << "Number of object: " << numOfObj << endl;
    }
    static void common(int a, int b) {
        cout << "Extra calculation for any object:" << a + b << endl;
        //cann't use "this". Because this function is not indicate to a specific object.
    }
};
int Student :: numOfObj = 0;//If we declare in a class. Then Must be initialize in a global scope like outside the class and any function 

int32_t main() {
    Student* s1 = new Student("Shourov");
    s1->countObj();
    cout << "number of object: " << Student :: numOfObj << endl;
    Student :: common(2, 3);//call static method
}