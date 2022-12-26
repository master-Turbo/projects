#include<fstream>
#include<iostream>

using namespace std;

int main()
{
    cout << "==============================" << endl;
    cout << "word search program" << endl;
    cout << "what word are you looking for?" << endl;
    cout << "only ASCII" << endl;
    cout << "==============================" << endl;

    string find_string;
    getline(cin,find_string);

    ifstream words;
    words.open("module 19/19.5.1/words.txt");
    string str;
    while (!words.eof())
    {
        words >> str;

        if (str == find_string)
        {
            cout << "we found the right word" <<endl;
            cout << "==============================" << endl;
            cout << str;
            break;
        }
        else
        {
            cout << "this word is not in our dictionary" << endl;
            break;
        }
        
    }
    words.close();
    return 0;
}