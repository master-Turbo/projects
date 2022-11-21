#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");

	int x;

	std::cout << "посчитаем модуль числа. \n";
	std::cout << "Введите число: \n";
	std::cin >> x;

	if (x >= 0)
	{
		x = x;
	}

	if (x < 0)
	{
		x = -x;

	}

	std::cout << "Модуль числа равен: " << x << "\n";


}