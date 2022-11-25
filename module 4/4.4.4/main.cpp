#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Программа определяет уровень персонажа в игре. \n";
	int experiencePoints;
	std::cout << "Введите количество очков опыта: \n";
	std::cin >> experiencePoints;

	if (experiencePoints >= 5000) {
		std::cout << "Уровень игрока: 4 \n";
	}
	else if (experiencePoints >= 2500) {
		std::cout << "Уровень игрока: 3 \n";
	}
	else if (experiencePoints >= 1000) {
		std::cout << "Уровень игрока: 2 \n";
	}
	else if (experiencePoints >= 0) {
		std::cout << "Уровень игрока: 1 \n";
	}
	else if (experiencePoints < 0) {
		std::cout << "Ой, кажется надо быть внимательнее при вводе) \n";
	}

} 