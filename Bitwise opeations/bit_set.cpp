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
int first_num = 7, second_num = 9;

// print the input number — first_num
cout << endl;
display("First Number is           =  ", first_num);

// Set 5th bit
first_num |= (1UL << 5);

// Print output
display("Set 5th bit of first_num  =  ", first_num);
cout << endl;

// print the input number — second_num
cout << endl;
display("Second Number is           =  ", second_num);// Set 6th bit
second_num |= (1UL << 6);

// Print output
display("Set 6th bit of second_num  =  ", second_num);
cout << endl;

return 0;
}