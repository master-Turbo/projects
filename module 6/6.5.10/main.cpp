#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Играем в угадайку! Загадайте число от 0 до 63! \n";
    
    int min = 1;
    int max = 63;
    int mid;
 
    std::string answer;
 
    while(min != max)
    {
        mid = (max + min) / 2;
        std::cout << "Задуманное число меньше " << mid << "? (y/n) Если Задуманное число равно " << mid << " , нажмите (r) \n";
        std::cin >> answer;
 
        if (answer == "y") {
            max = mid;
        }
        else if (answer == "n") {
            min = mid;
        }
        else if (answer == "r") {
            min = mid;
            break;
        }

        std::cout << " " << min << " : " << max << " \n";
    }
 
    std::cout << "Ваше число =  " << min << "\n";
    
    return 0;
}