#include<bits/stdc++.h>
using namespace std;

class Game{
    private:
    int score;
    int level;
    string name;

public:
    Game() {
        score = 0;
        level = 1;
    }
    Game(string nname) {
        score = 0;
        level = 1;
        name = nname;
    }
    void setName(string nname) {name = nname;}
    string getName() {return name;}
    int getScore() {return score;}
    int getLevel() {return level;}
};

int32_t main() {
    Game* player1 = new Game();
    //use '->' instead of '.'. When object is a pointer
    player1->setName("Shourov");
    cout << player1->getName() << endl;
    cout << player1->getScore() << endl;
    cout << player1->getLevel() << endl;

    Game* player2 = new Game("Shahadat");
    cout << player2->getName() << endl;
    cout << player2->getScore() << endl;
    cout << player2->getLevel() << endl;
}