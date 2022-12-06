#include<iostream>
#include<string>
#include<sstream>
#include<ctime>
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
    string time = "00:00";
    int outside_temperature;
    int inside_temperature;
    int movement_outside;
    int the_light_is_on;
    string input_data;

    cout << "Time " << time << endl;
    cout << "Enter the status of the sensors via the space sign : " << endl;
    cout << "(outside temperature, " << endl;
    cout << " inside temperature, " << endl;
    cout << " is there movement outside, " << endl;
    cout << " is the light on in the house)" << endl;
    
    cin >> input_data;
    stringstream temp_stream(input_data);
    temp_stream >> outside_temperature >> inside_temperature 
                >> movement_outside >> the_light_is_on;
    
// условия

    if (outside_temperature < 0) switches_state |= WATER_PIPE_HEATING;
    if (outside_temperature > 5) switches_state &= ~WATER_PIPE_HEATING;
    if (inside_temperature < 22) switches_state |= HEATERS;
    if (inside_temperature > 25) switches_state &= ~HEATERS;
    if (inside_temperature >= 30) switches_state |= CONDITIONER;
    if (inside_temperature == 25) switches_state &= ~CONDITIONER;
    // if ((time > 16:00 && time < 05:00 && movement_outside = 1)
    //     || (time > 16:00 && time < 05:00 && movement_outside = 0)
    //     || movement_outside = 1) switches_state |= LIGHTS_OUTSIDE;
    // else  switches_state &= ~LIGHTS_OUTSIDE;
    // if (time >= 16:00 && time < 17:00) switches_state |= LIGHTS_INSIDE;
    // if (time >= 17:00 && time < 18:00) switches_state |= LIGHTS_INSIDE;
    // if (time >= 18:00 && time < 19:00) switches_state |= LIGHTS_INSIDE;
    // if (time >= 19:00 && time < 20:00) switches_state |= LIGHTS_INSIDE;
    // if (time == 00:00) cout << "LIGHTS INSIDE color temperature: 5000K " << endl;




    return 0;
}