#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int speed, height;
	std::cout << "введите скорость и высоту \n";
	std::cin >> speed >> height;
	if ((750 <= speed && speed <= 850) && (9000 <= height && height <= 9500)) {
		std::cout << "Самолет летит правильным эшелоном.\n";
	}
	else {
		std::cout << "Самолет летит неправильным эшелоном.\n";
	}
}