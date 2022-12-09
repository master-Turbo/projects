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
int first_num = 0, result_1;
cout << "NOT" << endl;
cout << "Enter number ";
cin >> first_num;


// Bitwise NOT operation
result_1 = ~first_num;

// print the input numbers and output value
cout << endl;
display("Number is    =  ", first_num);
display("~num         =  ", result_1);
cout << endl;

return 0;
}