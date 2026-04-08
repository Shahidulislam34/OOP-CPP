#include<bits/stdc++.h>
using namespace std;

class Students{
private:
    string mob;
protected:
    string fatName;
public:
    string stuName;
    Students(string stuName,string fatName, string mob);
    ~Students();
    void setStuName(string stuName);

    string getStuName();
    string getFatName();
    string getMob();
};

//works similar like writing inside
Students::Students(string stuName,string fatName, string mob){
    this->stuName = stuName;
    this->fatName = fatName;
    this->mob = mob;
}
Students::~Students() {}
void Students::setStuName(string stuName) {
    this->stuName = stuName;
}
string Students::getStuName() {
    return stuName;
}
string Students::getFatName() {
    return fatName;
}
string Students::getMob() {
    return mob;
}

int main() {
    Students* s1 = new Students("shourov", "Tarazul", "01796836659");//dynamic instantiation
    s1->setStuName("Shahidul");
    cout << s1->getStuName() << endl;
    cout << s1->getFatName() << endl;
    cout << s1->getMob() << endl;

    return 0;
}