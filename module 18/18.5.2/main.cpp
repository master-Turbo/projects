#include<iostream>

using namespace std;

int counting_ways(int n)
{
    if (n < 0) return 0;
    if (n == 0) return 1;

    // cout << n << endl;
    
    return counting_ways(n - 1) + counting_ways(n - 2) + counting_ways(n - 3);
}

int main()
{
    cout << "To which step should the rabbit jump?" << endl;
    int n;
    cin >> n;
   
    cout << "Number of ways = " << counting_ways(n);
 
    return 0;
}