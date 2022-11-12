/*
Сортировка
Что нужно сделать
Пользователь вводит в консоль 15 дробных чисел. Необходимо прочитать их и вывести 
в консоль в порядке от большего к меньшему. По возможности используйте минимум 
дополнительной памяти и проходов по массиву.

Пример
Ввод: 1.2 2.3 1.11 3.4 5.5 5.4 5.3 5.1 1.5 1.25 5.41 5.31 5.11 1.51 1.251 
Вывод: 5.5 5.41 5.4 5.31 5.3 5.11 5.1 3.4 2.3 1.51 1.5 1.251 1.25 1.2 1.11

Рекомендации по выполнению
Воспользуйтесь дополнительными материалами.

Об алгоритмах:

Описание алгоритмов сортировки и сравнение их производительности
Структуры данных: двоичная куча (binary heap)
Подробнее о сложности и нотации большого O:

Оценка сложности алгоритмов, или Что такое О(log n)
Как посчитать сложность алгоритма по BIG O
Об алгоритмах сортировок, у которых сложность меньше O(n^2).

HeapSort имеет сложность n*log(n):

Пирамидальная сортировка (HeapSort)
HeapSort
MergeSort имеет сложность n*log(n):

Описание алгоритмов сортировки и сравнение их производительности
MergeSort
Что оценивается
Используется массив чисел с плавающей точкой для хранения данных.
В коде не используются библиотеки, кроме <iostream>.
Программа корректно использует обращения по индексам и выдаёт правильный ответ.
Асимптотическая сложность алгоритма не более O(n^2).
Числа выводятся от большего к меньшему.

*/


#include <iostream>
#include <array>

/*
int main()
{
    float numbers [15];

    for (int i = 0; i < sizeof(numbers)/sizeof(*numbers); i++)
    {
        float num = 0.0f;
        std::cout << "Input number " << std::endl;
        std::cin >> num;
        numbers[i] = num;
    }

    int offset = 0;
    float temp = 0.0f;
    int checked_array_size = sizeof(numbers)/sizeof(*numbers) - 2;

   while(checked_array_size >= 2)
    {
        for(int i = 0; i <= checked_array_size; i++)
        {
            if(numbers [i] != numbers [i + 1] && (numbers [i] < numbers [i + 1]))
            {
                temp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = temp;
            }

        }

        checked_array_size --;
    }
    
    std::cout << std::endl;

    for (int i = 0; i < sizeof(numbers)/sizeof(*numbers); i++)
    {
        std::cout << numbers[i] << std::endl;
    }
    

    return 0;
}
*/

void bubblesort(float* l, float* r) {
	float sz = r - l;
	if (sz <= 1) return;
	bool b = true;
	while (b) {
		b = false;
		for (float* i = l; i + 1 < r; i++) {
			if (*i > *(i + 1)) {
				std::swap(*i, *(i + 1));
				b = true;
			}
		}
		r--;
	}
}
 
int main()
{
 
    float arr [15] = {1.2, 2.3, 1.11, 3.4, 5.5, 5.4, 5.3, 5.1, 1.5, 1.25, 5.41, 5.31, 5.11, 1.51, 1.251};

    // for (int i = 0; i < sizeof(arr)/sizeof(*arr); i++)
    // {
    //     float num = 0.0f;
    //     std::cout << "Input number " << std::endl;
    //     std::cin >> num;
    //     arr[i] = num;
    // }


    bubblesort(&arr[0], &arr[sizeof(arr)/sizeof(*arr)]);

    

    std::cout << std::endl;

    for (int i = 0; i < sizeof(arr)/sizeof(*arr); i++)
    {
        std::cout << i << " "<< arr[i] << std::endl;
    }


    return 0;
}