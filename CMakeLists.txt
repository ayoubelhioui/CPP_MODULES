cmake_minimum_required(VERSION 3.23)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(day00/ex01)

add_executable(CPP
        day00/ex00/megaphone.cpp
        day00/ex01/Contact.cpp
        day00/ex01/Contact.hpp
        day00/ex01/main.c
        day00/ex01/Phonebook.cpp
        day00/ex01/Phonebook.hpp
        main.cpp)
