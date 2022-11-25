#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	std::cout << "Введите длину палочек: ";
	std::cin >> a >> b >> c;

	if ((a + b) <= c || (a + c) <= b || (b + c) <= a) {
		std::cout << "треугольник сложить нельзя ";
	}
	else
	{
		std::cout << "треугольник сложить получится ";
	}
}