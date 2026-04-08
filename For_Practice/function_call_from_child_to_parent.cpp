#include<bits/stdc++.h>
using namespace std;

class Table{
public:
    int len, wid;
    Table(int len, int wid) {
        cout << "Table Class Constructor Call" << endl;
        this->len = len;
        this->wid = wid;
    }
    void getLen() {
        cout << "Length of Table: " << this->len << endl;
    }
    void getWid() {
        cout << "Width of Table: " << this->wid << endl;
    }
};

class Chair{
public:
    int len, wid;
    Chair(int len, int wid) {
        cout << "Chair Class Constructor Call" << endl;
        this->len = len;
        this->wid = wid;
    }
    void getLen() {
        cout << "Length of Chair: " << this->len << endl;
    }
    void getWid() {
        cout << "Width of Chair: " << this->wid << endl;
    }
};

class Room : public Chair, public Table{
public:
    int area;
    Room(int area, int len1, int wid1, int len2, int wid2) : Table(len1, wid1), Chair(len2, wid2) {
        this->area = area;
    }
    void getArea() {
        cout << "Area: " << this->area << endl;
        Table::getLen();
        Chair::getWid();
        cout << "Length of Table: " << Table::len << endl;
        cout << "Length of Chair: " << Chair::len << endl;
    }
};

int32_t main() {
    Room *r1 = new Room(10, 20, 30, 40, 50);
    r1->getArea();

    return 0;
}