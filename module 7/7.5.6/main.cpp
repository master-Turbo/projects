#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    int r;
    int c;
    std::cout << "Введите высоту: \n";
    std::cin >> r;
    std::cout << "Введите ширину: \n";
    std::cin >> c;

    for (int row = 0; row < r; row++) {
        for (int col = 0; col < c; col++) {
            if (col == 0 || col == c - 1) {
                std::cout << "|";
            }else if (row == 0 || row == r - 1) {
                std::cout << "-";
            }
            else {
                std::cout << " ";
            }
            
        }
        std::cout << " \n";
    }
}