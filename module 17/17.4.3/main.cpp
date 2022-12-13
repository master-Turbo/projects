#include<iostream>
#include<cstring>

using namespace std;

bool size_check(const char* a, const char* b)
{
    if (strlen(a) < strlen(b)) return false;
    return true;
}

bool substring ( const char* a, const char* b)
{   
    size_check(a, b);
    bool flag = false;
    for (int i = 0; *(a + i) != '\0'; ++i)
    {
        if (*(a + i) == *(b))// ищем первое вхождение
        {
            flag = true;
            for (int j = 1; *(b + j) != '\0'; ++j)
            {
                if (*(a + i + j) != *(b + j))
                {
                    flag = false;
                    break;
                }    
            }
            if (flag) return true;
        }
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