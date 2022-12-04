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
        char buffer [4];
        sprintf(buffer, "%d",melody[i]);
        std::cout << "buffer: " << buffer << std::endl;
        


        for (int i = 0; i < 4; ++i)
        {
            int temp;
            temp = buffer[i] - '0';

            // 1 << temp;????

            if (notes & DO)
                {
                    std::cout << "DO"; 
                }
            if (notes & RE) 
                { 
                    std::cout << "RE"; 
                }
            if (notes & MI) 
                { 
                    std::cout << "NI"; 
                }
            if (notes & FA) 
                { 
                    std::cout << "FA"; 
                }
            if (notes & SOL) 
                { 
                    std::cout << "SOL"; 
                }
            if (notes & LA) 
                { 
                    std::cout << "LA"; 
                }
            if (notes & SI) 
                { 
                    std::cout << "SI"; 
                }
        }

    }
    
    return 0;
}