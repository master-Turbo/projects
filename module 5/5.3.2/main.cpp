#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int permittedWeight = 1200;
	int numberOfStripes = 4;
	int stripe1, stripe2, stripe3, stripe4;

	std::cout << "Введите массу каждой из машин, въезжающих на мост: ";
	std::cin >> stripe1>> stripe2>> stripe3>> stripe4;

	if (stripe1 > permittedWeight || stripe2 > permittedWeight || stripe3 > permittedWeight || stripe4 > permittedWeight) {
		std::cout << "Среди машин есть перегруз!!!";
	}
	else {
		std::cout << "Все в порядке!";
	}


}