#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Проверка на чётное число \n";
	int a;
	std::cout << "Введите число: \n";
	std::cin >> a;

	if (a % 2) {
		std::cout << "Число " << a << " нечетное! \n";
	}
	else {
		std::cout << "Число " << a << " четное! \n";
	}

}