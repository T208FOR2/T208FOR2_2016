#include <iostream>
#include "Player.h"

using namespace std;

class Player
{
public:
    Player();

    void playGame(int goals_scored);

    friend bool operator>(const Player &lhs, const Player &rhs);
    friend istream& operator>>(istream &in, Player &p);
    friend ostream& operator<<(ostream &out, const Player &p);
private:
    string name;
    int games;
    int goals;
};

int main()
{
    Player p1,p2;

    cin >> p1 >> p2;

    if (p1 > p2)
    {
        cout << "Best player: " << p1 << endl;
    }
    else
    {
        cout << "Best player: " << p2 << endl;
    }

    p1.playGame(3);
    p2.playGame(0);

    if (p1 > p2)
    {
        cout << "Best player: " << p1 << endl;
    }
    else
    {
        cout << "Best player: " << p2 << endl;
    }
    return 0;
}


Player::Player()
{
    name = "";
    games = 0;
    goals = 0;
}

istream& operator>>(istream &in, Player &p)
{
    in >> p.name >> p.games >> p.goals;
    return in;
}

bool operator>(const Player &lhs, const Player &rhs)
{
    if(lhs.games == 0)
    {
        return false;
    }
    else if(rhs.games == 0)
    {
        return true;
    }
    double lhsavg = static_cast<double>(lhs.goals) / lhs.games;
    double rhsavg = static_cast<double>(rhs.goals) / rhs.games;
    return lhsavg > rhsavg;
}

ostream& operator<<(ostream &out, const Player &p)
{
    out << p.name << " " << p.games << " " << p.goals << endl;
    return out;
}

void Player::playGame(int goals_scored)
{
    games++;
    goals += goals_scored;
}
