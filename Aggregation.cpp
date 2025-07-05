#include<iostream>
#include<vector>
using namespace std;

class Player{
    public:
    string name;

    Player(string n) : name(n) {
        cout << "A player named "<<name<<" was created."<<endl;
    }
    void show() const{
        cout << "Player Name : "<<name<<endl;
    }
};

class Team{
public:
vector<Player*> players; // Aggregation : Team holds pointer to players
void addPlayer(Player* p)
{
    players.push_back(p);
}

void showTeam() const{
    cout << "\nTeam Members : \n";
    for(const auto& player: players)
    {
        player->show();
    }
}
};

int main()
{
    // Create new players dynamically
    Player* p1 = new Player("Virat Kohli");
    Player* p2 = new Player("MS Dhoni");
    Player* p3 = new Player("Rohit Sharma");

    // Create a team
    Team India;

    // Add players to the team (aggregation)
    India.addPlayer(p1);
    India.addPlayer(p2);
    India.addPlayer(p3);

    // Show Team members
    India.showTeam();

    // Players still exist even without the team(aggregation)
    cout << "Accessing a player Individually :\n";
    p1->show();

    // Cleanup has to be manual since we used new 
    delete p1;
    delete p2;
    delete p3;
    return 0;
}
