#include <iostream>
#include <string>
#include <bitset>
using namespace std;

// display() function
void display(string print_msg, int number)
{
bitset<16> myBitSet(number);
cout << print_msg;
cout << myBitSet.to_string() << " (" << myBitSet.to_ulong() << ") " << endl;
}

int main()
{
int first_num = 0, second_num = 0, result;
cout << "LEFT SHIFT" << endl;
cout << "Enter number ";
cin >> first_num;
cout << "Enter the shift ";
cin >> second_num;

// Bitwise Left Shift operation
result = first_num << second_num;

// print the input numbers and output value
cout << endl;
display("Number is         = ", first_num);
// display("Second Number is        = ", second_num);
display("num << shift      = ", result);
cout << endl;

return 0;
}