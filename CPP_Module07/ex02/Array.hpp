#pragma once

#include <iostream>
#include <stdexcept>

#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

template <class T>
class Array
{
    private:
        T * _arr;
        unsigned int _size;
    public:
        Array()
        {
            _arr = new T[0];
        }
        Array(unsigned int n)
        {
            _arr = new T[n];
            _size = n;
        }
        Array(Array const & src)
        {
            _arr = new T[src._size];
            _size = src._size;
            for (unsigned int i = 0; i < _size; i++)
                _arr[i] = src._arr[i];
        }
        ~Array()
        {
            delete [] _arr;
        }
        Array & operator=(Array const & src)
        {
            if (this != &src)
            {
                delete [] _arr;
                _arr = new T[src._size];
                _size = src._size;
                for (unsigned int i = 0; i < _size; i++)
                    _arr[i] = src._arr[i];
            }
            return *this;
        }
        T & operator[](unsigned int i)
        {
            if (i < 0 || i >= _size)
                throw std::out_of_range("Index out of range");
            return _arr[i];
        }
        unsigned int size() const
        {
            return _size;
        }
};
