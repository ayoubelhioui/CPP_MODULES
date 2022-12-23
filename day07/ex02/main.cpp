#include "Array.hpp"

int main()
{
    try{
        Array<int> array(3);
        Array<int> newArray(3);
        for (int i = 0; i < 3; i++)
            std::cout << array[i] << std::endl;
        std::cout << array[3] << std::endl;
    }
    catch(std::out_of_range &e){
        std::cout << e.what() << std::endl;
    }
}