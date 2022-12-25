#include "Iter.hpp"


int main()
{
    int *array = new int[4];
    const char *str = "hello world";
    for (int i = 0; i < 4; i++)
        array[i] = i;
    fun(array, 4, function);
    fun(str, strlen(str), function);
}