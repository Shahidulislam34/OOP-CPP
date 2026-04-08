#include<bits/stdc++.h>
using namespace std;

class Man{
protected:
    string name;
    Man(string name) {//constructor is in protected mode.
        this->name = name;
    }
};
class Student : public Man{
private:
    string uniName;
public:
    Student(string name, string uniName): uniName(uniName),Man(name) {
        cout << "Student class" << endl;
    }
    void show() {
        cout << this->name << endl;//name is protected in Student class
        cout << this->uniName << endl;
    }
};

int main() {
    Student* s1 = new Student("Shourov","MBSTU");
    // cout << s1->name << endl;//protected member only accessible from child class
    s1->show();

    return 0;
}