#ifndef _ex01_hpp
#define _ex01_hpp
#include <cstdint>

struct Data{
    int a;
    float b;
    char c;
    Data();
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif