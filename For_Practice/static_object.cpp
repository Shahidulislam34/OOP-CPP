#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    void show() {
        cout << "Student Class" << endl;
    }
};

class Teacher{
public:
    void show() {
        cout << "Teacher Class" << endl;
        s1->show();
    }
};

int main() {
    static Student* s1 = new Student();
    Teacher* t1 = new Teacher();
    t1->show();
}