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
        }        
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j * multiplier] << "\t";
            number ++;
        }
        multiplier *= −1;
        cout << endl;
    }





    return 0;
}