#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int alcohol, firstAidKit;
	std::cout << "Введите количество спирта и аптечек у фельдшера \n";
	std::cin >> alcohol >> firstAidKit;
	if (alcohol >= 2000 || firstAidKit >= 5) {
		std::cout << "У фельдшера достаточно снаряжения! \n";
	}
	else {
		std::cout << "Фельдшеру недостаточно снаряжения! \n";
	}

}