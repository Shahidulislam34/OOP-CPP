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
//private of parent is not access from child
//Protected and public both of parent class are private for child class
class Book : private Student{
    string bookName;
public:
    Book(string bookName, int phone, string fatName, string stuName)
        : bookName(bookName), Student(phone, fatName, stuName) {
        cout << "Book class constructor" << endl;
    }

    string getBookName() {return bookName;}
    // int getPhone() {return phone;} //Private elements of parent class is not access from child class
    string getFatName() {return fatName;}//fatName is private in child class
    string getStuName() {return stuName;}//stuName is private in child class
};

//Public and protected members of Student class is not access from Chapter class.
//Because public and protected of Student class is private for Book class
class Chapter : public Book {
    int no;//by default private
public:
    Chapter(int no, string bookName, int phone, string fatName, string stuName)
         : no(no), Book(bookName, phone, fatName, stuName) {
        cout << "Chapter Class Constructor" << endl;
    }
    int getNo() {return no;}
    // string getFatName() {return fatName;}//is not access
    // string getStuName() {return stuName;}//is not access
};

int32_t main() {
    Chapter pro(3, "Operating System", 234234324, "Tarazul", "Shahidul");
    cout << pro.getNo() << endl;

    //public method of Book is public for Chapter
    cout << pro.getFatName() << endl;
    cout << pro.getStuName() << endl;
    return 0;
}