#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

		int day;
		std::cout << "Введите номер дня: \n";
		std::cin >> day;

		if (1 <= day && day <= 31) {
			if ((1 <= day && day <= 5) || (8 <= day && day <= 10) || ((day % 7 == 6) || (day % 7 == 0))) {
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