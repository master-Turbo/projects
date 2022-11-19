#include <iostream>

using namespace std;
// вывод в консоль
void bubble_wrap (int *count, bool arr[][12])
{
    int pop_count = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (arr [i][j] == true)
            {
                cout << 'O' << " ";
            }
            else 
            {
                cout << 'X' << " ";
                (*count) --;
                pop_count ++;
            }
        }
        cout << endl;
    }
    cout << endl;
    while(pop_count > 0)
    {
        cout << "Pop! ";
        pop_count --;
    }
}

// ввод с клавиатуры
int getting_data_from_the_user ()
{
    int a;
    std::cin >> a;
    return a;
}

void input_coordinates (int *x1, int *y1, int *x2, int *y2)
{
    cout << "Enter the coordinates of the beginning and end " << endl;
    cout << "entry point, row " << endl;
    *x1 = getting_data_from_the_user();
    cout << endl;
    cout << "entry point, column " << endl;
    *y1 = getting_data_from_the_user();
    cout << endl;
    cout << "exit point, row " << endl;
    *x2 = getting_data_from_the_user();
    cout << endl;
    cout << "exit point, column " << endl;
    *y2 = getting_data_from_the_user();
    cout << endl;
}

// проверка на выход из диапазона
bool going_out_of_bounds(int *x1, int *y1, int *x2, int *y2)
{
    if ((*x1 < 0 || *x1 > 11) || (*y1 < 0 || *y1 > 11) || (*x2 < 0 || *x2 > 11) || (*y2 < 0 || *y2 > 11))
    {
        return true;
    }
    else return false;
}


// раздавить пупырку
void remove_bubbles (bool arr[][12], int *x1, int *y1, int *x2, int *y2)
{

    for (int i = *x1; i <= *x2; i++)
    {
        for (int j = *y1; j <= *y2; j++)
        {
            arr[i][j] = false;
        } 
    }
}


int main()
{
    const int ROW = 12;
    const int COL = 12;
    bool bubble [ROW][COL];
    int count = 144;
    int entry_point_row = 0;
    int entry_point_col = 0;
    int exit_point_row = 0;
    int exit_point_col = 0;

    // инициализация массива
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            bubble[i][j] = true;
        }
    }
    
    while (true)
    {
        // вывод в консоль
        bubble_wrap(&count, bubble);
        cout << endl;
        cout << endl;

        if (count == 0)
        {
            return 0;
        }

        // ввод с клавиатуры
        input_coordinates(&entry_point_row, &entry_point_col, &exit_point_row, &exit_point_col);

        // проверки
        while(going_out_of_bounds(&entry_point_row, &entry_point_col, &exit_point_row, &exit_point_col))
        {
            std::cout << "The coordinates are entered incorrectly, repeat the input" << std::endl;
            input_coordinates(&entry_point_row, &entry_point_col, &exit_point_row, &exit_point_col);
            going_out_of_bounds(&entry_point_row, &entry_point_col, &exit_point_row, &exit_point_col);
        }
        // раздавить пупырку
        remove_bubbles(bubble, &entry_point_row, &entry_point_col, &exit_point_row, &exit_point_col);
    }
    return 0;
}