#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void display_title()
{
    cout << "=====================================" << endl;
    cout << "Game What? Where? When?" << endl;
    cout << "=====================================" << endl;
    cout << endl;
}

void sector_number_selection(int& sector_number)//выбор сектора
{
    cout << "Enter sector number " << endl;
    cout << endl;
    cin >> sector_number;
}

bool true_sector(bool* sector)//проверка, играл ли сектор,
{
    if (*sector == false)
    {
        *sector = true;
        return true;
    }
    
    return false;
}

string question_file_selection(int num)
{
    string path = "module 19/19.5.5/question_" + to_string(num)+".txt";
    return path;
}

string answer_file_selection(int num)
{
    string path = "module 19/19.5.5/answer_" + to_string(num)+".txt";
    return path;
}

void question_file_read(int num)//открыть файл с вопросом выбранного сектора, вывести на экран
{
    cout << "=====================================" << endl;
    cout << "Question!" << endl;
    cout << "=====================================" << endl;
    ifstream question_file;
    char temp [512];
    question_file.open(question_file_selection(num), ios::binary);
    question_file.read(temp, sizeof(temp));
    for (int i = 0; i < question_file.gcount(); ++i) cout << temp[i];
    question_file.close();
    cout << endl;
}

string answer_file_read(int num)//открыть файл с ответом выбранного сектора
{
    cout << "=====================================" << endl;
    cout << "Answer!" << endl;
    cout << "=====================================" << endl;
    string answer_verification;
    ifstream answer_file;
    answer_file.open(answer_file_selection(num));
    answer_file >> answer_verification;
    answer_file.close();

    return answer_verification;
}

string accept_the_player_answer()//получить ответ на вопрос
{
    string answer;
    cin >> answer;
    return answer;
}

void response_check(string str1, string str2, int& player, int& audience)//проверка на правильность ответа
{
    if (str1 == str2)
    {
    cout << "=====================================" << endl;
    cout << "This is the correct answer!" << endl;
    cout << "=====================================" << endl;
        ++player;
    }
    else
    {
    cout << "=====================================" << endl;
    cout << "This is the incorrect answer!" << endl;
    cout << "=====================================" << endl;
        ++audience;
    }
    cout << "=====================================" << endl;
    cout << "Player Score " << player << endl;
    cout << "Audience Score " << audience << endl;
    cout << "=====================================" << endl;

}

void is_win(int& player_score, int& audience_score)
{
    if (player_score > audience_score) cout << "Player is WIN " << endl;
    else cout << "Audience is WIN " << endl;
}

int main()
{
    bool sector [14] = {false};
    int audience_score = 0;
    int player_score = 0;
    int sector_number = 0;

    display_title();


    while (audience_score < 6 && player_score < 6)
    {
        //выбор сектора, смещение, относительно текщего сектора
        sector_number_selection(sector_number);

        //проверка играл ли сектор.
        if(true_sector(&sector[sector_number]) && sector_number >= 1 && sector_number <= 13)
        {
            //открыть файл с вопросом выбранного сектора, вывести на экран
            question_file_read(sector_number);

            //проверка на правильность ответа(//получить ответ на вопрос, //открыть файл с ответом выбранного сектора)
            response_check(accept_the_player_answer(), answer_file_read(sector_number), player_score, audience_score);

        }
        else
        {
            cout << "=====================================" << endl;
            cout << "Select another sector " <<endl;
            cout << "=====================================" << endl;
        }
    }

    is_win(player_score, audience_score);

    return 0;
}