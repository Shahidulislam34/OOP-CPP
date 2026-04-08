#include<bits/stdc++.h>
using namespace std;

class Passward{
private:
    string pass, gmail;
    bool verification(string old) {
        if (this->pass == old) return true;
        else return false;
    }
public:
    string name;
    Passward() {
        cout << "Set your name:"; cin >> name;
        cout << "Set your gmail:"; cin >> gmail;
        cout << "Set a passward:"; cin >> pass;
    }
    void changePass() {
        cout << "Give Old Pass:";
        string old; cin >> old;
        cout << "Give New Pass:";
        string np; cin >> np;
        if (verification(old) == true) {//encapsulation check verification such that authentic user can change the passward.
            this->pass = np;
            cout << "Passward Successfully Changed" << endl;
        }
        else {
            cout << "Wrong Old Pass!! Please Try Again." << endl;
        }
    }
    string getPass(){return pass;}
};

int32_t main() {
    Passward* user1 = new Passward();
    user1->changePass();

    cout << "New Passward:" <<  user1->getPass() << endl;

    return 0;
}