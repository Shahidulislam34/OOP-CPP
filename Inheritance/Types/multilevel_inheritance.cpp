#include<bits/stdc++.h>
using namespace std;

class BasicPhone{
public:
    void makeCall() {
        cout << "Make Call" << endl;
    }
    void sendSMS() {
        cout << "Send SMS" << endl;
    }
};

class FeaturePhone : public BasicPhone{
public:
    void blutoothConnection() {
        cout << "Boutooth Connection" << endl;
    }
    void videoPlayer() {
        cout << "Video Player" << endl;
    }
};

class SmartPhone : public FeaturePhone{
public:
    void highSpeedInternet() {
        cout << "High Speed Internet" << endl;
    }
    void supportGPS() {
        cout << "Support GPS" << endl;
    }
};
int main() {
    SmartPhone* p1 = new SmartPhone();
    p1->makeCall();
    p1->sendSMS();
    p1->blutoothConnection();
    p1->videoPlayer();
    p1->highSpeedInternet();
    p1->supportGPS();

    return 0;
}