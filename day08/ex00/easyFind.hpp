#ifndef _EASY_FIND_HPP_
#define _EASY_FIND_HPP_
#define NOT_EXIST_MSG "The element is not exist"
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
template<typename T>
int easyFind(T data, int target){
     typename T::iterator it;
    it = std::find(begin(data), end(data), target);
    if (it == end(data))
        throw (NOT_EXIST_MSG);
    return (it - data.begin());
}
#endif