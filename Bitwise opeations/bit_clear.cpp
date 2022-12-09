#include <iostream>
#include <string>
#include <bitset>
using namespace std;

// display() function
void display(string print_msg, int number)
{
bitset<16> myBitSet(number);
cout << print_msg;
cout << myBitSet.to_string() << » (« << myBitSet.to_ulong() << «) « << endl;
}

int main()
{
int first_num = 7, second_num = 9;

// print the input number — first_num
cout << endl;
display(«First Number is           =  «, first_num);

// Clear 2nd bit
first_num &= ~(1UL << 2);

// Print output
display(«Set 2nd bit of first_num  =  «, first_num);
cout << endl;

// print the input number — second_num
cout << endl;
display(«Second Number is           =  «, second_num);

// Clear 3rd bit
second_num &= ~(1UL << 3);

// Print output
display(«Set 3rd bit of second_num  =  «, second_num);
cout << endl;

return ;
}