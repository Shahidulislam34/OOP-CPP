#include<bits/stdc++.h>
using namespace std;

class Payment{
public:
    int a = 0;//can contain normal variable
    void print() {
        cout << "Payment" << endl;//can contain concrete function(Normal function)
    }
    virtual void payProcess() = 0;//Pure virtual function: only contain function definition
    Payment(){}//can contain constructor
    ~Payment(){}//con contain destructor
};
class Bkash : public Payment{
public:
    int camo = 1000;
public:
    Bkash() : Payment() {}
    void payProcess() override {
        cout << "Using Bkash:" << endl;
        int acc;
        cout << "Give Account Number:";cin >> acc;
        cout << "OTP Verification" << endl;
        int amo;
        cout << "Give Amount:"; cin >> amo;
        if (amo > camo) {
            cout << "Your Account Balance is Lower!! Try again!!" << endl;
            return;
        }
        else {
            camo -= amo;
            cout << "Payment Successful" << endl;
        }
    }
};

class CreditCard : public Payment{
int camo = 5000;
public:
    CreditCard() : Payment() {}
    void payProcess() override {
        cout << "Using Credit Card:" << endl;
        int amo = 800;//a method that get from card. Assume amo = 800
        if (amo > camo) {
            cout << "Your Account Balance is Lower!! Try again!!" << endl;
            return;
        }
        else {
            camo -= amo;
            cout << "Payment Successful" << endl;
        }
    }
};

int main() {
    Payment* user;//We can't create object but crate pointer that can contain other class object.
    user = new Bkash();
    user->payProcess();

    user = new CreditCard();
    user->payProcess();

    return 0;
}