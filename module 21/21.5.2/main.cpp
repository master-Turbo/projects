#include<iostream>
#include<fstream>
#include<string>
#include <vector>

using namespace std;

enum rooms_type
{
    bedroom,
    kitchen,
    bathroom,
    children,
    living
};

struct room
{
    string rooms_type;
    int room_area;
};


struct floor
{
    int floors_number;
    int ceiling_height;
    vector<room> rooms; 
};


enum buildings_type
{
    house,
    garage,
    bathroom,
    barn
};

struct buildings
{
    string buildings_type;
    vector<floor> floors;
};


struct plot
{
    int number;
    vector<buildings> buildings;
    double area;
};


struct village
{
    vector<plot> plots;
};


int main()
{
    

    return 0;
}