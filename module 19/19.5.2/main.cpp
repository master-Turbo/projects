#include<fstream>
#include<iostream>

using namespace std;

int main()
{
    cout << "input file path" << endl;
    string path;
    getline(cin,path);
    ifstream file;
    file.open(path);
    if(file.is_open())
    {
        //code
    }
    else
    {
        cout << "Something went wrong" << endl;
    }
    


    file.close();
    return 0;
}