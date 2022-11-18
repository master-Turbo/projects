#include <iostream>
#include <vector>

using namespace std;

int main()
{
    float matrix [4][4];
    vector <float> vec;
    vector <float> result_vec;
    float tmp = 0.0f;
    float temp = 0.0f;

    // заполнить массив
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> matrix [i][j];
        }
        
    }
    cout << endl;
    
    // вывести массив
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix [i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << endl;
    
    // заполнить вектор
    for (int i = 0; i < 4; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    cout << endl;

    // вывести вектор
    for (int i = 0; i < 4; i++) cout << vec[i] << "\t";
    cout << endl;

    //вычисления 
    for (int i = 0; i < 4; i++)
    {
        
        for (int j = 0; j < 4; j++)
        {
            tmp += matrix[i][j] * vec[j];
        }
        result_vec.push_back(tmp);
        tmp = 0.0f;
    }


    cout << endl;
    
    // вывести новый вектор
    for (int i = 0; i < 4; i++) cout << result_vec[i] << "\t";
    cout << endl;


}