#include<bits/stdc++.h>
using namespace std;

class Game{
private:
    int score;
    int level;

public:
    //Default constructor: contains no arguments
    Game() {
        //In initially all player have score = 0 & level = 1.
        score = 0;
        level = 1;
    }

    //parameterized constructor:contains arguments
    Game(int nscore, int nlevel) {
        score = nscore;
        level = nlevel;
    }

    //copy constructor: copy an existing object into a new one
    Game(const Game &oldPlayer){
        score = oldPlayer.score;
        // level = oldPlayer.level;
    }
    int getScore() {return score;}
    int getLevel() {return level;}
};

int32_t main() {
    Game player1;//called automatically
    cout << "Initial Score:" << player1.getScore() << endl;
    cout << "Initial Level:" << player1.getLevel() << endl;

    Game player2(20, 10);
    cout << "Score:" << player2.getScore() << endl;
    cout << "Level:" << player2.getLevel() << endl;

    Game player3 = player2;//sendind player2
    cout << "Score:" << player3.getScore() << endl;
    cout << "Level:" << player3.getLevel() << endl;//by default zero
    return 0;
}