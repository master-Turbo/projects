#include <iostream>

using namespace std;

bool comparison (int A[][4], int B[][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (A[i][j] != B[i][j])
            {
                cout << "the matrices are not equal " << std::endl;
                return false;
            }
            
        }
        
    }
    return true;
}

void transformation(int arr[][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != j)
            {
                arr[i][j] = 0;
            }
            
        }
        
    }
}

    // вывод в консоль диагональной матрицы
void display (int arr[][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

}



int main()
{
    int A [4][4];
    int B [4][4];

    //заполнение матрицы А
    cout << "Fill in the matrix A " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> A[i][j];
        }
        
    }
    cout << endl;
    cout << "Matrix A" << endl;
    display(A);
    cout << endl;

    //заполнение матрицы В
    cout << "Fill in the matrix B " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> B[i][j];
        }
        
    }
    cout << endl;
    cout << "Matrix B" << endl;
    display(B);
    cout << endl;

    // сравнивает их на предмет полного равенства
    if(comparison (A, B) == false)
    {
        return 0;
    }

    // преобразуется в диагональную
    transformation(A);
    cout << "The transformed matrix " << endl;
    // Вывод в консоль
    display(A);
    cout << endl;
    
    return 0;
}
