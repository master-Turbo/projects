#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    float distance;
    float runningPace;
    float result;
    float pacePerKilometer = 0;

    std::cout<<"Привет, Сэм! Сколько километров ты сегодня пробежал? \n";
    std::cin >> distance;
    for(int x = 0; x < distance; x++){
        std::cout<<"Какой у тебя был темп на километре " << x + 1 << " \n";
        std::cin >> runningPace;
        pacePerKilometer += (runningPace / 1);
        //std::cout << "общее время бега " << pacePerKilometer << " секунд \n";
    }
    result = pacePerKilometer / distance;//средний темп в секундах
    //std::cout << "Средний темп в секундах " << result << " \n";
    int minutes = (float) result / 60;
    int seconds = (float) result - minutes * 60;
    std::cout << "Твой средний темп за тренировку: " << minutes << " минут и " << seconds << " секунд \n";
    return 0;
}