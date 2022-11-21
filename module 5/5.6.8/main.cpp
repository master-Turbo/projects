#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int day, month, year;
	std::cout << "введите дату рождения посетителя: \n";
	std::cin >> day >> month >> year;

	int currentDay, currentMonth, currentYear;
	std::cout << "введите текушую дату: \n";
	std::cin >> currentDay >> currentMonth >> currentYear;

	if (currentYear - year < 18) {
		std::cout << "нельзя! \n";
	}
	else if (currentYear - year > 18) {
		std::cout << "можно! \n";
	}
	else if (currentMonth > month || (currentMonth == month && currentDay > day)) {
		std::cout << "можно! \n";
	}
	else {
		std::cout << "нельзя! \n";
	}
}