#include<iostream>
#include<vector>
using namespace std;


int main()
{

    vector <int> arr = {-100,-50, -5, 1, 10, 15};
    int min;
 

    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] >= 0)
        {
            min = i;
            cout << arr[i] << " ";
            break;
        }
    }

    int l = min - 1;
    int r = min + 1;
    while(l > -1 && r < 7)
    {
        if ((arr[l] * -1) < arr[r])
        {
            cout << arr[l] << " ";
            --l;
        }
        else
        {
            cout << arr[r] << " ";
            ++r;
        }
        
    }

    cout << endl;

    return 0;
}
