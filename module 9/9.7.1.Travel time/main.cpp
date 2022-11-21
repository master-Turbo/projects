/*
Время в пути
Поезд отправляется в AA часов BB минут и прибывает в пункт назначения в CC часов DD минут. 
Сколько часов и минут он находится в пути?
Напишите программу, которая принимает от пользователя две строки — время отправления и время прибытия поезда.
 Время задается строкой из 5 символов в формате HH:MM. 
Обеспечьте контроль ввода, проверьте также, что время корректно.
Программа должна ответить, сколько часов и минут поезд находится в пути. 
Если время отправления больше времени прибытия, считайте, что поезд прибывает в пункт назначения на 
следующий день.
Примеры:
Введите время отправления: 07:15
Введите время прибытия: 16:55
Поезд находится в пути 9 часов 40 минут
Введите время отправления: 21:10
Введите время прибытия: 08:05
Поезд находится в пути 10 часов 55 минут
*/

#include<iostream>
#include<string>

int main()
{
    //ввод данных
    std::string departureTime;
    std::string arrivalTime;
    std::cout<<"Enter departure time:  \n";
    std::cin >> departureTime;
    std::cout << "Enter arrival time: \n";
    std::cin >> arrivalTime;

    int departureTimeMin = 0;
    int arrivalTimeMin = 0;
    int time = 0;
    int HH = 0;
    
    //проверка длины и формата входных строк
    if(departureTime.length() != 5 || arrivalTime.length() != 5 
            || departureTime[2] != ':' || arrivalTime[2] != ':' 
            || (departureTime[0] - '0') * 10 + (departureTime[1] - '0') < 0 
            || (departureTime[0] - '0') * 10 + (departureTime[1] - '0') > 23 
            || (departureTime[3] - '0') * 10 + (departureTime[4] - '0') < 0 
            || (departureTime[3] - '0') * 10 + (departureTime[4] - '0') > 59 
            || (arrivalTime[0] - '0') * 10 + (arrivalTime[1] - '0') < 0 
            || (arrivalTime[0] - '0') * 10 + (arrivalTime[1] - '0') > 23
            || (arrivalTime[3] - '0') * 10 + (arrivalTime[4] - '0') < 0 
            || (arrivalTime[3] - '0') * 10 + (arrivalTime[4] - '0') > 59){
        std::cout << "Wrong input! Enter time in HH:MM format  \n";
    }else{
        //перевод символов строк в целочисленные переменные в минутах

        departureTimeMin = (((departureTime[0] - '0') * 10 + (departureTime[1] - '0')) 
                * 60) + (((departureTime[3] - '0') * 10) + (departureTime[4] - '0'));

        arrivalTimeMin =   (((arrivalTime[0] - '0') * 10 + (arrivalTime[1] - '0')) 
                * 60) + (((arrivalTime[3] - '0') * 10) + (arrivalTime[4] - '0'));
        
        //std::cout << "departureTimeMin " << departureTimeMin << " \n";
        //std::cout << "arrivalTimeMin " << arrivalTimeMin << " \n";
        
        if (departureTimeMin < arrivalTimeMin){
            time = arrivalTimeMin - departureTimeMin;
        }else if (departureTimeMin > arrivalTimeMin){
            time =  (1440 - departureTimeMin) + arrivalTimeMin;
        }else{
            time = 24 * 60;
        }
        //std::cout << "time " << time << " \n";
        if (time >= 60){
            while (time >= 60){
                HH ++;
                time -= 60;
            }
        }
        std::cout << "The train is on the way " << HH << " hours " << time << " minutes \n";
        std::cout << "\n";
    }
return 0;
}