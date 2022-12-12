#include<iostream>
#include<cstring>

using namespace std;

bool substring ( const char* a, const char* b)
{
    bool flag = false;
    for (int i = 0; *(a + i) != '\0'; ++i)
    {
        for (int j = 0; *(b + j) != '\0'; ++j)
        {
            if (*(a + i) == *(b + j))
            {
                for (int k = 0; *(b + k); ++k)
                {
                    if (*(a + i + k) == *(b + j + k)) flag = true;
                    else flag = false;
                }
            }
        }

        if (flag) return true;
    }

    return false;
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