#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int time;
	std::cout << "Который час? \n";
	std::cin >> time;
	if (time > 0) {
		while (time != 0) {
			std::cout << "Ку Ку!" << time << " \n";
			time -= 1;
		}
	}
	else {
		std::cout << "Error!";
	}
	
}