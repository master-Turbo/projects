#include <iostream>
#include <cmath>
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
void normalize(vector& vec, double& length, vector& result)
{
    result.x = vec.x / length;
    result.y = vec.y / length;
}

int main()
{
    cout << "enter the command:" << endl;
    cout << endl;
    cout << "add        the addition of two vectors" << endl;
    cout << "subtract   subtraction of two vectors" << endl;
    cout << "scale      multiplication of the vector by the scale" << endl;
    cout << "length     finding the length of the vector" << endl;
    cout << "normalize  normalization of the vector" << endl;
    cout << endl;
    string operation;
    cin >> operation;
    if (operation == "add")
    {
        vector new_vector_a;
        vector new_vector_b;
        vector result;
        cout << "Enter the vector A"<< endl;
        enter_vector(new_vector_a);
        cout << "Enter the vector B"<< endl;
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
        cout << "Enter the vector A"<< endl;
        enter_vector(new_vector_a);
        cout << "Enter the vector B"<< endl;
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
        cout << "enter the vector" << endl;
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
        cout << "enter the vector" << endl;
        enter_vector(new_vector);
        length(new_vector, result);
        cout << "vector length"<< endl;
        cout << result << endl;
    }
    if (operation == "normalize")
    {
        vector new_vector;
        vector result;
        double len;
        cout << "enter the vector" << endl;
        enter_vector(new_vector);
        length(new_vector, len);
        normalize(new_vector, len, result);
        cout << "normalized vector"<< endl;
        print_vector(result);
    }
    return 0;
}