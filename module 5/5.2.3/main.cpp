#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");

	int year;
	int days;
	std::cout << "Введите номер года: \n";
	std::cin >> year;
	if (year % 4 == 0) {
		if (year % 100 == 0 && year % 400 != 0) {
			days = 365;
		}
		else {
			days = 366;
		}
	}
	else {
		days = 365;
	}
	std::cout << "В указанном году " << days << " дней.";
}