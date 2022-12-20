#include "EX01.hpp"

Data::Data() : a(10), b(4.5), c('a'){}

uintptr_t serialize(Data* ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
 return (reinterpret_cast<Data*>(raw));
}