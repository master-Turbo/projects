#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string buffer;
    cin << buffer;
    double a = 0;
    double b = 0;
    char operation;

    stringstream buffer_stream(buffer);
    buffer_stream >> a >> operation >> b;

    if (operation == '+')
    {
        cout << a + b;
    }
        if (operation == '-')
    {
        cout << a - b;
    }
        if (operation == '*')
    {
        cout << a * b;
    }
        if (operation == '/')
    {
        cout << a / b;
    }

    
    return 0;
}