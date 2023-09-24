#include <iostream>
#include <math.h>
using namespace std;

struct vector
{
    double x;
    double y;
};

void enter_vector(vector& vec)
{
    cin >> vec.x;
    cin >> vec.y;
}
void print_vector(vector& vec)
{
    cout << vec.x << "\t" << vec.y << endl;
}
void add(vector& a, vector& b, vector& result)
{
    result.x = a.x + b.x;
    result.y = a.y + b.y;
}
vector subtract(vector& a, vector& b, vector& result)
{
    result.x = a.x - b.x;
    result.y = a.y - b.y;
}
void scale(vector& vec, double& scale_num, vector& result)
{
    result.x = vec.x * scale_num;
    result.y = vec.y * scale_num;
}
void length(vector& vec, double& result)
{
    result = sqrt((vec.x*vec.x) + (vec.y*vec.y));
}
void normalize();

int main()
{
    cout << "введите комманду:" << endl;
    cout << endl;
    cout << "add        сложение двух векторов" << endl;
    cout << "subtract   вычитание двух векторов" << endl;
    cout << "scale      умножение вектора на скаляр" << endl;
    cout << "length     нахождение длины вектора" << endl;
    cout << "normalize  нормализация вектора." << endl;
    cout << endl;
    string operation;
    cin >> operation;
    if (operation == "add")
    {
        vector new_vector_a;
        vector new_vector_b;
        vector result;
        cout << "Enter the coordinates vector A"<< endl;
        enter_vector(new_vector_a);
        cout << "Enter the coordinates vector B"<< endl;
        enter_vector(new_vector_b);
        print_vector(new_vector_a);
        print_vector(new_vector_b);
        add(new_vector_a, new_vector_b, result);
        cout << "vector A + vector B"<< endl;
        print_vector(result);
    }
    if (operation == "subtract")
        {
        vector new_vector_a;
        vector new_vector_b;
        vector result;
        cout << "Enter the coordinates vector A"<< endl;
        enter_vector(new_vector_a);
        cout << "Enter the coordinates vector B"<< endl;
        enter_vector(new_vector_b);
        print_vector(new_vector_a);
        print_vector(new_vector_b);
        subtract(new_vector_a, new_vector_b, result);
        cout << "vector A - vector B"<< endl;
        print_vector(result);
    }
    if (operation == "scale")
    {
        vector new_vector;
        double scale_num;
        vector result;
        cout << "enter the coordinates vector" << endl;
        enter_vector(new_vector);
        cout << "enter the scale number" << endl;
        cin >> scale_num;
        scale(new_vector, scale_num, result);
        cout << "vector * scale number"<< endl;
        print_vector(result);
    }
    if (operation == "length")
    {
        vector new_vector;
        double result;
        cout << "enter the coordinates vector" << endl;
        enter_vector(new_vector);
        length(new_vector, result);
        cout << "vector length"<< endl;
        cout << result << endl;
    }
    if (operation == "normalize") void normalize();
    return 0;
}