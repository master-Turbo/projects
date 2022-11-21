#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int x1, y1, x2, y2, x3, y3;
	std::cout << "введите координаты первой точки: \n";
	std::cin >> x1 >> y1;

	std::cout << "введите координаты второй точки: \n";
	std::cin >> x2 >> y2;

	std::cout << "введите координаты третьей точки: \n";
	std::cin >> x3 >> y3;

	if (((x1 == x2 && y1 == y2) || (x2 == x3 && y2 == y3) || (x3 == x1 && y3 == y1) || ((x1 - x2) / (y1 - y2) == (x2 - x3) / (y2 - y3)))){
		std::cout << "no \n";
	}
	else {
		std::cout << "yes \n";
	}

}