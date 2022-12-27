#include<fstream>
#include<iostream>

using namespace std;

int main()
{
    ifstream file;
    file.open("module 19/19.5.3/statement.txt", ios::binary);
    string name;
    string surname;
    int payments = 0;
    string payment_date;
    int payments_summ = 0;
    int temp = 0;
    string the_most_rich;

    while (!file.eof())
    {
        file >> name >> surname >> payments >> payment_date;
        payments_summ += payments;
        if (temp != 0)
        {
            if (temp < payments)
            {
                temp = payments;
                the_most_rich.clear();
                the_most_rich = name + ' ' + surname;
            }
        }
        else temp = payments;
    }
    cout << "total amount paid out " << endl;
    cout << the_most_rich << endl;
    cout << "the person with the highest payout " << endl;
    cout << payments_summ << endl;

    file.close();
    return 0;
}