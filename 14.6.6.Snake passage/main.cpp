#include <iostream>

using namespace std;

int main()
{   int N = 5;
    int arr [N][N];
    int number = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = number;
            number ++;
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}