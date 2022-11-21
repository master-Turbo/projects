#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int weekDay;
	std::cout << "Введите номер дня недели (от 1 до 7): \n";
	std::cin >> weekDay;

	if (1 <= weekDay && weekDay <= 7) {
		if (weekDay == 1) {
			std::cout << "Первый день месяца ПОНЕДЕЛЬНИК \n";
			int day;
			std::cout << "Введите номер дня: \n";
			std::cin >> day;

			if (1 <= day && day <= 31) {
				if ((1 <= day && day <= 5) || (8 <= day && day <= 10) || ((day + weekDay - 1) % 7 == 6) || ((day + weekDay - 1) % 7 == 0)) {
					std::cout << "Выходной день \n";
				}
				else {
					std::cout << "Рабочий день \n";
				}
			}
			else {
				std::cout << "введите число от 1 до 31. \n";
			}
		}
		else if (weekDay == 2) {
			std::cout << "Первый день месяца ВТОРНИК \n";

			int day;
			std::cout << "Введите номер дня: \n";
			std::cin >> day;

			if (1 <= day && day <= 31) {
				if ((1 <= day && day <= 5) || (8 <= day && day <= 10) || ((day + weekDay - 1) % 7 == 6) || ((day + weekDay - 1) % 7 == 0)) {
					std::cout << "Выходной день \n";
				}
				else {
					std::cout << "Рабочий день \n";
				}
			}
			else {
				std::cout << "введите число от 1 до 31. \n";
			}
		}
		else if (weekDay == 3) {
			std::cout << "Первый день месяца СРЕДА \n";

			int day;
			std::cout << "Введите номер дня: \n";
			std::cin >> day;
			if (1 <= day && day <= 31) {
				if ((1 <= day && day <= 5) || (8 <= day && day <= 10) || ((day + weekDay - 1) % 7 == 6) || ((day + weekDay - 1) % 7 == 0)) {
					std::cout << "Выходной день \n";
				}
				else {
					std::cout << "Рабочий день \n";
				}
			}
			else {
				std::cout << "введите число от 1 до 31. \n";
			}
		}
		else if (weekDay == 4) {
			std::cout << "Первый день месяца ЧЕТВЕРГ \n";

			int day;
			std::cout << "Введите номер дня: \n";
			std::cin >> day;

			if (1 <= day && day <= 31) {
				if ((1 <= day && day <= 5) || (8 <= day && day <= 10) || ((day + weekDay - 1) % 7 == 6) || ((day + weekDay - 1) % 7 == 0)) {
					std::cout << "Выходной день \n";
				}
				else {
					std::cout << "Рабочий день \n";
				}
			}
			else {
				std::cout << "введите число от 1 до 31. \n";
			}
		}
		else if (weekDay == 5) {
			std::cout << "Первый день месяца ПЯТНИЦА \n";

			int day;
			std::cout << "Введите номер дня: \n";
			std::cin >> day;

			if (1 <= day && day <= 31) {
				if ((1 <= day && day <= 5) || (8 <= day && day <= 10) || ((day + weekDay - 1) % 7 == 6) || ((day + weekDay - 1) % 7 == 0)) {
					std::cout << "Выходной день \n";
				}
				else {
					std::cout << "Рабочий день \n";
				}
			}
			else {
				std::cout << "введите число от 1 до 31. \n";
			}
		}
		else if (weekDay == 6) {
			std::cout << "Первый день месяца СУББОТА \n";

			int day;
			std::cout << "Введите номер дня: \n";
			std::cin >> day;

			if (1 <= day && day <= 31) {
				if ((1 <= day && day <= 5) || (8 <= day && day <= 10) || ((day + weekDay - 1) % 7 == 6) || ((day + weekDay - 1) % 7 == 0)) {
					std::cout << "Выходной день \n";
				}
				else {
					std::cout << "Рабочий день \n";
				}
			}
			else {
				std::cout << "введите число от 1 до 31. \n";
			}
		}
		else if (weekDay == 7) {
			std::cout << "Первый день месяца ВОСКРЕСЕНЬЕ \n";

			int day;
			std::cout << "Введите номер дня: \n";
			std::cin >> day;

			if (1 <= day && day <= 31) {
				if ((1 <= day && day <= 5) || (8 <= day && day <= 10) || ((day + weekDay - 1) % 7 == 6) || ((day + weekDay - 1) % 7 == 0)) {
					std::cout << "Выходной день \n";
				}
				else {
					std::cout << "Рабочий день \n";
				}
			}
			else {
				std::cout << "введите число от 1 до 31. \n";
			}
		}

	}
	else { std::cout << "введите число от 1 до 7 \n"; }

}