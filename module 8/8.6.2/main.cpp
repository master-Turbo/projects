#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");

    int N, K;
    float T;
    std::cout << "Количество ручек  ";
    std::cin >> N;
    std::cout << "Количество положений ручек  ";
    std::cin >> K;
    std::cout << "Сколько времени дано на проверку одной комбинации  ";
    std::cin >> T;

    if (N <= 0 || K <= 0 || T <= 0) {
        std::cout << "Ошибка ввода.";
    }
    else {

        float number = pow((float)K, (float)N);

        std::cout << "Ответ: " << number * T;
    }
}
Line 5 : Col 7

History


Enable "Accessible Terminal" in Workspace Settings to use a screen reader with the console.
Booting ReplReady
Replit