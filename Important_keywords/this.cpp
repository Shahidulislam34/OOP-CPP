#include<bits/stdc++.h>
using namespace std;

class Student{
public: 
    string uniName;
    string deptName;
    int year;

    Student() {
        uniName = "MBSTU";
        deptName = "ICT";
        year = 4;
    }
    void execute() {
        cout << this->uniName << endl;
        cout << this->deptName << endl;
        cout << (*this).year << endl;//this-> = (*this).

        delete this;//self deletion: entire block of object is freed
    }
    Student& objectChaining() {
        cout << this->uniName << endl;
        cout << this->deptName << endl;
        cout << this->year << endl;

        return (*this);
    }
    void printAddress() {
        cout << "Address of the object: " << this << endl;
    }
};

int32_t main() {
    Student *s1 = new Student();
    Student s2 = s1->objectChaining();//copy only the block(properties) of object

    s1->printAddress();
    s2.printAddress();

    Student s3 = s2;//copy object 
    s3.printAddress();

    s1->execute();
}