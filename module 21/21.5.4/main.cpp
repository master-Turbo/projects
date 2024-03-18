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

void title() //начальная 
{
    cout << "-------------------" << endl;
    cout << "|PLAYER vs ENEMIES|" << endl;
    cout << "-------------------" << endl << endl;
}

int init_game() //выбор действия
{
    cout << "0 > NEW GAME"<< endl;
    cout << "1 > LOAD GAME" << endl;
    cout << "2 > SAVE GAME" << endl;

    int init = -1;
    cin >> init;
    return init;
}

void set_coordinates_rand(player& player) //установить рандомные координаты
{
    player.coordinate_x = rand() % 20;
    player.coordinate_y = rand() % 20;
    // выполнить проверку на одинаковые координаты 
}

void player_constructor(player& player) //конструктор игрока
{
    cout << "name" << endl;
    cin >> player.name;
    cout << "life" << endl;
    cin >> player.life;
    cout << "armor" << endl;
    cin >> player.armor;
    cout << "damage" << endl;
    cin >> player.damage;
    set_coordinates_rand(player);
}

void enemy_constructor(player &player, int id) //конструктор врагов 
                       
{
    player.name = "enemy #";
    player.player_id = id;
    player.life = rand() % 100 + 50;
    player.armor = rand() % 50;
    player.damage = rand() % 15 + 15;
    set_coordinates_rand(player);
}

void create_matrix(vector <vector <char>>& game_matrix, //создать заполненное точками игровое поле
                   const int& y_cols, 
                   const int& x_rows)
{
    for (int i = 0; i < x_rows; i++)
    {
        for (int j = 0; j < y_cols; j++)
        {
            game_matrix[i][j] = '.';
        }
    }
}

void set_players(vector <vector <char>>& game_matrix, //установить игроков на игровом поле
                 player& player_0, 
                 player& enemy_0,
                 player& enemy_1, 
                 player& enemy_2,
                 player& enemy_3, 
                 player& enemy_4)
{
    game_matrix[player_0.coordinate_x][player_0.coordinate_y] = 'P';
    game_matrix[enemy_0.coordinate_x][enemy_0.coordinate_y] = 'E';
    game_matrix[enemy_1.coordinate_x][enemy_1.coordinate_y] = 'E';
    game_matrix[enemy_2.coordinate_x][enemy_2.coordinate_y] = 'E';
    game_matrix[enemy_3.coordinate_x][enemy_3.coordinate_y] = 'E';
    game_matrix[enemy_4.coordinate_x][enemy_4.coordinate_y] = 'E';
}

void display_matrix(vector <vector <char>>& game_matrix, //вывести на экран игровое поле
                    const int& y_cols, 
                    const int& x_rows)
{
    for (int i = 0; i < x_rows; i++)
    {
        for (int j = 0; j < y_cols; j++)
        {
            cout << game_matrix[i][j] << ' ';  
        }
        cout << endl;
    }
}

void display_info(player& pl, //вывести на экран информацию об игроках
                  player& e0, 
                  player& e1,
                  player& e2, 
                  player& e3, 
                  player& e4)
{
    cout << endl;
    cout << endl;
    cout << "name\t\tlive\tarmor\tdamage" << endl;
    cout << pl.name << "\t\t"<< pl.life << "\t"<< pl.armor << "\t"<< pl.damage << endl;
    cout << e0.name << e0.player_id << "\t"<< e0.life << "\t"<< e0.armor << "\t"<< e0.damage << endl;
    cout << e1.name << e1.player_id << "\t"<< e1.life << "\t"<< e1.armor << "\t"<< e1.damage << endl;
    cout << e2.name << e2.player_id << "\t"<< e2.life << "\t"<< e2.armor << "\t"<< e2.damage << endl;
    cout << e3.name << e3.player_id << "\t"<< e3.life << "\t"<< e3.armor << "\t"<< e3.damage << endl;
    cout << e4.name << e4.player_id << "\t"<< e4.life << "\t"<< e4.armor << "\t"<< e4.damage << endl;

}

void display_clear() //функция очистки экрана
{
    std::cout << "\033[2J\033[1;1H";
}

bool border() //функция проверки на достижение игроками границы игрового поля
{
    bool bord = false;
    return bord;
}

void move(player& player_0) //произвести ход игроком
{
    cout << "your turn" << endl;
    cout << "L > left ' 'R > right ' 'U > up ' 'D > down" << endl;
    char command;
    cin >> command;

    switch (command)
    {
    case 'L':
        player_0.coordinate_y--;
        break;
    
    case 'R':
        player_0.coordinate_y++;
        break;
    
    case 'U':
        player_0.coordinate_x--;
        break;
    
    case 'D':
        player_0.coordinate_x++;
        break;

    default:
        cout << "error command" << endl;
        break;
    }
}


int main()
{
    title();

    switch (init_game())
    {
    case 0:
        display_clear();
        player player_0, enemy_0, enemy_1, enemy_2, enemy_3, enemy_4;
        player_0.player_id = 0;
        player_constructor(player_0);
        enemy_constructor(enemy_0, 1);
        enemy_constructor(enemy_1, 2);
        enemy_constructor(enemy_2, 3);
        enemy_constructor(enemy_3, 4);
        enemy_constructor(enemy_4, 5);

        display_clear();
        // размеры игрового поля
        const int x_cols = 20;
        const int y_rows = 20;
        vector <vector <char>> game_matrix (y_rows, vector <char> (x_cols));


        while (true)
        
        {
            create_matrix(game_matrix, y_rows, x_cols);
            set_players(game_matrix, player_0, enemy_0, enemy_1, enemy_2, enemy_3, enemy_4);
            display_matrix(game_matrix, y_rows, x_cols);
            display_info(player_0, enemy_0, enemy_1, enemy_2, enemy_3, enemy_4);
            move(player_0);
            display_clear();
        }
        
        break;
    
    // case 1:
    //     // 
    //     break;

    // case 2:
    //     // 
    //     break;
    
    // default:
    //     cout << "error command" << endl;
    //     break;
    }
    return 0;


}
