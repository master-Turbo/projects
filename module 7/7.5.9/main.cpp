#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int signs;
    int length;
    std::cout << "Введите длину колонтитула: \n";
    std::cin >> length;
    std::cout << "Введите количество восклицательных знаков: \n";
    std::cin >> signs;

    int corr = 0; 
    
    if (signs % 2 == 0) {
        corr = 1;
    }
    
    for (int col = 0; col < length; col++) {

        if ((length / 2 - signs / 2) <= col && col <= (length / 2 + signs / 2 - corr)) {
            std::cout << "!";
        }
        else {
            std::cout << "-";
        }
    }
    std::cout << "\n";
}