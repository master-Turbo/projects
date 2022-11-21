#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	std::cout << "Банкомат \n";

	int summ;
	std::cout << "Введите сумму: \n";
	std::cin >> summ;
	if (summ > 100000) {
		std::cout << "Максимальная сумма 100000 \n";
	}
	else if(summ <= 100000) {
		if (summ % 100) {
			std::cout << "можно выдать сумму только по 100. ваша сумма = " << summ;
		}
		else {
			std::cout << "Выдать " << summ;

		}
	}

}