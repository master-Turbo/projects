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
        cout << "Enter command (add, list, exit)" << endl;
        cout << endl;
        cin >> command;
        cout << endl;
        if (command == "add")
        {
            cout << "Name "<< "Subname " << "Date " << "Summ " << endl;
            cin >> field.name >> field.subname >> field.date >> field.summ;
            ofstream file(path, ios::app);
            if (!file.is_open())
            {
                cout << "File open error" << endl;
            }
            else
            {
                file << endl << field.name << " " << field.subname << " "
                 << field.date << " " << field.summ;
            }
            

            file.close();
        } //принять данные с клавиатуры  в структуру и записать в файл

        else if (command == "list")
        {
            // string buffer;
            ifstream file(path);
            if (!file.is_open())
            {
                cout << "File open error" << endl;
            }
            else
            {
                while (!file.eof())
                {
                    file >> field.name >> field.subname >> field.date >> field.summ;
                    cout << field.name << " " << field.subname << " " << field.date << " " << field.summ << " " << endl;
                }
            }
            
            file.close();
        } ////прочитать данные из файла В СТРУКТУРУ и вывести на экран

        else if(command == "exit") return 0;
        else cout << "Incorrect command " << endl;
    }
    
    return 0;
}