#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");


	std::string stopName1 = "Улица_Программистов";
	std::string stopName2 = "Улица_Алгоритмов";
	std::string stopName3 = "Улица_Парадигм";
	std::string stopName4 = "Улица_Объектов";

	int totalPass = 0;
	int currentPass = 0;
	int inPass = 0;
	int outPass = 0;
	int totalMoney = 0;
	
	std::cout << "Прибываем на остановку " << stopName1 << ". В салоне пассажиров : " << currentPass <<"\n";
	std::cout << "Сколько пассажиров вышло на остановке? \n";
	std::cin >> outPass;
	std::cout << "Сколько пассажиров зашло на остановке? \n";
	std::cin >> inPass;
	currentPass += inPass - outPass;
	totalPass += currentPass;
	std::cout << "Отправляемся с остановки " << stopName1 <<". В салоне пассажиров : " << currentPass << " \n";

	std::cout << "	---------- - Едем-------- - \n";

	std::cout << "Прибываем на остановку " << stopName2 << ". В салоне пассажиров : " << currentPass << "\n";
	std::cout << "Сколько пассажиров вышло на остановке? \n";
	std::cin >> outPass;
	std::cout << "Сколько пассажиров зашло на остановке? \n";
	std::cin >> inPass;
	currentPass += inPass - outPass;
	totalPass += currentPass;
	std::cout << "Отправляемся с остановки " << stopName2 << ". В салоне пассажиров : " << currentPass << " \n";

	std::cout << "	---------- - Едем-------- - \n";

	std::cout << "Прибываем на остановку " << stopName3 << ". В салоне пассажиров : " << currentPass << "\n";
	std::cout << "Сколько пассажиров вышло на остановке? \n";
	std::cin >> outPass;
	std::cout << "Сколько пассажиров зашло на остановке? \n";
	std::cin >> inPass;
	currentPass += inPass - outPass;
	totalPass += currentPass;
	std::cout << "Отправляемся с остановки " << stopName3 << ". В салоне пассажиров : " << currentPass << " \n";

	std::cout << "	---------- - Едем-------- - \n";

	std::cout << "Прибываем на остановку " << stopName4 << ". В салоне пассажиров : " << currentPass << "\n";
	std::cout << "Сколько пассажиров вышло на остановке? \n";
	std::cin >> outPass;
	std::cout << "Сколько пассажиров зашло на остановке? \n";
	std::cin >> inPass;
	currentPass += inPass - outPass;
	totalPass += currentPass;
	std::cout << "В салоне пассажиров : " << currentPass << " \n";

	totalMoney = totalPass * 20;

	int driverCash = (totalMoney * 25) / 100;
	int fuel = (totalMoney * 20) / 100;
	int tax = (totalMoney * 20) / 100;
	int repair = (totalMoney * 20) / 100;
	int income = totalMoney - driverCash - fuel - tax - repair;
	std::cout << "Всего заработали: " << totalMoney << "\n";
	std::cout << "Зарплата водителя: " << driverCash << "\n";
	std::cout << "Расходы на топливо: " << fuel << "\n";
	std::cout << "Налоги: " << tax << "\n";
	std::cout << "Расходы на ремонт машины: " << repair << "\n";
	std::cout << "Итого доход: " << income;

}