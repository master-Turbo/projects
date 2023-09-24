#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

struct player
{
    string name;
    int life;
    int armor;
    int damage;
};

void game_matrix()
{

}

int main()
{
    player new_player;
    cout << "-------------------" << endl;
    cout << "|PLAYER vs ENEMIES|" << endl;
    cout << "-------------------" << endl << endl;

    cout << "character `s name" << endl;
    cin >> new_player.name;
    cout << "the standard of life of the character" << endl;
    cin >> new_player.life;
    cout << "the level of armor of the character" << endl;
    cin >> new_player.armor;
    cout << "the strength of the damage applied by the character" << endl;
    cin >> new_player.damage;







    return 0;
}