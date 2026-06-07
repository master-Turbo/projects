#include <iostream>
#include <string>

//проверки до разделения
bool check_before_separation (std::string str)
{
    int match = 0;

    // если точка не первый и не последний символ, то
    if (str[0] != '.' && (str.length() - 1) != '.')
    {
        //проверяем наличие и количество символов '@'
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '@') match ++;
        //попутно проверяем нет ли двух точек. две точки подряд это ошибка
            if (str[i] == '.' && str[i + 1] =='.') return false;
        }
    }
    else return false;

    //если символов '@' не 1, это ошибка
    if (match == 1) return true;
    else return false;
}

//функция разделяет адрес на 2 части, до символа '@', и после
//в зависимости от параметра. 1 == получение первой части, 2 == второй
std::string divide_adress(std::string str, int parameter)
{
    std::string part;

    if (parameter == 1)
    {
        bool valid = true;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '@')
            {
                valid = false;
                break;
            }

            if (valid == true) part += str[i];
        }
    }
    else
    if (parameter == 2)
    {
        bool valid = false;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '@') valid = true;

            if (valid == true)
            {
                if (str[i] != '@') part += str[i];
            }
        }
    }
    return part;
}

//проверки после разделения
//параметр 1 для первой части, 2 - для второй
bool check_after_separation (std::string str, int parameter)
{
    std::string dictionary_for_first_part = ".!#$%&'*+-/=?^_`{|}~abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVQXYZ0123456789";
    std::string dictionary_for_second_part = ".-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVQXYZ0123456789";
    bool good = false;

    if (parameter == 1)
    {
        //если первая часть не в диапазоне от 1 до 64 символов, то ошибка
        if (str.length() < 1 || (str.length() - 1) > 64) return false;
        else
        {
            // иначе проверка по словарю символов
            for(int i = 0; i < str.length(); i++)
            {
                std::string::size_type n = dictionary_for_first_part.find(str[i]);

                if(n != std::string::npos) good = true;
                else return false;
            }
        }
    }
    else
    if (parameter == 2)
    {
        //если вторая часть не в диапазоне от 1 до 63 символов, то ошибка
        if (str.length() < 1 || (str.length() - 1) > 63) return false;
        else
        {
            // иначе проверка по словарю символов
            for(int i = 0; i < str.length(); i++)
            {
                std::string::size_type n = dictionary_for_second_part.find(str[i]);

                if(n != std::string::npos) good = true;
                else return false;
            }
        }
    }
    return good;
}


int main()
{
    std::string str;
    std::cout << "Input e_mail adress" << std::endl;
    std::cin >> str;

    if (check_before_separation(str) == true)//проверки до разделения
    {
        bool first_part_valid = true;
        bool second_part_valid = true;
        int parameter = 0;                                          //параметр 1 для первой части, 2 - для второй части
        std::string first_part = divide_adress(str, parameter = 1); //функция разделяет адрес на 2 части, до символа '@', и после
        std::string second_part = divide_adress(str, parameter = 2);//в зависимости от параметра.
        first_part_valid = check_after_separation (first_part, parameter = 1);  //проверки после разделения
        second_part_valid = check_after_separation (second_part, parameter = 2);//в зависимости от параметра.

            
        if (first_part_valid == true && second_part_valid == true){
            std::cout << "The entered e-mail address is correct (YES!)" << std::endl;
        }
        else
        {
            std::cout << "The entered e-mail address is not correct (NO!)" << std::endl;
        }
    }
    else std::cout << "The entered e-mail address is not correct (NO!)" << std::endl;

    return 0;
}