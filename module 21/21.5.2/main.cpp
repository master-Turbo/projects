#include<iostream>
#include<fstream>
#include<string>
#include <vector>

using namespace std;

enum room_type
{
    bedroom,
    kitchen,
    bathroom,
    children,
    living
};

enum building_type
{
    house,
    garage,
    barn
};

struct room
{
    string room_type;
    int room_area;
};

struct floor
{
    int floors_number;
    int ceiling_height;
    vector<room> rooms; 
};

struct building
{
    string building_type;
    vector<floor> floors;
};

struct plot
{
    int number;
    vector<building> buildings;
    double area;
};

struct village
{
    vector<plot> plots;
};


int main()
{
    cout << "Заполните данные" << endl;


    return 0;
}