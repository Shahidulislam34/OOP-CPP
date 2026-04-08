#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    int phone;
protected:
    string fatName;
public:
    string stuName;
    Student(int phone, string fatName, string stuName) : phone(phone),fatName(fatName),stuName(stuName){
        cout << "Student Class constructor" << endl;
    }
};
//Protected and public both of parent class are protected for child class
class Book : protected Student{
    string bookName;
public:
    Book(string bookName, int phone, string fatName, string stuName) :
    bookName(bookName), Student(phone, fatName, stuName) {
        cout << "Book class constructor" << endl;
    }
    string getBookName() {return bookName;}
    // int getPhone() {return phone;} //Private elements of parent class is not access from child class
    string getFatName() {return fatName;}//fatName is protected in child class
    string getStuName() {return stuName;}//stuName is protected in child class
};

int32_t main() {
    Book os("Operating System", 1796836659, "Tarazul", "Shourov");
    cout << os.getBookName() << endl;
    // cout << os.getPhone() << endl;
    cout << os.getFatName() << endl;
    cout << os.getStuName() << endl;
    // cout << os.fatName << endl;//fatName is protected in child class
    // cout << os.stuName << endl;//fatName is protected in child class

    cout << os.getFatName() << endl;
    cout << os.getStuName() << endl;

    return 0;
}