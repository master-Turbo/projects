#include <iostream>
enum switches
{
    LIGHTS_INSIDE = 1, 
    LIGHTS_OUTSIDE = 2, 
    HEATERS = 4, 
    WATER_PIPE_HEATING = 8, 
    CONDITIONER = 16 
};

int main() {
   std::cout << "Red: " << switches::LIGHTS_INSIDE << "\n";
   std::cout << "Orange: " << switches::LIGHTS_OUTSIDE << "\n";
   std::cout << "Green: " << switches::HEATERS << "\n";
   std::cout << "Blue: " << switches::WATER_PIPE_HEATING << "\n";
   std::cout << "Purple: " << switches::CONDITIONER << "\n";
   return 0;
}