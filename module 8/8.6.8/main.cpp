#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Программа для расчета работы антибиотика \n";
    std::cout << "Введите ингридиенты \n";
    int N,D,W;
    std::cout << "Вода: \n";
    std::cin >> W;
    std::cout << "Антибиотик: \n";
    std::cin >> D;
    std::cout << "Бактерии: \n";
    std::cin >> N;

    if(W <= 0 || D <= 0 || N <= 0){
        std::cout << "Данные введены неверно. \n";
    }else{
        int Nnew;
        int Nold = N;
        int efficiency = (20 * D) / 100; // 20 процентов от первоначальной эффективности антибиотика

        for(int time = 1; time <= 20; time ++){//симулирует процесс в течение 20 минут
            std::cout << time << " минута \n";
            if(Nnew > 0){
                Nnew = 2 * Nold - Nold * D / W;
            }else{
                std::cout << "Бактерии уничтожены! \n";
                break;
            }
            std::cout << "Остаток бактерий  в растворе " << Nnew << " \n";
            Nnew = Nold;
            if(D > 0){
                D -= efficiency;
            }
        }
    }
return 0;
}