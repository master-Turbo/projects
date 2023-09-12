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
    int count = 0;
    cout << "сколько участков планируется создать?" << endl;
    cin >> count;
    for (int i = 1; i <= count; i++)// цикл заполнения данных
    {
        cout << "добавить участок" << endl;
        village new_village;//создаем экземпляр поселка
        // добавить новый участок
        // для этого
        plot new_plot;// создаем экземпляр участка
        new_plot.number = i;// добавить номер участка
        new_plot.area = area("участка");// добавить площадь участка
        // добавить строение
        // для этого
        building new_building;// создаем экземпляр строения
        cout << "выберите тип строения" << endl;
        cout << "дом - 1, гараж - 2, баня - 3, сарай(хозпостройка) - 4" << endl;
        int enum_building_type = 0;
        cin >> enum_building_type;
        switch (enum_building_type)
        {
        case 1:
            new_building.building_type = building_type::house;// выбираем тип строения
            new_building.building_area = area("дома");
            cout << "сколько этажей в здании? (2 - 4)" << endl;
            int floor_count = 0;
            cin >> floor_count;// указать сколько этажей в здании
            for (int i = 1; i <= floor_count; i++)//добавить этажи
            {
                floor new_floor;// создать экземпляр этажа
                new_floor.floors_number = i;// указать номер этажа
                cout << "укажите высоту этажа" << endl;
                cin >> new_floor.ceiling_height;// указать высоту этажа
                // добавить комнату
                room new_room;// создать экземпляр комнаты
                cout << "выберите тип комнаты" << endl;
                cout << "гостиная - 1, спальня - 2, кухня - 3, санузел - 4, детская - 5" << endl;
                int enum_room_type = 0;
                cin >> enum_room_type;// выбрать тип комнаты
                switch (enum_room_type)
                {
                case 1:
                    new_room.room_type = room_type::living;
                    break;
                            
                case 2:
                    new_room.room_type = room_type::bedroom;
                    break;

                case 3:
                    new_room.room_type = room_type::kitchen;
                    break;

                case 4:
                    new_room.room_type = room_type::bathroom;
                    break;

                case 5:
                    new_room.room_type = room_type::children;
                    break;

                default:
                    break;
                }
                            
                new_room.room_area = area("комнаты");// указать площадь

            }

            break;

        case 2:
            new_building.building_type = building_type::garage;// выбираем тип строения
            new_building;// указать площадь
            break;
                
        case 3:
            new_building.building_type = building_type::bathhouse;// выбираем тип строения
            // указать площадь
            break;
        
        case 4:
            new_building.building_type = building_type::barn;// выбираем тип строения
            // указать площадь

            break;

        default:
            break;
        }
    }

    return 0;
}