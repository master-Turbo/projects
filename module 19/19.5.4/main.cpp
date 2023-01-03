#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    cout << "enter the path to the PNG file " << endl;
    string path;
    getline(cin,path);
    ifstream file;
    file.open(path, ios::binary);
    char bytes[8];
    
    if(path.substr(path.size() - 4, 4) == ".png" || path.substr(path.size() - 4, 4) == ".PNG")
    {
        file.read(bytes, sizeof(bytes));
        // for (int i = 0; i < file.gcount(); ++i)
        // {
        //     cout << bytes[i] << endl;
        // }
        
        if (bytes[0] == -119 && 
            bytes[1] == 'P' && 
            bytes[2] == 'N' && 
            bytes[3] == 'G')
        {
            cout << "This file is .png format" << endl;
        }
        else cout << "This file is not .png format" << endl;
        
    }
    else cout << "This file is not .png format" << endl;
    
    file.close();
    return 0;
} 