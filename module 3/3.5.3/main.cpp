#include <iostream>

int main()
{

	int a = 42;
	int b = 153;

	std::cout << "a: " << a << "\n";
	std::cout << "b: " << b << "\n";

	int temp;
	temp = a;
	a = b;
	b = temp;

	std::cout << "a: " << a << "\n";
	std::cout << "b: " << b << "\n";
}
