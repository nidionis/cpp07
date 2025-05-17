//
// Created by nidionis on 17/05/25.
//


#ifndef CPP07_ARRAY_H
#define CPP07_ARRAY_H
#include <iostream>

template <typename T>
class Array {
public:
    T           	*arr;
    unsigned int	_size;

    Array();
    Array(unsigned int n);
    Array(T &src);
    ~Array();

    Array &operator=(Array<T> &src);
    T &operator[](unsigned int i);
    unsigned int size() const ;
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &a);

#include "Array.tpp"
#endif