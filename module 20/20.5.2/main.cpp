#include<iostream>
#include<fstream>
#include<ctime>

using namespace std;

int main()
{
    cout << "enter height and width" << endl;
    int height;
    int width;
    cin >> height >> width;

    // сoздать файл pic.txt размером height на widht

    srand(time(nullptr));
    ofstream file("pic.txt", ios::binary);
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            file << rand() % 2;
            // cout << rand() % 2;
        }
        file << endl;
        // cout << endl;
    }

    return 0;
}