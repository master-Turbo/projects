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

    int move = 0;
    int x_point = 0;
    int y_point = 0;
    char player = 'X';
    bool exit = false;

    std::cout << "Welcome to the game of tic tac toe" << std::endl;
    std::cout << std::endl;
    //главный цикл
    
    while (exit == false)
    {
        std::cout << "---------------------------------------------" << std::endl;
        std::cout << "Player " << player << " move now." << std::endl;
        std::cout << std::endl;
        std::cout << "Enter the coordinates ROW and COLUMN" << std::endl;        
        
        x_point = getting_data_from_the_user();
        y_point = getting_data_from_the_user();

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
            output_of_the_playing_field(field, ROW, COL);
            exit = true;
        }
        else if(move == 9)
        {
            std::cout << "You have a draw!" << std::endl;
            output_of_the_playing_field(field, ROW, COL);
            exit = true;
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