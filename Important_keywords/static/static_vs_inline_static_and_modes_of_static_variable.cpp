#include<bits/stdc++.h>
using namespace std;

class Student{
    //modes of static variable:
    //static variable also follows the general rules of private,protected,public modes.
    //public static variable is accessible from any class or function in whole program. It is not necessay to be inherited.
    //private static is accessible only from the declared class
    //protected static variable is accessible from the declared class and derived class
private:
    inline static string mob = "01796836659";
    //static vs inline static:
    //If we want to initialize the static variable in the class. 
    //we have to use "inline static".
    //if we use "inline static", we must have to initialize the variable at declaration time into class.
    //then we don't need to initialize into global scope.
    //Although We initialize into the class, But memory is allocated at runtime for both static and inline static variable.
protected:
    static string roll;
public:
    static string sName;

    void show(){
        cout << "Student" << endl;
    }
};

class GoodStudent : public Student{
public:
    void show() {
        cout << "Good Student" << endl;
        cout << Student::roll << endl;//roll is protected here. It follows the general rules.
    }
};

class Teacher{
public:
    string tName;
    void show() {
        cout << "Teacher" << endl;
        cout << Student::sName << endl;//we can access static variable of a class from another class
    }
};

//static vs inline static:
//We can't initialize the "inline static" variable into global scope
//static variable for all modes is must be initialize in the global scope(outside class or function);
//static variable is created into the data segment of memory
string Student::sName = "Shourov";//static variable initialization
string Student::roll = "IT21024";
// string Student::mob = "01796836659";

int main() {
    Teacher* t1 = new Teacher();
    t1->show();
    cout << Student::sName << endl;
    // cout << Student::roll << endl;
    // cout << Student::mob << endl;

    return 0;
}