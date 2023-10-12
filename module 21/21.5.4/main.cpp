#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct player
{
    string name;
    int player_id;
    int life;
    int armor;
    int damage;
};

struct game_matrix
{
    vector <vector<char>> game_matrix;
    vector <char> tmp;
};

void player_constructor(player& new_player)
{
    cout << "character `s name" << endl;
    cin >> new_player.name;
    cout << "the standard of life of the character" << endl;
    cin >> new_player.life;
    cout << "the level of armor of the character" << endl;
    cin >> new_player.armor;
    cout << "the strength of the damage applied by the character" << endl;
    cin >> new_player.damage;
}

void create_enemy(player& new_player, string name, int player_id)
{
    new_player.name = name;
    new_player.player_id = player_id;
    new_player.life = rand() % 100 + 50;
    new_player.armor = rand() % 50;
    new_player.damage = rand() % 15 + 15;
}

void main_cycle()
{
    
    
}

void create_vector(vector<double>& temp, vector<vector<double>>& matrix, int rows, int cols)
{
    cout << "записываем данные в двумерный вектор" << endl;
    double tmp;
    for (int i = 0; i < 10; ++i)//создать и заполнить двумерный вектор
    {
        for (int j = 0; j < 10; ++j) 
        {
            cout << "записываем элемент строки" << endl;
            cin >> tmp;
            temp.push_back(tmp);
        }
        cout << "записываем готовую строку" << endl;
        matrix.push_back(temp);
    }
}

int main()
{
    cout << "-------------------" << endl;
    cout << "|PLAYER vs ENEMIES|" << endl;
    cout << "-------------------" << endl << endl;

    cout << "1 > NEW GAME"<< endl;
    cout << "2 > LOAD GAME" << endl;

    int init = 0;
    cin >> init;
    if (init > 0 && init <= 3)
    {
        if(init == 1)
        {
            for (int i = 1; i <= 5; i++)//5 enemyes
            {
                player new_enemy;
                create_enemy(new_enemy, "enemy #", i);
            }
            player new_player;//construct your player
            player_constructor(new_player);
        }
        // if (init == 2)
        // {
        //     std::ifstream file("save.bin", std::ios::binary);
        //     // 
        // }

        main_cycle();
    }
    else
    {
        cout << "ERROR" << endl;
    }
    
    



    

    // std::ofstream file("save.bin", std::ios::binary);
    // for (int i = 0; i < 6; ++i) {
    //     file.write((char*)&(characters[i].position),
    //                sizeof(characters[i].position));

    // std::ifstream file("save.bin", std::ios::binary);
    // for (int i = 0; i < 6; ++i) {
    //     file.read((char*)&(characters[i].position),
    //                sizeof(characters[i].position));

    
//save&load 
//main cyсle




    return 0;
}