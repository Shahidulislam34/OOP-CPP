#include<bits/stdc++.h>
using namespace std;

class Payment{
public:
    virtual void MakePayment(){

    }
    void ExecutePayment(Payment *pay) {
        pay->MakePayment();
    }
};
class BidyutBill:public Payment{
public:
    void MakePayment() override{
        cout << "Bidyut Bill" << endl;
    }
};
class WaterBill:public Payment{
public:
    void MakePayment() override{
        cout << "Water Bill" << endl;
    }
};
class GasBill:public Payment{
    void MakePayment() override{
        cout << "Gas Bill" << endl;
    }
};
class InternetBill: public Payment{
    void MakePayment() override{
        cout << "Internet Bill" << endl;
    }
};

int main() {
    Payment *payment = new Payment();
    payment->ExecutePayment(new BidyutBill());
    payment->ExecutePayment(new WaterBill());
    payment->ExecutePayment(new GasBill());
    payment->ExecutePayment(new InternetBill());
}
