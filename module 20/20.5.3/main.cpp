#include<iostream>
#include<fstream>
#include<string>

using namespace std;

bool find_fish (string& buffer, string& fish);
void write_in_file (string& path, string& data);

int main()
{
    string fish;
    string buffer;
    string river = "../river.txt";
    string basket = "../basket.txt";
    int counter_of_caught_fish = 0;

    cout << "Specify what kind of fish we are catching?" << endl;
    cin >> fish;

    ifstream file;
    file.open(river);
    if(file.is_open())
    {
        while (!file.eof())
        {
            file >> buffer;
            if(find_fish(buffer, fish))
            {
                write_in_file(basket, buffer);
                ++counter_of_caught_fish;            
            }
        }
        cout << endl;
    }
    else cout << "Read ERROR" << endl;

    file.close();

    cout << fish << " was caught " << counter_of_caught_fish << " times" << endl;
    
    return 0;
}

bool find_fish (string& buffer, string& fish)
{
    if (buffer == fish) return true;
    else return false;
}

void write_in_file (string& path, string& data)
{
    ofstream file;
    file.open(path, ios::app);
    if (file.is_open())
    {
        file << endl << data;
    }
    else cout << "Write ERROR" << endl;

    file.close();
}