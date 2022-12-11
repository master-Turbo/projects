#include<iostream>
#include<string>

using namespace std;

bool substring (char* a, char* b)
{
    bool flag = false;
    int i = 0;
    while (*(a + i) != '\0')
    {
        if (*(b) == *(a + i)) flag = true;
        
        if (flag)
        {
            if (*(b + 1) == *(a + i + 1) && *(b + 2) == *(a + i + 2)) return true;
            else flag = false;
        }
        ++i;
    }
    return false;
}

int main()
{
    char* a = "Hello world";
    char* b = "wor";
    char* c = "banana";

    if (substring(a, b)) cout << "true" <<" ";
    else cout << "false" <<" ";
    
    if (substring(a, c)) cout << "true" <<" ";
    else cout << "false" <<" ";
    
    return 0;
}