#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b, c;
	std::cout << "Введите размеры кирпича: \n";
	std::cin >> a >> b >> c;
	int x, y;
	std::cout << "Введите размеры отверстия: \n";
	std::cin >> x >> y;

	
	if (a <= x && b <= y || b <= x && c <= y || a <= x && c <= y){
		std::cout << "Ok";
	}
	else {
		std::cout << "Не Ok";
	}

}