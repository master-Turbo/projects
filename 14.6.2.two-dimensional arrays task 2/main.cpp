#include <iostream>

//Получение данных от пользователя
int getting_data_from_the_user ()
{
    int a;
    std::cin >> a;
    return a;
}

// проверка на выход из диапазона игрового поля
bool going_out_of_bounds (int x, int y)
{
    if ((x < 0 || x > 2) || (y < 0 || y > 2))
    {
        return true;
    }
    else return false;
}

// проверка на занятость выбрнной ячейки игрового поля
bool place_free (bool arr[][3], int x, int y)
{
    if (arr[x][y] == true)
    {
        return true;
    }
    else return false;
}

// проверка на победу
bool check_for_victory(char arr[][3], char player)
{
    if((arr [0][0] == player && arr [0][1] == player && arr [0][2] == player) ||
       (arr [1][0] == player && arr [1][1] == player && arr [1][2] == player) ||
       (arr [2][0] == player && arr [2][1] == player && arr [2][2] == player) ||
       (arr [0][0] == player && arr [1][0] == player && arr [2][0] == player) ||
       (arr [1][0] == player && arr [1][1] == player && arr [1][2] == player) ||
       (arr [2][0] == player && arr [2][1] == player && arr [2][2] == player) ||
       (arr [0][0] == player && arr [1][1] == player && arr [2][2] == player) ||
       (arr [0][2] == player && arr [2][1] == player && arr [2][0] == player))
    {
        return true;
    }
    else return false;
}

// проверка на ничью | 
// bool checking_for_a_draw(char arr[][3], char player)
// {
//     if((arr [0][0] == player && arr [0][1] == player && arr [0][2] == player) ||
//        (arr [1][0] == player && arr [1][1] == player && arr [1][2] == player) ||
//        (arr [2][0] == player && arr [2][1] == player && arr [2][2] == player) ||
//        (arr [0][0] == player && arr [1][0] == player && arr [2][0] == player) ||
//        (arr [1][0] == player && arr [1][1] == player && arr [1][2] == player) ||
//        (arr [2][0] == player && arr [2][1] == player && arr [2][2] == player) ||
//        (arr [0][0] == player && arr [1][1] == player && arr [2][2] == player) ||
//        (arr [0][2] == player && arr [2][1] == player && arr [2][0] == player))
//     {
//         return true;
//     }
//     else return false;
// }

// вывод игрового поля
void output_of_the_playing_field(char arr [][3], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        std::cout << "\t";
        for (int j = 0; j < c; j++)
        {
            if (j == 2) std::cout << " "<< arr [i][j] << "  ";
            else std::cout << " "<< arr [i][j] << " " << "|";
        }
            
        std::cout << std::endl;
        std::cout << "\t";
        if (i != 2) std::cout << "-----------" << std::endl;
    }
}

// смена игрока
char players_turn(char player)
{
    if (player == 'X') player = 'O'; 
    else player = 'X';
    return player;
}

// обнулить исходные данные
void reset_data(char field [][3], bool places [][3], int r, int c, int *move, int *x, int *y, char *player)
{
    for(int i = 0; i < r; i ++)
    {
        for(int j = 0; j < c; j ++)
        {
            field[i][j] = ' ';
            places[i][j] = false;
        }
    }
    *move = 0;
    *x = 0;
    *y = 0;
    *player = 'X';
}

// exit

int main ()
{
    //исходные данные
    const int ROW = 3;
    const int COL = 3;
    char field [ROW][COL] = {{' ', ' ', ' '},
                             {' ', ' ', ' '},
                             {' ', ' ', ' '}};
    
    bool places [ROW][COL] = {{false, false, false},
                              {false, false, false},
                              {false, false, false}};
    int user_X_victories = 0;
    int user_O_victories = 0;
    int move = 0;
    int x_point = 0;
    int y_point = 0;
    char player = 'X';
    bool exit = false;

    //главный цикл
    
    while (exit == false)
    {
        std::cout << "---------------------------------------------" << std::endl;
        std::cout << "Welcome to the game of tic tac toe" << std::endl;
        std::cout << std::endl;
        std::cout << "User X victories: " << user_X_victories << std::endl;
        std::cout << "User O victories: " << user_O_victories << std::endl;
        std::cout << std::endl;
        std::cout << "Player " << player << " move now." << std::endl;
        std::cout << std::endl;
        std::cout << "Enter the coordinates ROW and COLUMN" << std::endl;
        std::cout << "To end the game, enter -1 " << std::endl;
        
        // exit?
        if (getting_data_from_the_user() == -1)
        {
            std::cout << "End Game!" << std::endl;
            exit = true;
            break;
            // return 0;
        }
        else
        {
            x_point = getting_data_from_the_user();
            y_point = getting_data_from_the_user();
        }

        while(going_out_of_bounds(x_point, y_point) == true)
        {
            std::cout << "The coordinates are entered incorrectly, repeat the input" << std::endl;
            std::cin >> x_point >> y_point;
            going_out_of_bounds(x_point, y_point);
        }

        while (place_free(places, x_point, y_point) == true)
        {
            std::cout << "This place is occupied, repeat the input" << std::endl;
            std::cin >> x_point >> y_point;
            place_free(places, x_point, y_point);
        }

        places[x_point][y_point] = true;
        field[x_point][y_point] = player;

        if(check_for_victory(field, player) == true)
        {
            std::cout << "Player " << player << " WIN!" << std::endl;
            if(player == 'X') user_X_victories ++;
            if(player == 'O') user_O_victories ++;
            output_of_the_playing_field(field, ROW, COL);
            reset_data(field, places, ROW, COL, &move, &x_point, &y_point, &player);
        }
        else if(move == 9)
        {
            std::cout << "You have a draw!" << std::endl;
            output_of_the_playing_field(field, ROW, COL);
            reset_data(field, places, ROW, COL, &move, &x_point, &y_point, &player);
        }
        else 
        {
            output_of_the_playing_field(field, ROW, COL);
            player = players_turn(player);
            move ++;
            std::cout << std::endl;
            std::cout << "---------------------------------------------" << std::endl;
        }
    }        
    
    return 0;
}