#include <iostream> 
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int x;
	int y;

	std::cout << "Ведите первое число: \n";
	std::cin >> x;
	std::cout << "Ведите второе число: \n";
	std::cin >> y;
	if (x < y) {
		std::cout << "Первое число меньше второго \n";
	}
	else if(x > y) {
		std::cout << "Первое число больше второго \n";
	}
	else {
		std::cout << "Числа равны \n";
	}
}

