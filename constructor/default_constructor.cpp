#include<bits/stdc++.h>
using namespace std;

class Game{
    public:
    int score;
    int level;
    int no = 5;
    string name;
    float rating;
    bool active;

    public:
    //Default constructor
    Game() {
        //In initially all player have score = 0 & level = 1.
        score = 0;
        level = 1;
        //another all type variables by default contains garbage value
    }
    int getScore() {return score;}
    int getLevel() {return level;}
    string getName() {return name;}
    int getNo() {return no;}
    float getRating() {return rating;}
    bool getActive() {return active;}
};

int32_t main() {
    //properties contains garbage value by default
    Game player1;//called automatically
    cout << "Name:" << player1.getName() << endl;
    cout << "Initial Score:" << player1.getScore() << endl;
    cout << "Initial Level:" << player1.getLevel() << endl;
    cout << "No. of batting serial:" << player1.getNo() << endl;
    cout << "Rating:" << player1.getRating() << endl;
    cout << "Active:" << player1.getActive() << endl;

    Game player2;
    cout << "No. of batting serial:" << player2.getNo() << endl; 
    player2.no = 10;
    cout << "No. of batting serial:" << player2.getNo() << endl;

    Game player3;
    cout << "No. of batting serial:" << player3.getNo() << endl;
    return 0;
}