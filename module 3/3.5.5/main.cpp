#include <iostream>

int main()
{

	int a = 42;
	int b = 153;

	std::cout << "a: " << a << "\n";
	std::cout << "b: " << b << "\n";

	a = a + b; // a = 42 + 153 = 195
	b = b - a; // b = 153 - 195 = -42
	b = -b;    // b = 42
	a = a - b; //a = 195 - 42 = 153

	std::cout << "a: " << a << "\n";
	std::cout << "b: " << b << "\n";
}
