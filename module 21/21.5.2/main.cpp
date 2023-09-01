#include<iostream>
#include<fstream>
#include<string>

using namespace std;

enum buildings_type
{
    house,
    garage,
    barn,
    bath
};

enum room_type
{
    bedroom,
    living_room,
    children_room,
    kitchen,
    bathroom
};

struct place
{
    int number = 0;
    int number_of_buildings = 0;
};

struct buildings
{
    string building_type = "unknown";
    int number_of_floors = 0;
    int number_of_rooms = 0;
    int square = 0;
};

int main()
{
    

    return 0;
}