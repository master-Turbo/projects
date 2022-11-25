#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int number;
	std::cout << "Введите число: \n";
	std::cin >> number;
	int symbol = 0;

	if (number == 0) {
		symbol = 1;
	}
	else {
		while (number % 10 != 0) {
			number /= 10;
			symbol++;
		}
	}
	

	std::cout << "количество символов " << symbol << " \n";
}