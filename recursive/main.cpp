#include<iostream>

using namespace std;

int counting_ways(int n, int level)
{
    cout << std::string(level, '\t') << "n = " << n << endl;
    if (n < 0) return 0;
    if (n == 0) return 1;

    return counting_ways(n - 1, level + 1) + counting_ways(n - 2, level + 1) + counting_ways(n -3, level + 1) ;
}

int main()
{
    cout << "To which step should the rabbit jump?" << endl;
    int n;
    cin >> n;

    cout << "Number of ways = " << counting_ways(n, 0);

    return 0;
}