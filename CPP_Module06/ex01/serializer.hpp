#pragma once
#include <iostream>
#include <stdint.h>
#include "Data.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class Serializer
{
	public:
	Serializer();
	Serializer(const Serializer& copy);
	Serializer& operator=(const Serializer& copy);
	~Serializer();

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};
