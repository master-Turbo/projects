#include <iostream>

using namespace std;

int main()
{
    
    cout << "multiple elements create an array? " << endl;

    int a[4] = {2, 7, 11, 15};

    int res = 9;

    for (int  i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i] + a[j] == res)
            {
                cout << "index " << i << " + index " << j << " = " << res << endl;
                return 0;
            }

        }
    }
}