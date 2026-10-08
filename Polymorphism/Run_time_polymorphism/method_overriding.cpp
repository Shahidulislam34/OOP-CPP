#include<bits/stdc++.h>
using namespace std;

class Payment{
public:
    virtual void executePayment() {
        cout << "Payment Successful" << endl;
    }
    Payment(){
        cout << "Payment Constructor" << endl;
    }
};
class Electricity : public Payment{
public:
    string name,accNum,dueDate = "05.04.26", month;
    Electricity():Payment() {
        cout << "Electricity Constructor" << endl;
    }
    void Verdict() {
        cout << "Payment Successful" << endl;
    }
    void sendSMS() {
        cout << "Send a SMS to the User" << endl;
    }
};
class PalliBidyut:public Electricity{
private:
    int BillAmount(string accNum, string month) {
        //have to write a method that give the bill amount
        //suppose bill amount = 340tk;
        return 340;
    }
    bool validateUser(string accNum) {
        //have to write a method that check the user is valid or not
        //if valid return true else return false. Suppose true
        return true;
    }
public:
    PalliBidyut():Electricity() {
        cout << "PalliBidyut Constructor" << endl;
        cout << "Fill up the form:" << endl;
        cout << "User Name:"; cin >> name;
        cout << "Account Number:"; cin >> accNum;
        cout << "Select Month:"; cin >> month;
    }
    void executePayment () override {
        if (validateUser(accNum) == false) {
            cout << "Invalid Account,Try again" << endl;
            return;
        }
        int bill = BillAmount(accNum, month);
        //apply payment method
        cout << "Payment for PalliBidyut successful" << endl;
    }
};
int main() {
    Payment* pay = new PalliBidyut();
    pay->executePayment();//run executePayment in PalliBidyut class

    return 0;
}
