#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    bool sector [13] = {false};
    string path_question [13] = {"module 19/19.5.5/sector1question.txt",
                                 "module 19/19.5.5/sector2question.txt",
                                 "module 19/19.5.5/sector3question.txt",
                                 "module 19/19.5.5/sector4question.txt",
                                 "module 19/19.5.5/sector5question.txt",
                                 "module 19/19.5.5/sector6question.txt",
                                 "module 19/19.5.5/sector7question.txt",
                                 "module 19/19.5.5/sector8question.txt",
                                 "module 19/19.5.5/sector9question.txt",
                                 "module 19/19.5.5/sector10question.txt",
                                 "module 19/19.5.5/sector11question.txt",
                                 "module 19/19.5.5/sector12question.txt",
                                 "module 19/19.5.5/sector13question.txt"};
    string path_answer [13] = {"module 19/19.5.5/sector1answer.txt",
                               "module 19/19.5.5/sector2answer.txt",
                               "module 19/19.5.5/sector3answer.txt",
                               "module 19/19.5.5/sector4answer.txt",
                               "module 19/19.5.5/sector5answer.txt",
                               "module 19/19.5.5/sector6answer.txt",
                               "module 19/19.5.5/sector7answer.txt",
                               "module 19/19.5.5/sector8answer.txt",
                               "module 19/19.5.5/sector9answer.txt",
                               "module 19/19.5.5/sector10answer.txt",
                               "module 19/19.5.5/sector11answer.txt",
                               "module 19/19.5.5/sector12answer.txt",
                               "module 19/19.5.5/sector13answer.txt"};

    int audience_score = 0;
    int player_score = 0;
    int current = 0;
    cout << "=====================================" << endl;
    cout << "Game What? Where? When?" << endl;
    cout << "=====================================" << endl;
    cout << endl;
    while (audience_score < 6 && player_score < 6)
    {
        cout << "Spin the top" << endl;
        cout << endl;
        int offset = 0;
        cin >> offset;
        current += offset;
        if (sector[current] == false)
        {
            sector[current] = true;
            cout << "=====================================" << endl;
            cout << "Attention! Question!" << endl;
            cout << "=====================================" << endl;
            ifstream question_file;
            char temp [512];
            question_file.open(path_question[current], ios::binary);
            question_file.read(temp, sizeof(temp));
            for (int i = 0; i < question_file.gcount(); ++i) cout << temp[i];
            question_file.close();
            cout << endl;

            ifstream answer_file;
            string answer;
            string answer_verification;
            answer_file.open(path_answer[current]);
            answer_file >> answer_verification;
            answer_file.close();
            cout << "=====================================" << endl;
            cout << "Attention! Answer!" << endl;
            cout << "=====================================" << endl;
            cin >> answer;
            // cout << answer << " " << answer_verification << endl;
            if (answer == answer_verification)
            {
            cout << "=====================================" << endl;
                cout << "This is the correct answer!" << endl;
            cout << "=====================================" << endl;
                ++player_score;
            }
            else
            {
            cout << "=====================================" << endl;
                cout << "This is the incorrect answer!" << endl;
            cout << "=====================================" << endl;
                ++audience_score;
            }
            cout << "=====================================" << endl;
            cout << "Player Score " << player_score << endl;
            cout << "Audience Score " << audience_score << endl;
            cout << "=====================================" << endl;
        }
        else
        {
            cout << "=====================================" << endl;
            cout << "The dropped sector has already played " << endl;
            cout << "=====================================" << endl;
        }
    }

    if (player_score > audience_score) cout << "Player is WIN " << endl;
    else cout << "Audience is WIN " << endl;
    
    return 0;
}