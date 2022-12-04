#include<iostream>
#include<string>
using namespace std;

enum notes
{ 
    DO = 1, 
    RE = 2, 
    MI = 4, 
    FA = 8, 
    SOL = 16, 
    LA = 32, 
    SI = 64 
};

int main()
{
    int melody[12];
    for (int i = 0; i < 12; ++i)
    {
        cin >> melody[i];
    }
    
    for (int i = 0; i < 12; ++i)
    {
        char buffer [3];
        sprintf(buffer, "%d",melody[i]);
        // std::cout << "buffer: " << buffer << std::endl;
        


        for (int i = 0; i < 3; ++i)
        {
            int temp;
            temp = buffer[i] - '0';


            if ((1 << temp-1) & DO)
                {
                    std::cout << "DO "; 
                }
            if ((1 << temp-1) & RE) 
                { 
                    std::cout << "RE "; 
                }
            if ((1 << temp-1) & MI) 
                { 
                    std::cout << "MI "; 
                }
            if ((1 << temp-1) & FA) 
                { 
                    std::cout << "FA "; 
                }
            if ((1 << temp-1) & SOL) 
                { 
                    std::cout << "SOL "; 
                }
            if ((1 << temp-1) & LA) 
                { 
                    std::cout << "LA "; 
                }
            if ((1 << temp-1) & SI) 
                { 
                    std::cout << "SI "; 
                }
        }
        cout << endl;

    }
    
    return 0;
}