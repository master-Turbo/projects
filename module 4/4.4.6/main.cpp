#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");

	int mansCount;
	std::cout << "Введите число людей: \n";										//число мужчин в городе
	std::cin >> mansCount;
	int barbersCount;
	std::cout << "Введите число нанятых барберов: \n";							//число нанятых барберов
	std::cin >> barbersCount;
	int jobTime = 8;															//время смены барбера
	int barbersProductivity = jobTime * barbersCount;
	std::cout << "количество клиенов, которое успеют обслужить все барберы за смену " << barbersProductivity << "\n";

	int mansPerDay = mansCount / 30;

	if (barbersProductivity % mansPerDay) {
		mansPerDay += 1;
	}
	std::cout << "количество клиентов в день " << mansPerDay << "\n";

	
	if (mansPerDay > barbersProductivity) {
		int needBarbers = mansPerDay / barbersProductivity;
		std::cout << "не хватает " << needBarbers << " барберов \n";
	}
	else {
		std::cout << "Барберов достаточно! \n";
	};
}