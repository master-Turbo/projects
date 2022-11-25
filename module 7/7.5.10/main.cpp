#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    int height;
    std::cout << "Введите высоту елочки: \n";
    std::cin >> height;

    if (height <= 0) {
        std::cout << "Введенное число не может быть меньше 1.\n";
    }
    else {
        int width = 2 * height - 1;
        for (int row = 1; row <= height; row++) {
            int signs = 2 * row - 1;
            std::cout << "\n";
            for (int col = 0; col < width; col++) {
                if ((width / 2 - signs / 2) <= col && col <= (width / 2 + signs / 2)) {
                    std::cout << "#";
                }
                else {
                    std::cout << " ";
                }
            }
        }
    }
}