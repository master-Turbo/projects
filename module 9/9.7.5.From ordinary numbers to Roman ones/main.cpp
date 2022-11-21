/*
Из обычных чисел — в римские
Напишите программу, которая переводит данное пользователем число в римскую запись. Например, 19 в римской записи представляется как XIX.
Римская запись числа получается по следующим правилам. 

    Сначала в ней идут буквы, описывающие количество тысяч в числе. Затем идут буквы,
        обозначающие количество сотен, затем буквы, обозначающие количество десятков, и в конце — буквы, обозначающие количество единиц. 

    Для записи используются следующие буквы: 1 — I, 5 — V, 10 — X, 50 — L, 100 — C, 500 — D и 1000 — M. 
    
    Число получается как сумма значений использованных в нем букв, за тем исключением, что если буква с меньшим значением идет перед буквой 
        с большим значением, то ее значение вычитается из значения числа. 
    
    Вычитание используется только в случае, когда надо передать цифру 4 или 9, в остальных случаях используется сложение. 
        (Например, 9 обозначается как IX, 40 обозначается как XL). 
    
    В числе запрещено писать более трех одинаковых букв подряд 
        (таким образом, максимальное число, которое можно записать по этим правилам, равно 3999).

Программе на вход дается целое число из диапазона от 1 до 3999. (Вы можете считывать его как число или как строку, если так удобнее.)
Программа должна вывести римскую запись данного числа.
Примеры:
Ввод: 351
Вывод: CCCLI
Ввод: 449
Вывод: CDXLIX
Ввод: 1313
Вывод: MCCCXIII
Ввод: 2020
Вывод: MMXX
*/

#include<iostream>

int main()
{
   int num;
   std::cin >> num;

   int thousands = num / 1000;
   int hundreds = num % 1000 / 100;
   int tens = num % 100 / 10;
   int units = num % 10;

   std::string result;
   for (int i = 0; i < thousands; i++){
       result += 'M';
   }
   
   if (hundreds == 4 || hundreds == 9){
       result+= 'C';
    }
   if (hundreds >= 4 && hundreds <= 8){
       result+= 'D';
    }
   if (hundreds == 9){
       result+= 'M';
    }
   if (hundreds % 5 < 4){
       for (int i = 0; i < hundreds % 5; i++){
            result += 'C';
       }
    }

       if (tens == 4 || tens == 9){
       result+= 'X';
    }
   if (tens >= 4 && tens <= 8){
       result+= 'L';
    }
   if (tens == 9){
       result+= 'C';
    }
   if (tens % 5 < 4){
       for (int i = 0; i < tens % 5; i++){
            result += 'X';
       }
    }

       if (units == 4 || units == 9){
       result+= 'I';
    }
   if (units >= 4 && units <= 8){
       result+= 'V';
    }
   if (units == 9){
       result+= 'X';
    }
   if (units % 5 < 4){
       for (int i = 0; i < units % 5; i++){
            result += 'I';
       }
    }
   
    std::cout << result;
   
    return 0;
}