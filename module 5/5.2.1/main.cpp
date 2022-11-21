#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");

	int x;
	int y;
	std::cout << "Введите координату X: \n";
	std::cin >> x;
	std::cout << "Введите координату Y: \n";
	std::cin >> y;
	if (x == 0 || y == 0) {
		std::cout << "Точка находится на границе.";
	}else {
		if (x > 0 && y > 0) {
			std::cout << "Точка находится в 1й четверти.";
		}
		if (x < 0 && y > 0) {
			std::cout << "Точка находится в 2й четверти.";
			}
		if (x < 0 && y < 0) {
			std::cout << "Точка находится в 3й четверти.";
				}
		if (x > 0 && y < 0) {
			std::cout << "Точка находится в 4й четверти.";
		}
	
	}
}