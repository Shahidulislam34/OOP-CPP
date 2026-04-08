#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    int phone = 5;
protected:
    string fatName;
public:
    string stuName;
    Student(int phone, string fatName, string stuName) : phone(phone),fatName(fatName),stuName(stuName){
        cout << "Student Class constructor" << endl;
    }
};

class Book : public Student{
    string bookName;
public:
    Book(string bookName, int phone, string fatName, string stuName) :
    bookName(bookName), Student(phone, fatName, stuName) {
        cout << "Book class constructor" << endl;
    }
    string getBookName() {return bookName;}
    // int getPhone() {return phone;} //Private elements of parent class is not access from child class
    string getFatName() {return fatName;}
    string getStuName() {return stuName;}
};

int32_t main() {
    Book os("Operating System", 1796836659, "Tarazul", "Shourov");
    cout << os.getBookName() << endl;
    // cout << os.getPhone() << endl;
    cout << os.getFatName() << endl;
    cout << os.getStuName() << endl;

    return 0;
}