#ifndef _ITER_HPP_
#define _ITER_HPP_

#include <iostream>

template<typename T>
void function(T value){
    std::cout << value << std::endl;
}
template<typename T>
void fun(T* array, int arraySize, void(*foo)(T value))
{
    for (int i = 0; i < arraySize; i++)
        foo(array[i]);
};

#endif