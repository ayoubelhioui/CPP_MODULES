#include "Array.hpp"

int main()
{
    try{
        Array<int> array(3);
        Array<char> c(5);
        for (int i = 0; i < 5; i++)
            c[i] = 'a' + i;
        for (int i = 0; i < 3; i++)
            array[i] = i;
        Array<int> newArray(1);
        for (int i = 0; i < 3; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
        for (int i = 0; i < 5; i++)
            std::cout << c[i] << " ";
        std::cout << std::endl;
        std::cout << array[3] << std::endl;
        newArray = array;
        for (int i = 0; i < 3; i++) {
            std::cout << newArray[i] << std::endl;
        }
    }
    catch(std::out_of_range &e){
        std::cout << e.what() << std::endl;
    }
}
