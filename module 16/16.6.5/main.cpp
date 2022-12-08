#include <iostream>
#include <string>
#include <sstream>

using namespace std;

enum switches
{
    LIGHTS_INSIDE = 1,
    LIGHTS_OUTSIDE = 2,
    HEATERS = 4,
    WATER_PIPE_HEATING = 8,
    CONDITIONER = 16
};

int main()
{
    int time = 0;
    int day = 1;
    int outside_temperature;
    int inside_temperature;
    string movement_outside;
    string the_inside_light;
    string input_data;

    // Каждый час пользователь сообщает состояние всех основных датчиков и света 
    //      (температура снаружи, температура внутри, есть ли движение снаружи, включён ли свет в доме).
    // Данные параметры вводятся разом в одну строку через пробел, 
    //      а потом парсятся в переменные из строкового буфера stringstream.
    // Информация о движении выводится в формате yes/no.
    // Включение и отключение света происходит с помощью on/off.

    while (day != 2 && time != 23)
    {
        if (time < 23 && day == 1)
        {
            cout << "+====================================================+" << endl;
            cout << "| Time 0" << time << ":00                                         |"<< endl;
            cout << "|                                                    |"<< endl;
        }
        if (time > 23 ) 
        {
            day = 2;
            time = 0;
            cout << "|                                                    |"<< endl;
            cout << "| Time 0" << time << ":00                                         |"<< endl;
            cout << "|                                                    |"<< endl;
        }
        
        cout << "| Enter the status of the sensors via the space sign:|" << endl;
        cout << "| outside temperature          (🌡 C)                 |" << endl;
        cout << "| inside temperature           (🌡 C)                 |" << endl;
        cout << "| is there movement outside    (yes/no)              |" << endl;
        cout << "| is the light on in the house (on/off)              |" << endl;
        cout << "|                                                    |"<< endl;
        cout << "+----------------------------------------------------+" << endl;

        getline(cin, input_data);
        cout << "+----------------------------------------------------+" << endl;

        stringstream temp_stream(input_data);
        temp_stream >> outside_temperature >> inside_temperature >> movement_outside >> the_inside_light;

        bool switches_outside_temperature_state;
        bool switches_inside_temperature_state;
        bool switches_movement_outside_state;
        bool switches_the_inside_light;
        bool switches_the_outside_light;


        // условия
        // Как только температура снаружи падает ниже 0 °С, 
        //      надо включить систему обогрева водопровода. 
        // Если температура снаружи поднялась выше 5 °С, 
        //      то систему обогрева водопровода нужно отключить.

        if (outside_temperature < 0)
        {
             (switches_outside_temperature_state = true) |= WATER_PIPE_HEATING;
             cout << "| WATER PIPE HEATING on                              |" << endl;
        }
        if (outside_temperature > 5)
        {
            (switches_outside_temperature_state = false) &= ~WATER_PIPE_HEATING;
             cout << "| WATER PIPE HEATING off                             |" << endl;
        }

        // Если температура в помещении упала ниже 22 °С, 
        //      должно включиться отопление. 
        // Как только температура равна или поднимается выше 25 °С, 
        //      отопление автоматически отключается.

        if (inside_temperature < 22)
        {
            (switches_inside_temperature_state = true) |= HEATERS;
            cout << "| HEATERS on                                         |" << endl;
        }
        if (inside_temperature > 25)
        {
            (switches_inside_temperature_state = false) &= ~HEATERS;
            cout << "| HEATERS off                                        |" << endl;
        }

        // Если температура в помещении поднялась до 30 °С, включается кондиционер. 
        // Как только температура становится 25 °С, кондиционер отключается.

        if (inside_temperature >= 30)
        {
            (switches_inside_temperature_state = true) |= CONDITIONER;
            cout << "| CONDITIONER on                                     |" << endl;
        }
        if (inside_temperature == 25)
        {
            (switches_inside_temperature_state = false) &= ~CONDITIONER;
            cout << "| CONDITIONER off                                    |" << endl;
        }

        // Если на дворе вечер (время больше 16:00 и меньше 5:00 утра) и 
        //      снаружи есть какое-то движение, то необходимо включить садовое освещение. 
        // Если движения нет или время не вечернее, то света снаружи быть не должно.

        if ((time > 16 && time < 5 && movement_outside == "yes") || 
            (time > 16 && time < 5 && movement_outside == "no"))
        {
            (switches_the_outside_light = true) |= LIGHTS_OUTSIDE;
            cout << "| LIGHTS OUTSIDE on                                  |"<< endl;
        } 
        else 
        {
            (switches_the_outside_light = false) &= ~LIGHTS_OUTSIDE;
            cout << "| LIGHTS OUTSIDE off                                 |"<< endl;
        }
        // Всё освещение в доме также умное и поддерживает настройку цветовой температуры 
        //      для комфортного нахождения. Каждый день начиная с 16:00 и до 20:00 температура 
        //      цвета должна плавно изменяться с 5000K до 2700К. 
        // Разумеется, это изменение должно происходить, если свет сейчас включён. 
        // В 00:00 температура сбрасывается до 5000К.

        if (the_inside_light == "on")
        {
            (switches_the_inside_light = true) |= LIGHTS_INSIDE;
            cout << "| LIGHT INSIDE on                                    |" << endl;

            if (time >= 16 && time < 17) cout << "| LIGHTS INSIDE color temperature: 5000K             |" << endl;
            if (time >= 17 && time < 18) cout << "| LIGHTS INSIDE color temperature: 4300K             |" << endl;
            if (time >= 18 && time < 19) cout << "| LIGHTS INSIDE color temperature: 3400K             |" << endl;
            if (time >= 19 && time < 20) cout << "| LIGHTS INSIDE color temperature: 2700K             |" << endl;
            if (time == 00) cout << "| LIGHTS INSIDE color temperature: 5000K             |" << endl;
        }
        if (the_inside_light == "off")
        {
            (switches_the_inside_light = false) &= ~LIGHTS_INSIDE;
            cout << "| INSIDE_LIGHT off                                   |" << endl;
        }
        
        ++time;

        cout << "+====================================================+" << endl;
    }

    return 0;
}