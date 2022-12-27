#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    cout << "enter the path to the PNG file " << endl;
    string path;
    getline(cin,path);
    fstream file;
    file.open(path, ios::binary);
    

    

    file.close();
    return 0;
}