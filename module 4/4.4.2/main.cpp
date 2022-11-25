#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "**Складываем в уме** \n";

	int a;
	std::cout << "Введите первое число: \n";
	std::cin >> a;
	int b;
	std::cout << "Введите второе число: \n";
	std::cin >> b;
	int c = a + b;
	int d;
	std::cout << "Ответ: \n";
	std::cin >> d;

	if (c == d) {
		std::cout << "Ответ верный!!! \n";
	}
	else {
		std::cout << "Ответ неверен!  \n";
		std::cout << "Правильный ответ: " << c <<"\n";
	}
}