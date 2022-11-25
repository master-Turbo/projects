#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Проверим, является ли введенное число степенью 2. \n";
	int num;
	std::cout << "Введите число: \n";
	std::cin >> num;
	int x = 1;
	if (1 <= num && num <= 1073741823) {
		while ((x * 2) <= num) {
			x *= 2;
		}

		if (x == num) {
			std::cout << "Введенное число является степенью 2. \n";
		}
		else {
			std::cout << "Введенное число НЕ является степенью 2. \n";
		}
	}
	else {
		std::cout << "Вы вышли из диапазона проверяемых чисел. \n";
		std::cout << "Введите число от 1 до 1073741823. \n";
	}
	return 0;
}
//1073741824
//1073741823,5