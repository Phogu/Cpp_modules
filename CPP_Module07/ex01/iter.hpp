#pragma once
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

template<typename T>

void iter(T *addr, int length, void(*function)(T const &))
{
	for(int i = 0; i < length; i++)
		function(addr[i]);
}