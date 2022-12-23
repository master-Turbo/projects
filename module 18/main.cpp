#include <iostream>

using namespace std;

int counting_ways(int n, int k)
{
    int result = 0;
    if (n < 0) return 0;
    if (n == 0) return 1;

    for (int i = 1; i <= k; ++i)
    {
        result += counting_ways((n - i), k);
    }
    
    return result;
}

int main()
{
    int n, k;
    cout << "To which step should the rabbit jump?" << endl;
    cin >> n;
    cout << "Specify the maximum jump" << endl;
    cin >> k;

    cout << "Number of ways = " << counting_ways(n, k);
    return 0;
}