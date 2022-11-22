#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int water;
    int milk;
    int coffee;
    for (;;) {

        std::cout << "Сколько мл воды залито в кофемашину? \n";
        std::cin >> water;
        std::cout << "Сколько мл молока залито в кофемашину? \n";
        std::cin >> milk;

        while (water > 0 && milk > 0) {

            std::cout << " \n";
            std::cout << "Какой напиток вы хотите? Американо = 1, Латте = 2 \n";
            std::cin >> coffee;
            if (coffee == 1) {
                if (water > 300) {
                    std::cout << "Вы выбрали Американо \n";
                    water -= 300;
                }
                else {
                    break;
                }
            }
            else if (coffee == 2) {
                if (water > 30 && milk > 270) {
                    std::cout << "Вы выбрали Латте \n";
                    water -= 30;
                    milk -= 270;
                }
                else {
                    break;
                }
            }
            else {
                std::cout << "Некорректный ввод, повторите попытку! \n";
            }
            std::cout << " \n";
            std::cout << "остаток воды " << water << " \n";
            std::cout << "остаток молока " << milk << " \n";
        }
        std::cout << "Необходимо заправить кофемашину! \n";
        std::cout << " \n";
    }
    return 0;
}