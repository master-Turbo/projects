#include <iostream>

int main() {

  std::cout<<"Введите имя: \n";
  std::string userName;
  std::cin>> userName;

  std::cout<<"Введите рассу: \n";
  std::string race;
  std::cin>> race;

  std::cout << "Родился новый " << race << ", его зовут " << userName <<". Добро пожаловать в этот суровый мир!\n";
} 