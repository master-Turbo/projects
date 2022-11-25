#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    int bacteria;
    int antibiotic;

    std::cout << "Введите количество бактерий: \n";
    std::cin >> bacteria;
    std::cout << "Введите количество антибиотика: \n";
    std::cin >> antibiotic;

    int antibioticEffect = 10;
    int bacteriaKill = 0;

    while (bacteria > 0 && antibioticEffect > 0) {
        std::cout << "Осталось бактерий в начале часа: " << bacteria << " \n";
        std::cout << antibioticEffect << "    Эффект антибиотика \n";

        bacteria *= 2;
        bacteriaKill = antibiotic * antibioticEffect;
        bacteria -= bacteriaKill;
        antibioticEffect--;

        std::cout << bacteriaKill << "  Сколько бактерий убил антибиотик \n";
        std::cout << "Осталось бактерий в конце часа: " << bacteria << " \n";
        std::cout << "******************************************************* \n";

    }
}