#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");

	int distance = 200;
	int time = 2;
	int speed;



	std::cout << "Автомобиль выехал из Москвы в Рязань. \n";
	std::cout << "Введите среднюю скорость автомобиля: ";
	std::cin >> speed;

	if (speed < 100) 
	{
		distance = (time * speed);
		std::cout << "За 2 час пути пройдено: " << distance << " км. \n";

	}
	
	if (speed >= 100) 
	{
		std::cout << "Вы приехали";

	}



}