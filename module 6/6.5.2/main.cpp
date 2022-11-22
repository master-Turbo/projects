#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	std::string name;
	int duty;
	std::cout << "Введите ваше имя: \n";
	std::cin >> name;
	std::cout << "Введите сумму долга: \n";
	std::cin >> duty;


	while (duty > 0){
		std::cout << name << " , ваша задолженность составляет: " << duty << " рублей." << "\n";
		std::cout << "внесите сумму задолженности: \n";
		int remainder;
		std::cin >> remainder;
		duty -= remainder;
	}
	std::cout << "Долг погашен!";
}