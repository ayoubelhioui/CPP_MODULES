#include "Fixed.hpp"
#include <cmath>
void compareFloatNum(double a, double b)
{
    if (a == b) {
        std::cout << "The numbers are equal"
             << std::endl;
    }
    else {
        std::cout << "The numbers are not equal"
             << std::endl;
    }
}
class Obj{
public:
    void set(){
        std::cout << "hello" ;
    }
};

int main()
{
//    double a = (0.3 * 3) + 0.1;
//    printf("%f \n", a);
////    std::cout << are << std::endl;
//    double b = 1;
////    std::cout << b << std::endl;
//    printf("%f \n", b);
//    if (roundf(a) == roundf(b)) {
//            std::cout << "The numbers are equal"
//                 << std::endl;
//    }
//    else {
//        std::cout << "The numbers are not equal"
//             << std::endl;
//    }
    float a = remainder(5.6f, 50);
//    compareFloatNum(a, b);
//    Obj *a = NULL;
//    a->set();
//        int *arr = new int[2]();
//        for (int i = 0; i < 2; i++)
//            std::cout << arr[i] << std::endl;
}