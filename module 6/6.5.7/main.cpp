#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int num;
	std::cout << "Введите число: \n";
	std::cin >> num;
	int fib = 0;
	int first = 1;
	int second = 1;
	int current;
	if (1 <= num && num <= 46) {
		while (fib < num) {
			if (fib < 2) {
				current = 1;
			}
			else {
				current = second + first;
			}
			fib++;
			first = second;
			second = current;
		}
		std::cout << num << " число Фибоначчи " << current <<" \n";
	}
	else {
		std::cout << "Ведите число от 1 до 46 \n";
	}
	return 0;
}