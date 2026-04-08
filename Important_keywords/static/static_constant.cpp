#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    //The value static const variable is not change in whole time of program
    //for constant, inline static and static both works as same.
    //we must have to initialize at both case into declaration time
    //Overall properties(modes/memory allocation) of static is same for static constant,but only difference is,it is not changeable.
    inline static const int roll = 12323;
    void increment() {
        // ++roll;//
    }
};

int main() {
    cout << Student::roll << endl;

    return 0;
}