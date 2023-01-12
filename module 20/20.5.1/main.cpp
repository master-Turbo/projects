#include<fstream>
#include<iostream>
#include<string>

using namespace std;

bool validation_data(string& data)
{
    string date;
    int j = 0;
    for (int i = 0; i < data.size(); ++i)
    {
        if (data[i] >= '0' && data[i] <= '9')
        {
            date += data[i];
            ++j;
            if(j > 7) break;
        }
    }

    if (stoi(date.substr(0, 2)) > 0 && stoi(date.substr(0, 2)) <= 31 &&
        stoi(date.substr(2, 2)) > 0 && stoi(date.substr(2, 2)) <= 12 &&
        stoi(date.substr(4, 4)) > 1900 && stoi(date.substr(4, 4)) <= 2100)
    {
        return true;
    }
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
            file.close();
            getline(cin, data);
        }
        else
        {
            cout << "Invalid record format" << endl;
            break;
        }
    }
}

int main()
{
    string path;
    cout << "Enter file path" << endl;
    cout << "To end recording, type ''quit''" << endl;
    cin >> path;
    std::cin.ignore(256, '\n');
    write_file(path);

    return 0;
}