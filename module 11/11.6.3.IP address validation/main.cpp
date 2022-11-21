#include <iostream>
#include <string>

//ищем лишние точки
bool extra_points (std::string str)
{
    if(str[str.length() - 1] == '.') return false;
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == '.' && str[i + 1] == '.') return false;
        }
    }
    return true;
}

//функция возвращает строку с указанным октетом
std::string get_adress_part (std::string str, int octet_sequence_number)
{
    std::string part;
    int point = 0;

    if (octet_sequence_number == 0)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '.') point ++;

            if (point < 1) part += str[i];
        }
    }
    else
    if (octet_sequence_number == 1)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '.') point ++; 

            if (point == 1 && point < 2)
            {
                if (str[i] != '.') part += str[i];
            }
        }
    }
    else
    if (octet_sequence_number == 2)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '.') point ++; 

            if (point == 2 && point < 3)
            {
                if (str[i] != '.') part += str[i];
            }
        }
    }
    else
    if (octet_sequence_number == 3)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '.') point ++; 

            if (point == 3)
            {
                if (str[i] != '.') part += str[i];
            }
        }
    }
    return part;
}

//функция проверяет корректность длины и содержимого октета
bool checking_correctness (std::string str)
{
    //проверка длины
    if(str.length() < 1 || str.length() > 3) return false;

    //проходим по строке
    for (int i = 0; i < str.length(); i++)
    {
        //проверяем что в строке цифры
        if (str[i] < '0' || str[i] > '9') return false;
    }

    //исключение лишних нулей перед цифрами
    if(str.length() == 2)
    {
        if(str[0] == '0' && str[1] == '0') return false;//00
        if(str[0] == '0' && str[1] != '0') return false;//02
    }

    if(str.length() == 3)
    {
        if(str[0] == '0' && str[1] == '0' && str[2] == '0') return false;//000
        if(str[0] == '0' && str[1] == '0' && str[2] != '0') return false;//002
        if(str[0] == '0' && str[1] != '0' && str[2] != '0') return false;//022
    }

    //преобразуем string в int
    int a = 0;
    int b = 0;
    int c = 0;
    if(str.length() == 3)
    {
        a = (str[0] - '0') * 100;
        b = (str[1] - '0') * 10;
        c = str[2] - '0';
    }
    else
    if(str.length() == 2)
    {
        a = (str[0] - '0') * 10;
        b = str[1] - '0';
    }
    else
    if(str.length() == 1)
    {
        a = str[0] - '0';
    }
    //проверяем значения на выход из диапазона
    if((a+b+c) < 0 || (a+b+c) > 255) return false;

    return true;
}


int main()
{
    std::string str;
    std::cout << "enter the ipv4 ip address" << std::endl;
    std::cin >> str;

    int octet_sequence_number = 0;
    
    std::string part_1 = get_adress_part (str, octet_sequence_number = 0);
    std::string part_2 = get_adress_part (str, octet_sequence_number = 1);
    std::string part_3 = get_adress_part (str, octet_sequence_number = 2);
    std::string part_4 = get_adress_part (str, octet_sequence_number = 3);

    if(extra_points (str) == false
            || checking_correctness (part_1) == false
            || checking_correctness (part_2) == false 
            || checking_correctness (part_3) == false 
            || checking_correctness (part_4) == false)
    {
        std::cout << "Invalid" << std::endl;
    }
    else
    {
        std::cout << "Valid" << std::endl;
    }
    
    return 0;
}