#include<bits/stdc++.h>
using namespace std;


class Phone{
public:
    string name;
    string model;
    int price;
    
};

int32_t main() {
    Phone nokia20;
    nokia20.name = "nokia20";
    nokia20.model = "ab1020";
    nokia20.price = 20000;

    cout << nokia20.name << endl;
    cout << nokia20.model << endl;
    cout << nokia20.price << endl;

    Phone nokia40;
    nokia40.name = "nokia40";
    nokia40.model = "ab2020";
    nokia40.price = 30000;

    cout << nokia40.name << endl;
    cout << nokia40.model << endl;
    cout << nokia40.price << endl;

    return 0;
}