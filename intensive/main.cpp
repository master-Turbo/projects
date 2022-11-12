#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <regex>

using namespace std;
//нижний регистр
//Regular Expression
//map - для вопросов и ответов
// сoздать map
// написать код

map<string, string> answersDatabase
{
    {"Hello", "Hi, Human"},
    {"Hou are you", "I'am doing good"}
};
//
string toLower(string text)
{
    transform(text.begin(), text.end(), text.begin(), ::tolower);
    return text;
}

// сравнивать 2 строки
bool is_match(string text, string example)
{
    //нижний регистр
    text= toLower(text);
    example = toLower(example);
    regex pattern = regex(".*" + example + ".*");//где то внутри text есть фраза exemple
    if(regex_match(text, pattern))//если есть совпадение
    {
        return true;
    }
    return false;
}

string user_question()
{
    string question;// текстовая переменная
    cout << "[USER]: ";
    getline(cin, question);//читает текст в переменную
    return question;

}

void bot_replay(string reply)
{
    cout << "[BOT]: " << reply << endl;
}

int main()
{
    cout << "Hello, human" << endl;
    string question;// текстовая переменная
    
    while(question!= "exit")
    {
        getline(cin, question);//читает текст в переменную

        for(auto item : answersDatabase)
        {
            if(is_match(question, item.first))
            {
                cout << item.second << endl;
            }
        }
    }
}
// vcpkg
// nlohmann