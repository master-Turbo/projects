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
cout << "XOR" << endl;
cout << "Enter first number ";
cin >> first_num;
cout << "Enter second number ";
cin >> second_num;

// Bitwise XOR operation
result = first_num ^ second_num;

// print the input numbers
cout << endl;
display("First Number is        =  ", first_num);
display("Second Number is       =  ", second_num);

// print the output value
display("first_num ^ second_num =  ", result);
cout << endl;

return 0;
}