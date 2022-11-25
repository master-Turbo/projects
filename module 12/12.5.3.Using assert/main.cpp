#include <iostream>
#include <cassert>


float travelTime(float distance, float speed)
{
    assert(distance >= 0);
    assert(speed >= 0);
    return distance/speed;
}

int main()
{
    float distance;
    float speed;

    std::cout << "Enter the distance and speed to find out the travel time: " << std::endl;
    std::cin >> distance >> speed;

    std::cout << travelTime(distance,speed) << std::endl;
    return 0;
}