#include<iostream>

using namespace std;

int counting_ways(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    
    return counting_ways(n - 1) + counting_ways(n - 2) + counting_ways(n -3) ;
}

int main()
{
    cout << "To which step should the rabbit jump?" << endl;
    int n;
    cin >> n;

    // for (int i = 0; i < n; ++i)
    // {
    //     cout << counting_ways(i);
    // }
    
    
    cout << "Number of ways = " << counting_ways(n);
 
    return 0;
}