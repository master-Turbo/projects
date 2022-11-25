#include <iostream>
#include<cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "");

    float healthPoints;
    float magicResistance;
    float damage;
    std::cout << "Очки здоровья: \n";
    std::cin >> healthPoints;
    std::cout << "Cопротивляемость магии: \n";
    std::cin >> magicResistance;

    if (healthPoints < 0 || healthPoints > 1 || magicResistance < 0 || magicResistance > 1) {
        std::cout << "Ошибка ввода.";
    }
    else {
        while (healthPoints > 0) {
            std::cout << "У Орка " << healthPoints << " здоровья \n";
            std::cout << "Cопротивляемость магии равна " << magicResistance << " \n";
            std::cout << "С какой силой будет огненный шар?   \n";
            std::cin >> damage;
            if (damage > magicResistance) {
                healthPoints -= fabs(damage - magicResistance);
            }
        }
        std::cout << "Орк погиб! \n";
    }

}