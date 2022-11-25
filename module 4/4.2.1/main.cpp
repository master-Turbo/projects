#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Калькулятор скидки \n";

	int price1;
	int price2;
	int price3;
	int totalPrice;

	std::cout << "Введите стоимость товара 1: \n";
	std::cin >> price1;

	std::cout << "Введите стоимость товара 2: \n";
	std::cin >> price2;

	std::cout << "Введите стоимость товара 3: \n";
	std::cin >> price3;

	totalPrice = price1 + price2 + price3;

	if (totalPrice > 10000)
	{
		int discount;
		discount = (totalPrice * 10) / 100;
		totalPrice = totalPrice - discount;
	std::cout << "Вам сделана скидка 10 процентов! Итоговая стоимость: " << totalPrice << "\n";
	}

	if (totalPrice <= 10000)
	{
		
		std::cout << "Итоговая стоимость: " << totalPrice << "\n";
	}

}