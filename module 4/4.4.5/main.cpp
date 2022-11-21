#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "делится ли одно число на другое без остатка? Проверим! \n";

	int a;
	int b;
	std::cout << "Введите первое число: \n";
	std::cin >> a;
	std::cout << "Введите второе число: \n";
	std::cin >> b;

	if (a % b) {
		std::cout << "Первое число делится на второе с остатком \n";
	}
	else {
		std::cout << "Первое число делится на второе без остатка \n";
	}
}