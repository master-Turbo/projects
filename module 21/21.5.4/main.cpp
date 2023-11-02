#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
struct player
{
    string name = " ";
    int player_id = -1;
    int life = -1;
    int armor = -1;
    int damage = -1;
    int coordinate_x = -1;
    int coordinate_y = -1;
};

void title()
{
    cout << "-------------------" << endl;
    cout << "|PLAYER vs ENEMIES|" << endl;
    cout << "-------------------" << endl << endl;
}

int init_game()
{
    cout << "0 > NEW GAME"<< endl;
    cout << "1 > LOAD GAME" << endl;
    cout << "2 > SAVE GAME" << endl;

    int init = -1;
    cin >> init;
    return init;
}

void set_coordinates_rand(player &player, vector <int> &cor_x, vector <int> &cor_y)
{//если это не первый игрок проверить координаты уже созданных игроков
    if (player.player_id != 0)
    {
        // создать рандомные координаты
        int x = rand() % 20;
        int y = rand() % 20;
        // проверить не заняты ли эти координаты
        for (int i = 0; i < player.player_id; i++)
        {
            if (x == cor_x[i]  && y == cor_y[i])
            {
                set_coordinates_rand(player, cor_x, cor_y);
            }
        }
        player.coordinate_x = x;
        player.coordinate_y = y;
        cor_x.push_back(player.coordinate_x);
        cor_y.push_back(player.coordinate_y);
    }
    else
    {
        player.coordinate_x = rand() % 20;
        player.coordinate_y = rand() % 20;
        cor_x.push_back(player.coordinate_x);
        cor_y.push_back(player.coordinate_y);
    }
}

void player_constructor(player &player, vector <int> &cor_x, vector <int> &cor_y)
{
    cout << "name" << endl;
    cin >> player.name;
    cout << "life" << endl;
    cin >> player.life;
    cout << "armor" << endl;
    cin >> player.armor;
    cout << "damage" << endl;
    cin >> player.damage;
    set_coordinates_rand(player, cor_x, cor_y);
}

void enemy_constructor(player &player, int id, vector <int> &cor_x, vector <int> &cor_y)
{
    player.name = "enemy #";
    player.player_id = id;
    player.life = rand() % 100 + 50;
    player.armor = rand() % 50;
    player.damage = rand() % 15 + 15;
    set_coordinates_rand(player, cor_x, cor_y);
}

void create_matrix(vector <vector <char>> &game_matrix, const int &width, const int &height,
                   player &player_1, player &enemy_1, player &enemy_2, player &enemy_3,
                   player &enemy_4, player &enemy_5)
{
    //заполнить игровое поле точками
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            game_matrix[i][j] = '.';
        }
    }

    game_matrix[player_1.coordinate_x][player_1.coordinate_y] = 'P';
    game_matrix[enemy_1.coordinate_x][enemy_1.coordinate_y] = 'E';
    game_matrix[enemy_2.coordinate_x][enemy_2.coordinate_y] = 'E';
    game_matrix[enemy_3.coordinate_x][enemy_3.coordinate_y] = 'E';
    game_matrix[enemy_4.coordinate_x][enemy_4.coordinate_y] = 'E';
    game_matrix[enemy_5.coordinate_x][enemy_5.coordinate_y] = 'E';

    
    //установить игроков по координатам
}

void display_info(player &pl, player &e1, player &e2, player &e3, player &e4, player &e5)
{
    cout << endl;
    cout << endl;
    cout << "name\t\tlive\tarmor\tdamage" << endl;
    cout << pl.name << "\t\t"<< pl.life << "\t"<< pl.armor << "\t"<< pl.damage << endl;
    cout << e1.name << e1.player_id << "\t"<< e1.life << "\t"<< e1.armor << "\t"<< e1.damage << endl;
    cout << e2.name << e2.player_id << "\t"<< e2.life << "\t"<< e2.armor << "\t"<< e2.damage << endl;
    cout << e3.name << e3.player_id << "\t"<< e3.life << "\t"<< e3.armor << "\t"<< e3.damage << endl;
    cout << e4.name << e4.player_id << "\t"<< e4.life << "\t"<< e4.armor << "\t"<< e4.damage << endl;
    cout << e5.name << e5.player_id << "\t"<< e5.life << "\t"<< e5.armor << "\t"<< e5.damage << endl;

}

void display_matrix(vector <vector <char>> &game_matrix, const int &width, const int &height)
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            cout << game_matrix[i][j] << ' ';  
        }
        cout << endl;
    }
}

void display_clear()
{
    std::cout << "\033[2J\033[1;1H";
}

void move(vector <vector <char>> &game_matrix)
{
    cout << "your turn" << endl;
    char command;
    cin >> command;
    // ????
}


int main()
{
    // приветствие
    title();
    // выполнить очистку экрана
    // std::cout << "\033[2J\033[1;1H";
    // выбор действия(создать игру или загрузить или сохранить в файл 
    // (выводится в начале и при паузе (определить символ)))
    if (init_game() == 0)
    {
        // выполнить очистку экрана
        display_clear();
        //создание игрока
        player player_1;
        vector <int> cor_x;
        vector <int> cor_y;
        player_1.player_id = 0;
        player_constructor(player_1, cor_x, cor_y);
        // создание 5 враа движения игроков на игровом полегов
        player enemy_1;
        enemy_constructor(enemy_1, 1, cor_x, cor_y);
        player enemy_2;
        enemy_constructor(enemy_2, 2, cor_x, cor_y);
        player enemy_3;
        enemy_constructor(enemy_3, 3, cor_x, cor_y);
        player enemy_4;
        enemy_constructor(enemy_4, 4, cor_x, cor_y);
        player enemy_5;
        enemy_constructor(enemy_5, 5, cor_x, cor_y);
        // очистить временные данные
        cor_x.clear();
        cor_y.clear();

        // выполнить очистку экрана
        display_clear();
        // создать игровое поле 20*20
        const int width = 20;
        const int height = 20;
        vector <vector <char>> game_matrix (width, vector <char> (height));
        create_matrix(game_matrix, width, height, player_1,
                      enemy_1, enemy_2, enemy_3, enemy_4, enemy_5);
        // нарисовать игровое поле
        display_matrix(game_matrix, width, height);
        display_info(player_1, enemy_1, enemy_2, enemy_3, enemy_4, enemy_5);
        // написать логику движения игроков
        move(game_matrix);




    }
    // if (init_game() == 1)
    // {
    //     /* code */
    // }
    // if (init_game() == 2)
    // {
    //     /* code */
    // }
    
    // 
    // 

    return 0;
}
