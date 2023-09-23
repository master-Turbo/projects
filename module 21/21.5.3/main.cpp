#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

struct matrix
{
    vector<vector<double>> matrix;
    vector<double> temp;
};

struct scale_struct
{
    double scale;
};


void create_vector(vector<double>& temp, vector<vector<double>>& matrix, int rows, int cols)
{
    cout << "записываем данные в двумерный вектор" << endl;
    double tmp;
    for (int i = 0; i < rows; ++i)//создать и заполнить двумерный вектор
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << "записываем элемент строки" << endl;
            cin >> tmp;
            temp.push_back(tmp);
        }
        cout << "записываем готовую строку" << endl;
        matrix.push_back(temp);
    }
}

void display_vector(vector<vector<double>>& matrix, int rows, int cols)
{

    for (int i = 0; i < rows; ++i)//вывести на экран вектор
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void add (vector<vector<double>>& matrix_a,
            vector<vector<double>>& matrix_b,
            vector<vector<double>>& result_matrix,
            int rows, int cols)
{
    double tmp;
    vector<double> temp;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            tmp = matrix_a[i][j] + matrix_b[i][j];
            temp.push_back(tmp);
        }
        result_matrix.push_back(temp);
    }
}

void subtract(vector<vector<double>>& matrix_a,
                vector<vector<double>>& matrix_b,
                vector<vector<double>>& result_matrix,
                int rows, int cols)
{
    double tmp;
    vector<double> temp;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            tmp = matrix_a[i][j] - matrix_b[i][j];
            temp.push_back(tmp);
        }
        result_matrix.push_back(temp);
    }
}

void scale(vector<vector<double>>& matrix,
            vector<vector<double>>& result_matrix,
            double& scale, int rows, int cols)
{
    double tmp;
    vector<double> temp;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            tmp = matrix[i][j] * scale;
            temp.push_back(tmp);
        }
        result_matrix.push_back(temp);
    }
}

int length(int rows, int cols)
{
    return sqrt(rows*rows + cols*cols);
    // переделать все чтобы не хранить размеры вектора
}

// void normalize()
// {

// }

int main()
{
    cout << "введите комманду:" << endl;
    cout << endl;
    cout << "add        сложение двух векторов" << endl;
    cout << "subtract   вычитание двух векторов" << endl;
    cout << "scale      умножение вектора на скаляр" << endl;
    cout << "length     нахождение длины вектора" << endl;
    // cout << "normalize  нормализация вектора." << endl;
    cout << endl;
    string operation;
    cin >> operation;
    if (operation == "add") 
    {
        int rows = 0;
        int cols = 0;
        cout << "укажите размеры двумерного массива" << endl;
        cin >> rows >> cols;
        matrix new_matrix_a;
        matrix new_matrix_b;
        cout << "заполним 2 двумерных массива" << endl;
        create_vector(new_matrix_a.temp, new_matrix_a.matrix, rows, cols);
        create_vector(new_matrix_b.temp, new_matrix_b.matrix, rows, cols);
        cout << "вектор 1" << endl;
        display_vector(new_matrix_a.matrix, rows, cols);
        cout << "вектор 2" << endl;
        display_vector(new_matrix_b.matrix, rows, cols);
        matrix result_matrix;
        add(new_matrix_a.matrix, new_matrix_b.matrix, result_matrix.matrix, rows, cols);
        display_vector(result_matrix.matrix, rows, cols);
    }
    if (operation == "subtract")
    {
        int rows = 0;
        int cols = 0;
        cout << "укажите размеры двумерного массива" << endl;
        cin >> rows >> cols;
        matrix new_matrix_a;
        matrix new_matrix_b;
        cout << "заполним 2 двумерных массива" << endl;
        create_vector(new_matrix_a.temp, new_matrix_a.matrix, rows, cols);
        create_vector(new_matrix_b.temp, new_matrix_b.matrix, rows, cols);
        cout << "вектор 1" << endl;
        display_vector(new_matrix_a.matrix, rows, cols);
        cout << "вектор 2" << endl;
        display_vector(new_matrix_b.matrix, rows, cols);
        matrix result_matrix;
        subtract(new_matrix_a.matrix, new_matrix_b.matrix, result_matrix.matrix, rows, cols);
        display_vector(result_matrix.matrix, rows, cols);
    }
    if (operation == "scale")
    {
        int rows = 0;
        int cols = 0;

        cout << "укажите размеры двумерного массива" << endl;
        cin >> rows >> cols;
        matrix new_matrix;
        matrix result_matrix;
        cout << "заполним двумерный массив" << endl;
        create_vector(new_matrix.temp, new_matrix.matrix, rows, cols);
        cout << "вектор 1" << endl;
        display_vector(new_matrix.matrix, rows, cols);
        scale_struct new_scale;
        cout << "введите скалярное значение" << endl;
        cin >> new_scale.scale;
        scale(new_matrix.matrix, result_matrix.matrix, new_scale.scale, rows, cols);
        display_vector(result_matrix.matrix, rows, cols);
    }
    if (operation == "length")
    {
        int rows = 0;
        int cols = 0;
        cin >> rows >> cols;
        cout << length(rows, cols) << endl;
    }
    // if (operation == "normalize")
    // {
    //     void normalize();
    // }
    return 0;
}