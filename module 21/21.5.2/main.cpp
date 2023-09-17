#include<iostream>
#include<fstream>
#include<string>
#include <vector>

using namespace std;

double area(string object_name)
{
    double result = 0;
    cout << "укажите площадь " << object_name << endl;
    cin >> result;// указать площадь
    
    // сделать проверку на корректность ввода!
    return result;
}

enum room_type
{
    living = 1,
    bedroom,
    kitchen,
    bathroom,
    children
};

enum building_type
{
    house = 1,
    garage,
    bathhouse,
    barn
};

struct room
{
    int room_type;
    double room_area;
};

struct floor
{
    int floors_number;
    int ceiling_height;
    vector<room> rooms; 
};

struct building
{
    int building_type;
    double building_area;
    bool stove = false;
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
    village new_village;//создаем экземпляр поселка
    cout << "Заполните данные" << endl;
    int count = 0;
    cout << "сколько участков планируется создать?" << endl;
    cin >> count;
    for (int i = 1; i <= count; i++)// цикл заполнения данных
    {
        cout << "добавить участок" << endl;
        // добавить новый участок
        plot new_plot;// создаем экземпляр участка
        new_plot.number = i;// добавить номер участка
        new_plot.area = area("участка");// добавить площадь участка
        // добавить строение
        building new_building;// создаем экземпляр строения
        cout << "выберите тип строения" << endl;
        cout << "дом - 1, гараж - 2, баня - 3, сарай(хозпостройка) - 4" << endl;
        int enum_building_type = 0;
        cin >> enum_building_type;
        switch (enum_building_type)
        {
        case 1:
            {
                new_building.building_type = building_type::house;// выбираем тип строения дом
                new_building.building_area = area("дома");// указать площадь дома
                cout << "есть ли в доме печь с трубой? (1 - да, 0 - нет)" << endl;
                cin >> new_building.stove;// указать есть ли печь
                cout << "сколько этажей в здании? (1 - 3)" << endl;
                int floor_count = 0;
                cin >> floor_count;// указать сколько этажей в здании
                for (int i = 1; i <= floor_count; i++)//добавляем этажи 
                {
                    floor new_floor;// создать экземпляр этажа
                    new_floor.floors_number = i;// указать номер этажа
                    cout << "укажите высоту этажа" << endl;
                    cin >> new_floor.ceiling_height;// указать высоту этажа
                    int rooms_count = 0;
                    cout << "сколько комнат на этаже? (2 - 4)" << endl;
                    cin >> rooms_count;// указать сколько комнат на этаже
                    for (int i = 1; i <= rooms_count; i++)// добавить комнату
                    {
                        room new_room;// создаем экземпляр комнаты
                        cout << "выберите тип комнаты" << endl;
                        cout << "гостиная - 1, спальня - 2, кухня - 3, санузел - 4, детская - 5" << endl;
                        int enum_room_type = 0;
                        cin >> enum_room_type;
                        switch (enum_room_type)
                        {
                        case 1:
                            new_room.room_type = room_type::living;// выбираем тип комнаты гостинная
                            break;
                        case 2:
                            new_room.room_type = room_type::bedroom;// выбираем тип комнаты спальня
                            break;
                        case 3:
                            new_room.room_type = room_type::kitchen;// выбираем тип комнаты кухня
                            break;
                        case 4:
                            new_room.room_type = room_type::bathroom;// выбираем тип комнаты санузел
                            break;
                        case 5:
                            new_room.room_type = room_type::children; // выбираем тип комнаты детская
                            break;
                        }
                        new_room.room_area = area("комнаты");// указать площадь

                        new_floor.rooms.push_back(new_room);
                    }

                    new_building.floors.push_back(new_floor);
                }
            }
            break;

        case 2:
            {
                new_building.building_type = building_type::garage;// выбираем тип строения гараж
                new_building.building_area = area("гаража");// указать площадь гаража
            }
            break;
               
        case 3:
            {
                new_building.building_type = building_type::bathhouse;// выбираем тип строения баня
                new_building.building_area = area("бани");// указать площадь бани
                cout << "есть ли в доме печь с трубой? (1 - да, 0 - нет)" << endl;
                cin >> new_building.stove;// указать есть ли печь
            }
            break;
        
        case 4:
            {
                new_building.building_type = building_type::barn;// выбираем тип строения бытовка
                new_building.building_area = area("бытовки");// указать площадь бытовки
            }
            break;
        }

        new_plot.buildings.push_back(new_building);
        new_village.plots.push_back(new_plot);
    }

    return 0;
}