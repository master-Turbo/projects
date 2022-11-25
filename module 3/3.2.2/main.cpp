#include <iostream>

int main() {

  std::cout << "Приветствуем вас в калькуляторе! Он поможет рассчитать полную стоимость товаров с учетом скидок и доставки.\n";

  int productCost;

  std::cout << "Введите стоимость товара: \n";
  std::cin >> productCost;

  int deliveryCost;

  std::cout << "Введите стоимость доставки: \n";
  std::cin >> deliveryCost;

  int discount;

  std::cout << "Введите скидку: \n";
  std::cin >> discount;

  std::cout << "-----=====Считаем=====-----\n";

  int price = productCost + deliveryCost - discount;

    std::cout << "Конечная стоимость равна: \n";

  std::cout << price;
} 