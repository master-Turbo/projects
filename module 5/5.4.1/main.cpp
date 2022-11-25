#include <iostream>
using namespace std;
int main(){

	setlocale(LC_ALL, "Russian");
	std::cout << "**********************************************************************\n";
	std:cout << "			Программа отбора кандидатов в летчики\n";
	std::cout << "**********************************************************************\n";

	int height;
	int weight;
	int hands;
	int legs;
	int flyingHours;
	std::string eyeColor;

	std::cout << "Введите параметры\n";
	std::cout << "**********************************************************************\n";
	std::cout << "Рост: \n";
	std::cin >> height;
	std::cout << "Вес: \n";
	std::cin >> weight;
	std::cout << "Количество рук: \n";
	std::cin >> hands;
	std::cout << "Количество ног: \n";
	std::cin >> legs;
	std::cout << "Часов налета: \n";
	std::cin >> flyingHours;
	std::cout << "Цвет глаз: \n";
	std::cin >> eyeColor;

	std::cout << "**********************************************************************\n";

	if ((145 <= height && height <= 165) && (45 <= weight && weight <= 65) && (hands == legs) && (flyingHours > 100) && (eyeColor != "зеленый")) {
		std::cout << "Добро пожаловать в армию, сынок!";
	}
	else {
		std::cout << "В летчики не подходит. \n";
	}
	std::cout << "**********************************************************************\n";

}