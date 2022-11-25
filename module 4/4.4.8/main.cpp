#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");

	std::cout << "=====Зарплата===== \n";

	int a;
	int b;
	int c;

	std::cout << "Введите зарплату первого сотрудника отдела: \n";
	std::cin >> a;
	std::cout << "Введите зарплату второго сотрудника отдела: \n";
	std::cin >> b;
	std::cout << "Введите зарплату третьего сотрудника отдела: \n";
	std::cin >> c;

	int min = a;
	int max = a;

	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}

	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}

	std::cout << "Max: " << max << "\n";
	std::cout << "Min: " << min << "\n";
	std::cout << "Разница: " << max - min << "\n";

	int x = (a + b + c) / 3;

	std::cout << "Средняя арифметическая зарплата отдела: " << x << "\n";

}