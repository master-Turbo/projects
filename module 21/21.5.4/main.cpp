#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <unistd.h>

using namespace std;

struct player
{
    string name;
    int player_id;
    int life;
    int armor;
    int damage;
};

struct coordinates
{
    int x;
    int y;
};

struct store_state
{
    vector<vector<int>> matrix;
    vector<int> temp;
};

void create_matrix(vector<int>& temp, vector<vector<int>>& matrix, int rows, int cols)
{
    cout << "записываем данные в двумерный вектор" << endl;
    int tmp;
    for (int i = 0; i < rows; ++i)//создать и заполнить двумерный вектор
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << "записываем элемент строки" << endl;
            cin >> tmp;
            temp.push_back(tmp);
        }
        cout << "записываем готовую строку" << endl;
        matrix.push_back(temp);
    }
}

void display_state(vector<vector<int>>& matrix, int rows, int cols)
{

    for (int i = 0; i < rows; ++i)//вывести на экран вектор
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}



void player_constructor(player& new_player)
{
    new_player.player_id = 0;
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
        // if (init == 2)//load saved game
        // {
        //     std::ifstream file("save.bin", std::ios::binary);
        //     // 
        // }

        cout << "\033[2J\033[1;1H";//clear screen

        const int width = 20;
        const int height = 20;

        coordinates playing_field;

        while (true)
        {
            for (playing_field.x = 0; playing_field.x < height; playing_field.x++)
            {
                for (playing_field.y = 0; playing_field.y < width; playing_field.y++)
                {
                    cout << '.' << ' ';
                }
                cout << endl;
            }

            sleep(1);
            cout << "\033[2J\033[1;1H";//clear screen
            cout << "------------" << endl;
        
        }



    }
    else
    {
        cout << "ERROR" << endl;
    }

    return 0;
}