#include<fstream>
#include<iostream>

using namespace std;

enum actions
{
    up = 1,
    down = 2,
    quit = 4
};

int main()
{
    cout << "input file path" << endl;
    cout << "================================================" << endl;
    string path;
    getline(cin,path);
    ifstream file;
    file.open(path, ios::binary);
    char buffer[64];
    buffer[64] = 0;
    if(file.is_open())
    {
        file.read(buffer, sizeof (buffer));
        cout << buffer << endl;
        cout << "================================================" << endl;
        cout << file.tellg() << " " << file.gcount() << endl;
        cout << "================================================" << endl;
        
        while (!file.eof())
        {
            cout << "scroll up == 1" << endl;
            cout << "scroll down == 2" << endl;
            cout << "quit == 4" << endl;

            int action;
            cin >> action;
            cout << "================================================" << endl;

            switch (action)
            {
            case actions::up:
                file.seekg(file.gcount(), ios::cur);//????? не перемещается назад
                for (int i = 0; i < sizeof(buffer); ++i) buffer[i] = 0;
                file.read(buffer, sizeof (buffer));
                cout << buffer << endl;
                cout << "================================================" << endl;
                cout << file.tellg() << " " << file.gcount() << endl;
                cout << "================================================" << endl;
                break;
                
            case actions::down:
                for (int i = 0; i < sizeof(buffer); ++i) buffer[i] = 0;
                file.read(buffer, sizeof (buffer));
                cout << buffer << endl;
                cout << "================================================" << endl;
                cout << file.tellg() << " " << file.gcount() << endl;
                cout << "================================================" << endl;
                break;
                
            case actions::quit:
                file.close();
                return 0;
            
            default:
                break;
            }
        }
    }
    else
    {
        cout << "Something went wrong" << endl;
    }
    
    file.close();
    return 0;
}