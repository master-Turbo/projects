#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    float amplitude;
    float stopAmplitude;
    int counter = 1;

    std::cout << "Начальная амплитуда: \n";
    std::cin >> amplitude;
    std::cout << "Конечная амплитуда: \n";
    std::cin >> stopAmplitude;

    std::cout  << "Колебание \t" << counter << "\t Амплитуда \t" << amplitude<< "\n";
    do{
        amplitude = amplitude - ((8.4f * amplitude) / 100.0f);
        if(amplitude > stopAmplitude) {
            counter ++;
            std::cout << "Колебание \t" << counter << "\t Амплитуда \t" << amplitude << "\n";
        }
    }while(amplitude > stopAmplitude);
    std::cout << "Всего колебаний "<< counter<< "\n";
return 0;
}