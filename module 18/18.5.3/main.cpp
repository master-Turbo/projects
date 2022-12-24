#include <iostream>
#include<sstream>
#include<string>

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
    int n = 0;
    int k = 0;
    string str;

    cout << "To which step should the rabbit jump? (enter via spacebar)" << endl;
    cout << "Specify the maximum jump (>=1)" << endl;
    getline(cin, str);

    stringstream temp (str);
    temp >> n >> k;

    if (k == 0)
    {
        k = 3;
        cout << "Maximum jamp == 3 " << endl;
    }
    cout << "Number of ways = " << counting_ways(n, k);
    cout << endl;
    return 0;
}