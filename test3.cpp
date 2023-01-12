#include<iostream>
#include<string>
using namespace std;
int main()
{
    string data = "maga borlakov 10.01.1986 777";
    string date;
    int j = 0;
    for (int i = 0; i < data.size(); ++i)
    {
        if (data[i] >= '0' && data[i] <= '9')
        {
            date += data[i];
            ++j;
            if(j > 7) break;
        }
    }

    cout << date << endl;
}