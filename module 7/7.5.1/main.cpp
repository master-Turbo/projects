#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	
	int month = 0;
	for (int remainder = 100; remainder != 0; remainder -= 4) {

		std::cout << "Остаток гречки " << remainder << " \n";
		std::cout << "Текущий месяц " << month << " \n";
		std::cout << " \n";

		month++;
	}
}