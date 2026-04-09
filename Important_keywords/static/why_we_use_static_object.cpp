#include<bits/stdc++.h>
using namespace std;

class ATMBooth{
private:
    string acc;
    int tk;
public:
    bool authentication(string acc, int tk) {
        //check the account number is valid or not
        cout << "Authentication Successful" << endl;
        return true;
    }
    void reduceBal(string acc, int tk) {
        //reduce balance from database
        cout << "Balance Reduce Successful" << endl;
    }
    void balWithdraw(string acc, int tk) {
        if (authentication(acc, tk)) {
            reduceBal(acc, tk);
            cout << "Balance Withdraw Successful" << endl;
        }
        else {
            cout << "Error Occured,Please Try Again1!" << endl;
        }
    }
};

int main() {
    static ATMBooth* user = new ATMBooth();
    static ATMBooth* user2 = new ATMBooth();

    //why we use static object: 
    //We use static object such that we don't need to recreate object for similar work
    //we can use same task of different user using an static object by passing different value of different users.
    user->balWithdraw("21314234", 2000);//call for first user
    user->balWithdraw("01213214", 1000);//call for second user

    return 0;
}