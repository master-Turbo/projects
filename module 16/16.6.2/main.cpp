#include<iostream>
#include<string>

using namespace std;

int main()
{
    string input;

    cout << "Input number: ";
    cin >> input;
    
    double output = stod(input);
    cout << endl;
    cout << output;

    return 0;
}