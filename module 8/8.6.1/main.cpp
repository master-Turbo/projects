#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "");

    float m, F, t;
    std::cout << "Введите массу корабля в килограммах: \n";
    std::cin >> m;
    std::cout << "Введите силу тяги двигателя в ньютонах на секунду: \n";
    std::cin >> F;
    std::cout << "Введите время полета в секундах:  \n";
    std::cin >> t;

    if (m < 0 || F < 0 || t < 0) {
        std::cout << "Введенные данные неверны \n";
    }
    else {

        float a = F / m;
        float distance = (a * (t * t)) / 2;

        std::cout << "За " << t << " секунд , при тяге " << F << " ньютон в секунду, корабль, массой " << m << " килограммов, пройдет " << distance << " метров \n";
    }
}