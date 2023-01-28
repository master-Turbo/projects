#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// void save_state (string& path, int* money);

int main()
{
    char operation;
    string atm_path = "/home/master-turbo/projects/module 20/20.5.4/bankomat.txt";
    int bills [5] = {100, 200, 500, 1000, 5000};
    int money[1000];
    
    while (true)
    {
        cout << "=======================================" << endl;
        cout << endl;
        cout << "This is an ATM Simulator" << endl;
        cout << "available denominations of 100, 200, " << endl;
        cout << "500, 1000, 5000" << endl;
        cout << endl;
        cout << "commands" << endl;
        cout << "r  -> calculate the remainder" << endl;
        cout << "+ -> to fill the ATM with banknotes" << endl;
        cout << "- -> to withdraw cash" << endl;
        cout << "q -> to exit the simulator" << endl;
        cout << endl;

        cin >> operation;

        //read state
        ifstream read_state;
        read_state.open(atm_path, ios::binary);
        if (read_state.is_open())
        {
            read_state.read((char*) money, sizeof(money));
            read_state.close();
        }
        else
        {
            for (int i = 0; i < 1000; ++i) money[i] = 0;
        }

        if (operation == 'q') return 0;
        else if (operation == 'r')
        {
            int remainder = 0;
            for (int i = 0; i < 1000; ++i) remainder += money[i];
            
            cout << "remainder = " << remainder << endl;
            cout << "=======================================" << endl;
            cout << endl;
        }
        else if (operation == '+')
        {
            int total_amount = 0;
            int added_amount = 0;

            for (int i = 0; i < 1000; ++i)
            {
                if (money[i] == 0)
                {
                    money[i] = bills[rand() % 5];
                    added_amount += money[i];
                }
            }

            for (int i = 0; i < 1000; ++i) total_amount += money[i];
            
            cout << "added amount " << added_amount << endl;
            cout << "total amount " << total_amount << endl;

            ofstream save_state;
            save_state.open(atm_path, ios::binary);
            if (save_state.is_open()) save_state.write((char*) money, sizeof(money));
            else cout << "Write ERROR" << endl;
            save_state.close();
            cout << "=======================================" << endl;
            cout << endl;
        }
        else if (operation == '-')
        {
            cout << "how much money do you want to withdraw?" << endl;

            int amount_of_money = 0;
            int amount_to_be_issued = 0;
            cin >> amount_of_money;

            if((amount_of_money % 100) != 0)
            {
                cerr << "invalid amount of money " << amount_of_money << endl;
                return 1;
            }

            int money_collection = amount_of_money;
            for (int i = 4; i >= 0; --i)
            {
                int bill = bills[i];
                for (int j = 0; j < 1000; ++j)
                {
                    if (money[j] == bill)
                    {
                        if (amount_of_money >= bill)
                        {
                            money[j] = 0;
                            amount_of_money -= bill;
                            amount_to_be_issued += bill;
                            cout << "bill " << bill << endl;
                        }
                        
                        if (amount_of_money == 0)
                        {
                            ofstream save_state;
                            save_state.open(atm_path, ios::binary);
                            if (save_state.is_open()) save_state.write((char*) money, sizeof(money));
                            else cout << "Write ERROR" << endl;
                            save_state.close();
                            break;
                        }
                        
                    }
                    
                }
                
            }

            cout << "amount taken " << amount_to_be_issued << endl;

            // if (/* condition */)
            // {
            //     /* code */
            // }
            
            cout << endl;
        }
        else cout << "invalid command " << endl;
    }
    
    return 0;
}