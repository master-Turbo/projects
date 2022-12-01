#include<iostream>
#include<string>

using namespace std;

int main()
{
    string the_whole_part;
    string fractional_part;

    cout << "Input number: ";
    cin >> the_whole_part;
    cin >> fractional_part;

    string out = the_whole_part + '.' + fractional_part;

    double output = stod(out);

    cout << endl;
    cout << output;

    return 0;
}