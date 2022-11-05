/*Ряд чисел* (дополнительное задание)
Что нужно сделать
В программе инициализирован массив из 15 целых положительных чисел. Эти числа являются множеством из 14 
последовательных чисел, начиная с Х (Х может быть любым), а одно число из ряда повторяется. 
Необходимо найти повторяющееся число и вывести его в консоль. По возможности используйте минимум 
дополнительной памяти и проходов по массиву.

Пример

int numbers[15] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118} 
В данном примере Х — это 105, а повторяющееся число — 108.
*/


#include <iostream>
using namespace std;

int main()
{
    int numbers[15] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118};
	int min = 2147483647;
	int max = 0;
	int sum_of_natural_numbers = 0;
	int sum_specified_array_elements = 0;

    for(int i = 1; i < sizeof(numbers)/sizeof(*numbers); i++)// найти минимальное и максимальное значение в массиве
    {
        if(numbers[i] < min)
        {
            min = numbers[i];
        }
		if(numbers[i] > max)
		{
			max = numbers[i];
		}
    }

	if((max - min) < (sizeof(numbers)/sizeof(*numbers) - 1))// найти есть ли повторяющееся значение в массиве
	{
		for (int i = 0; i <= max - min; i++)// найти сумму чисел от минимального до максимального
		{
			sum_of_natural_numbers += min + i;
		}

		for (int i = 0; i < sizeof(numbers)/sizeof(*numbers); i++)// найти сумму имеющихся в массиве чисел
		{
			sum_specified_array_elements += numbers[i];
		}

		// std::cout << "sum_of_natural_numbers: "<< sum_of_natural_numbers << std::endl;
		// std::cout << "sum_specified_array_elements: "<< sum_specified_array_elements << std::endl;
		cout << "Duplicate value: "<< sum_specified_array_elements - sum_of_natural_numbers << endl;
	}
	else
	{
		cout << "There are no duplicate values" << endl;
	}

	return 0;
}