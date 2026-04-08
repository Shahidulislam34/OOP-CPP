#include<bits/stdc++.h>
using namespace std;

class PayBill{
public:
   void payment() {//don't contain virtual keyword for hiding the payment method in BidyutBill class
        cout << "Pay Bill" << endl;
    }
};
class BidyutBill : public PayBill{
private:
    void payment() {
        cout << "Bidyut Bill" << endl;
    }
};

int main() {
    PayBill* user = new BidyutBill();
    user->payment();//print:Pay Bill

    return 0;
}