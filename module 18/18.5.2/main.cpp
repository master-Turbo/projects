#include<iostream>

using namespace std;
 
int countWaysUtil(int n, int m)
{
    if (n <= 1)
    {
        return n;
    }
     
    int res = 0;
    for(int i = 1; i <= m && i <= n; i++)
    {
       res += countWaysUtil(n - i, m);
    }
    return res;
}

int countWays(int n)
{
    return countWaysUtil(n + 1, 3);
}
 
int main()
{
    cout << "To which step should the rabbit jump?" << endl;
    int n;
    cin >> n;
    
    cout << "Number of ways = " << countWays(n);
 
    return 0;
}