#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_
#define OUT_OF_RANGE_MSG "This index is out of range"
#include <iostream>

template<typename T>
class Array{
private:
    unsigned int arraySize;
    T *array;
public :
    Array(){
        arraySize = 0;
        array = new T();
    };
    Array(unsigned int size){
        arraySize = size;
        array = new T[arraySize];
        for (unsigned int i = 0; i < arraySize; i++)
            array[i] = 0;
    };
    Array(const Array &oldObj){
        arraySize =  oldObj.size();
        array = new T[arraySize];
        for (unsigned int i = 0; i < arraySize; i++)
            array[i] = oldObj.array[i];
    };
	Array &operator =(const Array &oldObj){
        if (oldObj.size() > arraySize)
        {
            delete array;
            arraySize =  oldObj.size();
            array = new T[arraySize];
        }
        for (unsigned int i = 0; i < arraySize; i++)
            array[i] = oldObj.array[i];
        return (*this);
    };
    T &operator[](unsigned int index){
        if (index >= arraySize)
            throw (std::out_of_range(OUT_OF_RANGE_MSG));
        return (array[index]);
    }
    const T &operator[](unsigned int index) const{
        if (index >= arraySize)
            throw (std::out_of_range(OUT_OF_RANGE_MSG));
        return (array[index]);
    }
    unsigned int size() const{
        return (arraySize);
    }
	~Array(){
        delete array;
    };
};
#endif