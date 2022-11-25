#include <iostream>

int main() {

	int price = 6400;
	int delivery = 350;
	int discount = 700;
	int result = price + delivery - discount;



	std::cout << "Приветствуем вас в калькуляторе! Он поможет рассчитать полную стоимость товаров с учетом скидок и доставки. \n";
	std::cout << "Введите стоимость товара " << price << "\n";
	std::cout << "Введите стоимость доставки " << delivery << "\n";
	std::cout << "Введите стоимость скидки " << discount << "\n";
	std::cout << "========================================\n";
	std::cout << "Результат: " << result << "\n";
	std::cout << "========================================";
}
