#include <iostream>

int main() {

  int a;

  std::cout << "Это программа для вычисления квадрата вводимого числа \n";
  std::cout << "Введите число: ";
  std::cin >> a;
  std::cout << "Вы ввели число: " << a << "\n";
  std::cout << "Квадрат числа " << a <<": " << (a * a);


} 