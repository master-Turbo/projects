#include <iostream>
#include <cmath>
int main()
{
    std::cout << "The program performs operations to solve quadratic equations \n";
    std::cout << "in a simplified form, without complex numbers.  \n";
    std::cout << "The form of the accepted quadratic equation is ax2 + bx + c = 0. \n";
    std::cout << "It is required to calculate the roots of the equation or the root,  \n";
    std::cout << "if there is one. \n";

    float a, b, c;
    std::cout << "a, b, c:" << std::endl;
    std::cin >> a >> b >> c;
    
    if (a == 0.0f || b == 0.0f || c == 0.0f){  
        std::cout << "Not a quadratic equation!" << std::endl;
    }else{
        float discriminant = (b * b) - (4.0f * a * c);

        if (discriminant > 0.0f){
            float x1 = (-b + sqrt(discriminant)) / (2.0f * a);
            float x2 = (-b - sqrt(discriminant)) / (2.0f * a);
            std::cout  << "Root 1, 2: " << x1 << ", " << x2 << std::endl;
        }else if (discriminant == 0.0f){
            float x = -(b) / (2.0f * a);
            std::cout << "Root: " << x << std::endl;
        }else{
            std::cout << "Complex scenario is not supported!" << std::endl;
        }
    }
    return 0;
}