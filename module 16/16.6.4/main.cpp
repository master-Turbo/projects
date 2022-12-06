#include <iostream>
#include <string>
using namespace std;

enum notes
{
    DO = 1,
    RE = 2,
    MI = 4,
    FA = 8,
    SOL = 16,
    LA = 32,
    SI = 64
};

int main()
{
    const int size = 12;
    string melody[size];

    // заполним массив строк
    for (int i = 0; i < size; ++i)
    {
        cin >> melody[i];
    }

    for (int i = 0; i < size; ++i) //взять каждую строку в массиве
    {
        for (int j = 0; j < melody[i].length(); ++j) //взять каждый символ строки
        {
            for (int k = j + 1; k < melody[i].length(); ++k) //найти повторяющиеся символы
            {
                if (melody[i][j] == melody[i][k])
                {
                    melody[i].erase(melody[i].begin() + k); //удалить повторяющиеся символы
                    k--;
                }
            }
        }
    }

    for (int i = 0; i < size; ++i) //взять каждую строку в массиве
    {
        for (int k = 0; k < melody[i].length(); ++k)
        {
            int temp = (melody[i][k]) - '0'; //привести к целочисленному виду и прогнать через  enum

            if ((1 << temp - 1) & DO)
            {
                std::cout << "DO ";
            }
            if ((1 << temp - 1) & RE)
            {
                std::cout << "RE ";
            }
            if ((1 << temp - 1) & MI)
            {
                std::cout << "MI ";
            }
            if ((1 << temp - 1) & FA)
            {
                std::cout << "FA ";
            }
            if ((1 << temp - 1) & SOL)
            {
                std::cout << "SOL ";
            }
            if ((1 << temp - 1) & LA)
            {
                std::cout << "LA ";
            }
            if ((1 << temp - 1) & SI)
            {
                std::cout << "SI ";
            }
        }

        cout << endl;
    }

    return 0;
}