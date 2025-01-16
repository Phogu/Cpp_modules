#pragma once
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

template<typename T>
void swap(T& x, T& y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T max(const T& x, const T& y)
{
	if (x > y)
		return x;
	return y;
}

template<typename T>
T min(const T& x, const T& y)
{
	if (x < y)
		return x;
	return y;
}