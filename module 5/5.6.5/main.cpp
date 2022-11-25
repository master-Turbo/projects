#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int x;
	int y;
	std::cout << "цена: \n";
	std::cin >> x;
	y = x % 10;

	if (x % 100 >= 11 && x % 100 <= 14) {
		std::cout << x << " рублей";

	}else if (y == 1) {
		std::cout << x << " рубль";
	}
	else if (y == 2 || y == 3 || y == 4) {
		std::cout << x << " рубля";
	}
	else {
		std::cout << x << " рублей";
	}
}