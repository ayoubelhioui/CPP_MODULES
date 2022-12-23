#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_
#define OUT_OF_RANGE_MSG "This index is out of range"
#include <iostream>

template<typename T>
class Array{
class outOfBound : public std::out_of_range{
public :
    outOfBound() : std::out_of_range(OUT_OF_RANGE_MSG){};
};
private:
    int arraySize;
    T *array;
public :
    Array(){
        this->arraySize = 0;
        array = new T();
    };
    Array(unsigned int arraySize){
        this->arraySize = arraySize;
        array = new T[arraySize];
        std::fill(array, array + arraySize, 0);
    };
    Array(const Array &oldObj){
        *this = oldObj;
    };
	Array &operator =(const Array &oldObj){
        array = new T[oldObj.size()];
        std::copy(oldObj.array, oldObj.array + oldObj.size(), array);
    };
    int operator[](int index){
        if (index >= arraySize)
            throw (outOfBound());
        return (array[index]);
    }
    void size() const{
        return (this->arraySize);
    }
	~Array(){
        delete array;
    };
};
#endif