#include<bits/stdc++.h>
using namespace std;

class Game{
private:
    string name;
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

    Game(string nname, int nscore) {
        name = nname;
        score = nscore;
    }
    string getName() {return name;}
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
    cout << "Level:" << player3.getLevel() << endl;//by default choose random value
    
    Game player4("Shourov", 50);//constructor calling depends on data type of arguments
    cout << "Name:" << player4.getName() << endl;
    cout << "Score:" << player3.getScore() << endl;
    cout << "Level:" << player3.getLevel() << endl;//by default choose random value
    
    return 0;
}