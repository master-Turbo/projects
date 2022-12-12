#include<iostream>
#include<cstring>

using namespace std;

bool substring ( const char* a, const char* b)
{
    if (strstr(a, b)) return true;
    else return false;
}

int main()
{
    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "banana";

    if (substring(a, b)) cout << "true" <<" ";
    else cout << "false" <<" ";
    
    if (substring(a, c)) cout << "true" <<" ";
    else cout << "false" <<" ";
    
    return 0;
}   