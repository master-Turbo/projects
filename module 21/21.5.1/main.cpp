#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct statement
{
    string name = "unknown";
    string subname = "unknown";
    string date = "00.00.0000";
    int summ = 0;
};


int main()
{
    string path = "statement.txt";
    string command;

    while (true)
    {
        statement field;
        cout << endl;
        cout << "Enter command (add or list)" << endl;
        cout << endl;
        cin >> command;
        cout << endl;
        if (command == "add")
        {
            string temp;
            int sum = 0;
            cout << "Name "<< endl;
            cin >> temp;
            field.name = temp;

            cout << "Subname " << endl;
            cin >> temp;
            field.subname = temp;

            cout << "Date " << endl;
            cin >> temp;
            field.date = temp;

            cout << "Summ " << endl;
            cin >> sum;
            field.summ = sum;
            
            ofstream file(path, ios::app);
            file << endl << field.name << " " << field.subname << " "
                 << field.date << " " << field.summ;
            file.close();
        } //принять данные с клавиатуры и записать в файл

        else if (command == "list")
        {
            string buffer;
            ifstream file(path, ios::app);
            while (!file.eof())
            {
                file >> buffer;
                cout << buffer;
            }
            file.close();
            
        } ////прочитать данные из файла и вывести на экран

        else if(command == "exit") return 0;
        else cout << "Incorrect command " << endl;
    }
    
    return 0;
}