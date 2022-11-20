#include <iostream>

using namespace std;

int main()
{
    int arr [5][5];
    int number = 0;
    int multiplier = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = number;
            number ++;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
        multiplier *= -1;
        multiplier ++;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }





    return 0;
}