#include "easyFind.hpp"

int main()
{
    try{
        std::vector<int> vec;
        for (int i = 0; i < 6; i++)
            vec.push_back(i * 8);
        std::array<int, 5> ar = {9, 2, 1, -10 ,35};
        std::cout << easyFind(vec, 16) << std::endl;
        std::cout << easyFind(ar, 2) << std::endl;
        std::cout << easyFind(ar, 10) << std::endl;
    }
    catch (const char *e){
        std::cout << e << std::endl;
    }
}