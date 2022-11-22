#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int ticketNum;


	std::cout << "Введите номер билета (6 цифр): \n";
	std::cin >> ticketNum;

    int a, b;
    a = ticketNum / 1000;
    b = ticketNum % 1000;
	int sumA = 0;
	int sumB = 0;
	int temp;

	while (a / 10 != 0 || a % 10 != 0) {
		temp = a % 10;
		sumA += (a % 10);
		a /= 10;
		//std::cout << temp << " проверка в цикле \n";
	}

	//std::cout << sumA << " \n";

	while (b / 10 != 0 || b % 10 != 0) {
		temp = b % 10;
		sumB += (b % 10);
		b /= 10;
		//std::cout << temp << " проверка в цикле \n";
	}

	//std::cout << sumB << " \n";


	if (sumA == sumB) {
		std::cout << "Это счастливый билет! \n";
	}
	else {
		std::cout << "Этот билет не счастливый :-( \n";
	}

	return 0;
}