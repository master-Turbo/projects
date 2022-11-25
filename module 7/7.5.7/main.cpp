#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    
    for (int row = 0; row < 26; row++) {
        for (int col = 0; col < 51; col++) {
            if (row == 0 && col == 25) {
                std::cout << "^";
            }else if (col == 25) {
                if (row != 13) {
                    std::cout << "|";
                }
                else {
                    std::cout << "+";
                }
            }else if (row == 13) {
                if (col == 50) {
                    std::cout << ">";
                }
                else {
                    std::cout << "-";
                }
            }else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}