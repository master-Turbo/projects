#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
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
    int outside_temperature;
    int inside_temperature;
    string movement_outside;
    string the_INSIDE_light_is_on;
    string input_data;

    while (time != 48)
    {
        cout << "Time 0" << time << ":00"<< endl;
        cout << "Enter the status of the sensors via the space sign : " << endl;
        cout << "(outside temperature, " << endl;
        cout << " inside temperature, " << endl;
        cout << " is there movement outside, " << endl;
        cout << " is the light on in the house)" << endl;

        cin >> input_data;
        stringstream temp_stream(input_data);
        temp_stream >> outside_temperature >> inside_temperature >> movement_outside >> the_INSIDE_light_is_on;

        bool switches_outside_temperature_state;
        bool switches_inside_temperature_state;
        bool switches_movement_outside_state;
        bool switches_the_INSIDE_light_is_on;


        // условия

        if (outside_temperature < 0) (switches_outside_temperature_state = true) |= WATER_PIPE_HEATING;
        if (outside_temperature > 5) (switches_outside_temperature_state = false) &= ~WATER_PIPE_HEATING;
        if (inside_temperature < 22) (switches_inside_temperature_state = true) |= HEATERS;
        if (inside_temperature > 25) (switches_inside_temperature_state = false) &= ~HEATERS;
        if (inside_temperature >= 30) (switches_inside_temperature_state = true) |= CONDITIONER;
        if (inside_temperature == 25) (switches_inside_temperature_state = false) &= ~CONDITIONER;
        if (the_INSIDE_light_is_on == "on") (switches_the_INSIDE_light_is_on = true) |= LIGHTS_INSIDE;
        if (the_INSIDE_light_is_on == "off") (switches_the_INSIDE_light_is_on = false) &= ~LIGHTS_INSIDE;
        if ((time > 16 && time < 5 && movement_outside = 1) || (time > 16 : 00 &&time < 05 : 00 &&movement_outside = 0) || movement_outside = 1) switches_state |= LIGHTS_OUTSIDE;
        else switches_state &= ~LIGHTS_OUTSIDE;
        // if (time >= 16 : 00 && time < 17 : 00) switches_state |= LIGHTS_INSIDE;
        // if (time >= 17 : 00 && time < 18 : 00) switches_state |= LIGHTS_INSIDE;
        // if (time >= 18 : 00 && time < 19 : 00) switches_state |= LIGHTS_INSIDE;
        // if (time >= 19 : 00 && time < 20 : 00) switches_state |= LIGHTS_INSIDE;
        // if (time == 00 : 00) cout << "LIGHTS INSIDE color temperature: 5000K " << endl;
        
        ++time;

        // switch (expression)
        // {
        // case /* constant-expression */:
        //     /* code */
        //     break;
        
        // default:
        //     break;
        // }
        
    }

    return 0;
}