#include<bits/stdc++.h>
using namespace std;

class Payment{
public:
    void exePay(string user) {
        cout << "Payment successful for user :" << user << endl;
    }
    void exePay(string user, int phone) {
        cout << "Payment successfull for user: " << user << " from :" << phone << endl;
    }
};

class BidyutBill : public Payment{
public:
    using Payment::exePay;//use to overload from child class
    void exePay(int phone) {
        cout << "Child class:" << endl;
        cout << "Payment successful from: " << phone << endl;
    }
    // int exePay(int phone) {
    //     cout << "Payment successful from: " << phone << endl;
    // }

    void exePay(int phone, string user) {
        cout << "Child class:" << endl;
        cout << "Payment successfull for user: " << user << " from :" << phone << endl;
    }
};

int32_t main() {
    BidyutBill* user1 = new BidyutBill();
    user1->exePay("Shourov");
    user1->exePay(172343, "Shahadat");//If we start from 0, compiler consider it as octal number and print error. so we have to start without 0.

    return 0;
}
