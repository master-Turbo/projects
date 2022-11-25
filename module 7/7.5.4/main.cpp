#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    int x = 7;
    int y = 10;


    std::string command;

    std::cout << "Марсоход находится на позиции " << x << " , " << y << " , введите команду : \n";
    std::cin >> command;

    for (;;) {
        if (command == "w" || command == "W") {
            if (y != 20) {
                y++;
            }
            else {
                std::cout << "Марсоход достиг границы, путь в этом напралении невозможен \n";
            }
        }
        else if (command == "s" || command == "S") {
            if (y != 0) {
                y--;
            }
            else {
                std::cout << "Марсоход достиг границы, путь в этом напралении невозможен \n";
            }
        }
        else if (command == "a" || command == "A") {
            if (x != 0) {
                x--;
            }
            else {
                std::cout << "Марсоход достиг границы, путь в этом напралении невозможен \n";
            }
        }
        else if (command == "d" || command == "D") {
            if (x != 15) {
                x++;
            }
            else {
                std::cout << "Марсоход достиг границы, путь в этом напралении невозможен \n";
            }
        }

        std::cout << "Марсоход находится на позиции " << x << " , " << y << " , введите команду : \n";
        std::cin >> command;
    }
}