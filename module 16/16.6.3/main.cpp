#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string buffer;
    cin >> buffer;
    double a = 0;
    double b = 0;
    char operation;

    stringstream buffer_stream(buffer);
    buffer_stream >> a >> operation >> b;

    // if (operation == '+')
    // {
    //     cout << "a + b = " << a + b << endl;
    // }
    //     if (operation == '-')
    // {
    //     cout << "a - b = " << a - b << endl;
    // }
    //     if (operation == '*')
    // {
    //     cout << "a * b = " << a * b << endl;
    // }
    //     if (operation == '/')
    // {
    //     cout << "a / b = " << a / b << endl;
    // }

    switch (operation)
    {
    case '+':
        cout << "a + b = " << a + b << endl;
        break;
    case '-':
        cout << "a - b = " << a - b << endl;
        break;        
    case '*':
        cout << "a * b = " << a * b << endl;
        break;
    case '/':
        cout << "a / b = " << a / b << endl;
        break;
        
    default:
        break;
    }

    
    return 0;
}
