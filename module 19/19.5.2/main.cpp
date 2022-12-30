#include<fstream>
#include<iostream>

using namespace std;

enum actions
{
    next = 1,
    quit = 2
};

int main()
{
    cout << "input file path" << endl;
    cout << "================================================" << endl;
    string path;
    getline(cin,path);
    ifstream file;
    file.open(path, ios::binary);
    char buffer[512];
    buffer[511] = 0;
    if(file.is_open())
    {
        file.read(buffer, sizeof (buffer) -1);
        int gcount = file.gcount();
        cout << buffer << endl;
        for (int i = 0; i < file.gcount(); ++i) buffer[i] = 0;
        

        while (!file.eof())
        {
            cout << "================================================" << endl;
            cout << "next page == 1" << endl;
            cout << "quit == 2" << endl;

            int action;
            cin >> action;
            cout << "================================================" << endl;

            switch (action)
            {
            case actions::next:
                file.read(buffer, sizeof (buffer) -1);
                cout << buffer << endl;
                for (int i = 0; i < file.gcount(); ++i) buffer[i] = 0;
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