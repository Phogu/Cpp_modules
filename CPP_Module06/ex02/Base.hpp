#pragma once
#include <iostream>
#include <cstdlib>

#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class Base
{
	public:
		virtual ~Base();
		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};