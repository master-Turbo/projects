#include <iostream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
        string a = "125";
        for (int i = 0; i < a.length(); i++)
        {
                cout << a[i] << " ";

        }
        
        // stringstream temp_steam (a);
        // temp_steam >> a;
        // cout << a;

   return 0;
}