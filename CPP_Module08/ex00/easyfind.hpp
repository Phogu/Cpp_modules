#pragma once
#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>

#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class FailedToFindNumber : public std::exception
{
	const char* what() const throw()
	{
		return ("Failed To Find The Number!");
	}
};

template <typename T>
int easyfind(T t, int f)
{
	typename T::iterator iter;

	iter = std::find(t.begin(), t.end(), f);

	if (iter == t.end())
		throw FailedToFindNumber();

	int j = 0;
	for (typename T::iterator i = t.begin(); i != t.end(); ++i, j++)
	{
		if (*i == f)
			return j;
	}
	return -1;
}