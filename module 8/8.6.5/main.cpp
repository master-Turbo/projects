#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    float fileSize;
    float loadSpeed;
    std::cout << "Ввод \n";
    std::cout << "Укажите размер файла для скачивания: \n";
    std::cin >> fileSize;
    std::cout << "Какова скорость вашего соединения? \n";
    std::cin >> loadSpeed;
    std::cout << "Вывод \n";
    int time = 0;
    float currentLoadSize = .0f;
    float persent;
    while (fileSize > currentLoadSize) {
        if((currentLoadSize + loadSpeed) > fileSize){
            currentLoadSize = fileSize;
        }else{
            currentLoadSize += loadSpeed;
        }
        persent = currentLoadSize * 100.0f / fileSize;
        time++;
        std::cout << "Прошло" << time << " сек. Скачано " << currentLoadSize << " из " << fileSize << " МБ (" << persent <<" %). \n";
    }
    return 0;
}