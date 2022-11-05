/*
Многоквартирный дом
Что нужно сделать
На вход программе поступают десять фамилий в формате строк. Это фамилии жильцов квартир с первой по десятую. 
Необходимо прочитать эти фамилии и записать в одномерный массив. Далее пользователь вводит три номера квартир.
 Необходимо вывести в консоль фамилию жильца, проживающего в этой квартире. Если пользователь введёт
  некорректный номер квартиры, необходимо сообщить ему об этом.

Пример

← SidorovA 
← IvanovA 
← PetrovA 
← SidorovB 
← IvanovB 
← PetrovB 
← SidorovC 
← IvanovC 
← PetrovC 
← SidorovD 
←10 
→SidorovD 
←1 
→SidorovA 
←5 
→IvanovB

Что оценивается
Используется массив строк для хранения данных.
В коде не используются библиотеки, кроме <iostream> и <string>.
Программа проверяет доступность элемента по индексу и выдаёт корректный результат.

*/

#include <iostream>
#include <string>


int main()
{
    std::string arr [10];

    for (int i = 0; i < sizeof(arr)/sizeof(*arr); i++)
    {
        std::cout << "Input " << i + 1 << " family: ";
        std::string temp;
        std::cin >> temp;
        arr[i] = temp;
    }


    for(int i = 0; i < 3; i++)
    {
        int number;
        std::cout << "Enter the number of the apartment to find out who lives in it " << std::endl;    
        std::cin >> number;

        if (number >=0 && number <= sizeof(arr)/sizeof(*arr))
        {
            std::cout << arr[number - 1] << " lives in apartment " << number << std::endl;
        }
        else
        {
            std::cout << "There are only" << sizeof(arr)/sizeof(*arr) << "apartments in this house " << std::endl;
        }
    }
    return 0;
}