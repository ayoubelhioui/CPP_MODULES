#include "Fixed.hpp"

void compareFloatNum(double a, double b)
{
    if (a == 1.0 && b == 1.0) {
        std::cout << "The numbers are equal"
             << std::endl;
    }
    else {
        std::cout << "The numbers are not equal"
             << std::endl;
    }
}

// Driver code
int main()
{
    double a = (0.3 * 3) + 0.1;
    std::cout << a << std::endl;
    double b = 1;
    std::cout << b << std::endl;
    compareFloatNum(a, b);
}