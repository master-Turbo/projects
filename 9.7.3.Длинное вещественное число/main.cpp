/*
Длинное вещественное число
Вы решили разработать программу-калькулятор, которая складывает числа 
сколь угодно большой длины. Для этого вы планируете работать с ними как со строками. 
Первая проблема, с которой вы столкнулись, — по данной строке нужно понять, 
является она корректной записью вещественного числа или нет.
Корректной записью считается запись, удовлетворяющая следующим условиям. 

v Первым символом в ней должна быть либо цифра, либо знак минус. 
v После этого может идти еще несколько цифр (возможно, ни одной). 
v Затем может идти точка, отделяющая целую часть от дробной. 
До точки может и не быть цифр. В таком случае считается, что до точки стоит 0. 
После точки еще несколько цифр (возможно, ни одной). 
Хотя бы одна цифра в записи числа должна присутствовать.

(Для простоты в этой задаче мы не будем рассматривать числа в экспоненциальной записи,
такие как 1.2e-3. Напишите программу, которая получает от пользователя строку и выводит
в ответ Yes, если эта строка корректно задает вещественное число, в противном случае выводит No.
Примеры корректных записей:
0123
00.000
.15
165.
999999999999999999999999999999999.999999999999999999999
-1.0
-.35
*/

#include<iostream>
#include<string>

int main()
{
    std::string num;
    std::cout << "Enter the number:  \n";
    std::getline(std::cin, num);
    int numCount = 0;
    int point = 0;
    bool good = true;

    for (int i = 0; i < num.length(); i++){// пройтись по строке в поисках цифры
        if(num[i] >= '0' && num[i] <= '9'){
            //std::cout << "numCount \n" << numCount << "\n";
            numCount ++;
        }
    }
    
    if(numCount > 0){// пройтись по строке проверка первого символа
        if(num[0] == '-' || (num[0] >= '0' && num[0] <= '9') || num[0] == '.'){
            //std::cout << "good \n";
            for (int i = 1; i < num.length(); i++){// пройтись по строке проверка оставшихся символов
                if((num[i] >= '0' && num[i] <= '9') || num[i] == '.'){
                    if(num[i] == '.'){
                        point++;
                    }
                    if(point > 1){
                        good = false;
                    }
                }else{
                    good = false;
                }
            }
        }else{
            good = false;
        }   
    }else{
        good = false;
    }

    
    if (good == true){
        std::cout << "Yes \n";
    }else{
        std::cout << "No \n";
    }
    return 0;
}