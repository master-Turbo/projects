#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Бамбук VS Вредители!\n";


	// 1 вариант
	
	/*
	int originalHeight = 100;
	int growth = 50;
	int losses = 20;
	int currentHeight;	

	currentHeight = originalHeight + ((growth * 2) + (growth / 2)) - (losses * 2);

	std::cout << "В середине третьего дня высота бамбука равна: "<<currentHeight <<"\n";
	*/

	//2 Вариант
	
	/*
	int originalHeight = 100;
	int growth = 50;
	int losses = 20;
	
	int oneDayHeight;
	oneDayHeight = growth - losses; //выясняем прирост за 1 день без учета начальной высоты

	std::cout << "Прирост за 1 день: " << oneDayHeight <<"\n";

	int finalHeight = 300; //финальная высота

	int calculateDay;
	calculateDay = (finalHeight - originalHeight) / oneDayHeight; //ищем негарантированный срок готовности бамбука к продаже

	int result;
	result = (oneDayHeight * calculateDay) + originalHeight; //определяем гарантированный срок готовности бамбука
	if (result < finalHeight);
	calculateDay = calculateDay + 1;

	std::cout << "Дней до продажи (высота 300): " << calculateDay << "\n";
	*/

	//Необязательная часть вариант 1
	/*

	int originalHeight;
	std::cout << "Введите первоначальную высоту: \n";
	std::cin >> originalHeight;

	int growth;
	std::cout << "Введите скорость прироста бамбука за день: \n";
	std::cin >> growth;

	int losses;
	std::cout << "Введите скорость скорость поедания гусеницами бамбука за день: \n";
	std::cin >> losses;

	int currentHeight;
	int day;
	std::cout << "Введите интересующее количество дней чтобы узнать текущую высоту бамбука: \n";
	std::cin >> day;

	currentHeight = originalHeight + ((growth - losses) * day);

	std::cout << "В " << day << "день высота бамбука равна : " << currentHeight << "\n";
	*/

	//Необязательная часть вариант 2
	
	int originalHeight;
	std::cout << "Введите первоначальную высоту: \n";
	std::cin >> originalHeight;
	int growth;
	std::cout << "Введите скорость прироста бамбука за день: \n";
	std::cin >> growth;
	int losses;
	std::cout << "Введите скорость скорость поедания гусеницами бамбука за день: \n";
	std::cin >> losses;
	
	int oneDayHeight;
	oneDayHeight = growth - losses; //выясняем прирост за 1 день без учета начальной высоты

	int targetHeight; //искомая высота
	std::cout << "Введите целевую высоту взрослого бамбука: \n";
	std::cin >> targetHeight;

	int calculateDay;
	calculateDay = (targetHeight - originalHeight) / oneDayHeight; //ищем негарантированный срок готовности бамбука

	int result;
	result = (oneDayHeight * calculateDay) + originalHeight; //определяем гарантированный срок готовности бамбука
	if (result < targetHeight);
	calculateDay = calculateDay + 1;

	std::cout << "Целевой высоты " << targetHeight << " см. бамбук достигнет через: " << calculateDay;
	

}