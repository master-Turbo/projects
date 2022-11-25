#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b, c;
	int m, n, k;
	std::cout << "Введите размеры первой коробки: \n";
	std::cin >> a >> b >> c;
	std::cout << "Введите размеры второй коробки: \n";
	std::cin >> m >> n >> k;;

	if ((a < m && b < n && c < k) || (a < m && b < k && c < n) || (a < n && b < m && c < k) || (a < n && b < k && c < m) || (a < k && b < m && c < n) || (a < k && b < n && c < m)) {
		std::cout << "Первая коробка поместится во вторую";
	}
	else {
		std::cout << "Первая коробка не поместится во вторую";
	}
}