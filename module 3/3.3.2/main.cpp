#include <iostream>

int main() {

  std::cout<<"Введите логин: ";
  std::string login;
  std::cin>> login;

  std::cout<< "Введите пароль: ";
  std::string password;
  std::cin>> password;
  
  std::cout<<"--------\n";
  std::cout<<"[" <<login <<"]" <<", вы успешно зашли!";

} 