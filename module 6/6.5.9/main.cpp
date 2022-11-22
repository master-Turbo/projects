#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    int x, y, p;
    std::cout << "Введите сумму вклада:  \n";
    std::cin >> x;
    std::cout << "Укажите, на сколько процентов в год увеличивается вклад?: \n";
    std::cin >> p;
    std::cout << "Для какой конечной суммы нужно посчитать время, необходимое для накопления?: \n";
    std::cin >> y;

    int percent;
    int iterations = 0;

    if (x >= 10) {
        percent = x * p / 100;
        //std::cout << "процент " << percent << "  \n";

        while (x < y) {
            x += percent;
            iterations++;
            //std::cout << "отладка " << x << " \n";
        }
        std::cout << "Необходимо " << iterations << " лет. \n";
    }
    else {
        std::cout << "Минимальный вклад 10. \n";
    }
    return 0;
}