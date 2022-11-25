#include <iostream>
#include<cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "");

    float X;
    float Y;
    float Z;
    std::cout << "Ввод: \n";
    std::cout << "Введите размеры бруска: \n";
    std::cout << "X: "; std::cin >> X;
    std::cout << "Y: "; std::cin >> Y;
    std::cout << "Z: "; std::cin >> Z;
    int countX = 0;
    int countY = 0;
    int countZ = 0;
    int resultCount = 0;
    if (X < 5.0f || Y < 5.0f || Z < 5.0f ) {
        std::cout << "Этот брус не подходит. \n";
    }
    else {
        while (X >= 5.0f) {
            countX++;
            X -= 5.0f;
        }
        while (Y >= 5.0f) {
            countY++;
            Y -= 5.0f;
        }
        while (Z >= 5.0f) {
            countZ++;
            Z -= 5.0f;
        }

        resultCount = countX * countY * countZ;
    }
    std::cout << "Вывод: \n";
    std::cout << "Из этого бруска можно изготовить " << resultCount << " кубиков. \n";

    int q = 0;

    for (; resultCount > pow(q, 3); q++) {
    }

    if (pow(q, 3) <= resultCount) {
        std::cout << "Из них можно составить набор из " << pow(q, 3) << "  кубиков  " << " \n";
    }
    else {
        std::cout << "Из них можно составить набор из " << pow((q - 1), 3) << "  кубиков  " << " \n";
    }
}