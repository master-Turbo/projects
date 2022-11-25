#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int x = (float)1.496e+11f * (float)0.001f;
    int y = (float)0.0f;
    std::string command;
    std::cout << "Марсоход находится на позиции " << x << " , " << y << " , Введите команду: (W, S, A, D) \n";
    std::cin >> command;
    int X = 0;
    int Y = 0;

    for (;;) {
        if (command == "w" || command == "W") {
            y++;
            Y++;
        }
        else if (command == "s" || command == "S") {
            y--;
            Y--;
        }
        else if (command == "a" || command == "A") {
            x--;
            X--;
        }
        else if (command == "d" || command == "D") {
            x++;
            X++;
        }

        std::cout << "Координаты марсохода: \n";
        std::cout << "Ось X: " << x << " \n";
        std::cout << "Ось Y: " << y << " \n";
        std::cout << "Перемещение по оси X " << X << " метров \n";
        std::cout << "Перемещение по оси Y " << Y << " метров \n";
        std::cout << "Введите команду: (W, S, A, D) \n";
        std::cin >> command;
    }
}
