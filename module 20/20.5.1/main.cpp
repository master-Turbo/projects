#include<fstream>
#include<iostream>

using namespace std;

int main()
{
    string data = "hello, world!";
    ofstream file;
    file.open("module 20/20.5.1/file.txt");
    file << data;
    file.close();

    ifstream rdata;
    rdata.open("module 20/20.5.1/file.txt");
    string test;
    rdata >> test;
    cout << test;

    rdata >> test;
    cout << test;

    rdata.close();







    return 0;
}