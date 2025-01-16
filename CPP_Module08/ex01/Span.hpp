#pragma once
#include <iostream>
#include <vector>

#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class Span
{
	private:
		unsigned int capacity;
		std::vector<int> arr;
		typedef std::vector<int>::iterator iter;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		Span& operator=(const Span &copy);
		~Span();
		void addNumber(int nbr);
		void add(iter begin, iter end);
		int shortestSpan();
		int longestSpan();
};