#include <iostream>

using namespace std;

int main()
{
    int arr [5][5];
    int number = 0;
    int multiplier = 0;
    int back = 5;

    for (int i = 0; i < 5; i++)
    {
        multiplier *= -1;
        for (int j = 0; j < 5; j++)
        {
            arr[i][j*multiplier] = number;
            number ++;
            cout << arr[i][j] << "\t\t";
        }
        multiplier ++;
    }
    
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << arr[i][j] << "\t\t";
    //     }
    //     cout << endl;
    // }





    return 0;
}