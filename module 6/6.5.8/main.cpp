#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    int m, n;

    std::cout << "Введите первую часть дроби: \n";
    std::cin >> m;

    std::cout << "Введите вторую часть дроби: \n";
    std::cin >> n;

    int tmp;

    if (m < n) {
        tmp = m;
        //std::cout << "отладка 1  " << tmp << " \n";
    }
    else {
        tmp = n;
        //std::cout << "отладка 2  " << tmp << " \n";
    }

    while (tmp > 0) {
        if (m % tmp == 0 && n % tmp == 0) {
            m /= tmp;
            n /= tmp;
        }
        tmp--;
        //std::cout << " отладка . вычисление в цикле " << tmp << " \n";
    }
    std::cout << m << "/" << n << " \n";

    return 0;
}