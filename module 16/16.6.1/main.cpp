#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    char speed_str [8] = {};
    float speed_value = 0;
    float change_speed = 0;

    do
    {
        cout << "Change the speed to : ";
        // с помощью cin заполняем строку
        cin >> change_speed;
        speed_value += change_speed;
        
        if (speed_value > 150)
        {
            cout << "Speed limit 150 " << endl;
            speed_value = 150;     
            cout << endl;       
        }

        if (speed_value < 0)
        {
            speed_value = 0;
            cout << endl;
        }
        
        // sprintf принимает float и выдает char[]
        sprintf(speed_str, "%.1f", speed_value);

        cout << "Current speed: " << speed_str << endl;
        cout << endl;
        
    } while (speed_value > 0.1);
    
    return 0; 
}