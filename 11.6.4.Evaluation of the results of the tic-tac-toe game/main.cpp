/*Программа оценивает результат игры в крестики нолики. 
Петя и Вася играли в крестики-нолики и не стёрли результаты своей игры. 
Теперь перед вами табличка 3 × 3, которая осталась после их поединка. 
Вы хотите понять, выиграл ли кто-то из них или они не доиграли.
На вход программе даётся три строки, кодирующие верхнюю, среднюю и 
нижнюю строчки игрового поля. Крестик обозначается символом X 
(английская заглавная буква X), нолик — символом O (заглавная английская буква O), 
пустая клетка — точкой.
Если ввод некорректен, то есть такая таблица не могла получиться в ходе настоящей игры,
то надо написать в ответ слово Incorrect.
Если таблица корректна и выиграли крестики, то нужно вывести в ответ слова Petya won, 
если нолики — Vanya won, иначе (то есть они не доиграли или сыграли вничью) надо написать Nobody.*/

#include <iostream>
#include <string>

const int fieldSize = 9;
std::string initial ();
bool correct_string_length (std::string str);
bool correct_data (std::string str);
int check_count (std::string str, char ch);
bool check_col (std::string str, char ch);
bool check_row (std::string str, char ch);
bool check_diag (std::string str, char ch);
bool find_win (std::string str, char ch);


int main()
{
    std::string field;
    field = initial();
    if (correct_string_length(field) && correct_data(field))
    {
        int countX = check_count(field, 'X');
        int countO = check_count(field, 'O');

        if ((countX - countO == 0) || (countX - countO == 1))
        {
            bool winX = find_win (field, 'X');
            bool winO = find_win (field, 'O');

            if ((winX && winO) || (winO && (countX - countO == 1)) 
                    || (winX && (countX - countO == 0)))
            {
                std::cout << "Incorrect" << std::endl;
            }
            else
            if (!winX && !winO)
            {
                std::cout << "Nobody" << std::endl;
            }
            else
            {
                std::cout << (winX ? "Petya won" : "Vanya won") << std::endl;
            }
        }
        else std::cout << "Incorrect" << std::endl;
    }
    else
    {
        std::cout << "Incorrect" << std::endl;
    }

    return 0;
}

std::string initial ()
{
    std::string field;
    for (int i = 1; i < 4; i++)
    {
        std::cout << "Input " << i << " row (X, O, '.'): ";
        std::string temp;
        std::cin >> temp;
        field += temp;
    }

    return field;
}
bool correct_string_length (std::string str)
{
    return (str.length() == fieldSize);
}
bool correct_data (std::string str)
{
    for (int i = 0; i < fieldSize; i++)
    {
        if (str[i] != 'X' && str[i] != 'O' && str[i] != '.') return false;
    }

    return true;
}
int check_count (std::string str, char ch)
{
    int count = 0;
    for (int i = 0; i < fieldSize; i++)
    {
        if (str[i] == ch) count++;
    }

    return count;
}
bool check_col (std::string str, char ch)
{
    for (int i = 0; i < 3; i++)
    {
        if ((str[i] == str[i+3]) 
            && (str[i+3] == str[i+6]) && str[i] == ch) return true;
    }

    return false;
}
bool check_row (std::string str, char ch)
{
    for (int i = 0; i < 3; i++)
    {
        if (((str[i + 2 * i]) == str[(i + 1) + 2 * i]) 
                && ((str[(i + 1) + 2 * i]) == str[(i + 2) + 2 * i]) 
                && str[i + 2 * i] == ch) return true;
    }

    return false;
}
bool check_diag (std::string str, char ch)
{
    if ((((str[0] == str[4]) && (str[4] == str[8])) || ((str[2] == str[4]) 
            && (str[4] == str[6]))) && (str[4] == ch)) return true;

    return false;
}
bool find_win (std::string str, char ch)
{
    return (check_col(str, ch) || check_row(str, ch) || check_diag(str, ch));
}    