#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");

	std::cout << "Меню бизнес-ланча ресторана в зависимости от дня недели \n";
	int day;

	std::cout << "Выбери день недели (число от 1 до 7, где 1 понедельник, а 7 воскресенье) \n";
	std::cin >> day;

	std::string generalPart ("Меню, общая часть");

	if (day == 1) {
		std::cout << generalPart << ", а также текст для понедельника \n";
	}
	else if (day == 2) {
		std::cout << generalPart << ", а также текст для вторника \n";
	}
	else if (day == 3) {
		std::cout << generalPart << ", а также текст для среды \n";
	}
	else if (day == 4) {
		std::cout << generalPart << ", а также текст для четверга \n";
	}
	else if (day == 5) {
		std::cout << generalPart << ", а также текст для пятницы \n";
	}
	else if (day == 6) {
		std::cout << generalPart << ", а также текст для субботы \n";
	}
	else if (day == 7) {
		std::cout << generalPart << ", а также текст для воскресенья \n";
	}


}