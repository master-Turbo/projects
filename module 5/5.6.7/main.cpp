#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;	
	std::cout << "введите сумму: \n";
	std::cin >> n;

	if (!(n <= 150000) || (n % 100 == 0)) {
		if (n >= 5000) {
			std::cout << "выдать купюр по 5000 " << n / 5000 << " шт.  \n";
			n = n % 5000;
		}

		if (n >= 2000) {
			std::cout << "выдать купюр по 2000 " << n / 2000 << " шт.  \n";
			n = n % 2000;
		}

		if (n >= 1000) {
			std::cout << "выдать купюр по 1000 " << n / 1000 << " шт.  \n";
			n = n % 1000;
		}

		if (n >= 500) {
			std::cout << "выдать купюр по 500 " << n / 500 << " шт.  \n";
			n = n % 500;
		}

		if (n >= 200) {
			std::cout << "выдать купюр по 200 " << n / 200 << " шт.  \n";
			n = n % 200;
		}

		if (n >= 100) {
			std::cout << "выдать купюр по 100 " << n / 100 << " шт.  \n";
			n = n % 100;
		}
		
	}
	else {
		std::cout << "error!";
	}
	
}