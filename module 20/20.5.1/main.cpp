#include<fstream>
#include<iostream>

using namespace std;

bool validation_data(string& data)
{
    if (stoi(data.substr(3, 2)) > 0 && stoi(data.substr(3, 2)) <= 12) return true;
    else return false;
}

void write_file(string path)
{
    string data;
    getline(cin, data);

    while (data != "quit")
    {
        if (validation_data(data))
        {
            ofstream file(path, ios::app);
            file << endl << data;
            getline(cin, data);
            file.close();
        }
        else cout << "Invalid record format" << endl;
    }
}
int main()
{
    string path;
    cout << "Enter file path" << endl;
    cout << "To end recording, type ''quit''" << endl;
    cin >> path;
    write_file(path);

    return 0;
}