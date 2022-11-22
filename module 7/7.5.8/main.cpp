#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    for (int row = 0; row < 2; row++) {
        if (row == 1) {
            std::cout << "| MAGOMED |";
        }
        std::cout << "\n";
        for (int col = 0; col < 11; col++) {
            if (col == 0 || col == 10) {
            std::cout << "|";
            }
            else {
                std::cout << "-";
            }
        }
        std::cout << "\n";
    }
}