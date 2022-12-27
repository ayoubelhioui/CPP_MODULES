#include <iostream>
#include "EX01.hpp"

int main()
{
    Data data;
    std::cout << "Before  a = " << data.a << ", b = " << data.b << ", and c = " << data.c << std::endl;
    Data *newData = deserialize(serialize(&data));
    std::cout << "After  a = " << newData->a << ", b = " << newData->b << ", and c = " << newData->c << std::endl;
}
