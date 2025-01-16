#include "serializer.hpp"

int main()
{
	Serializer serializer;
	Data* obj = new Data;
	uintptr_t raw;
	Data *ptr;

	std::cout << BLUE << "The address of the Data object: " << RESET << YELLOW << obj << RESET << std::endl;
	raw = serializer.serialize(obj);
	std::cout << BLUE << "The address converted into unsigned integer value: " << RESET << YELLOW << raw << RESET << std::endl;
	ptr = serializer.deserialize(raw);
	std::cout << BLUE << "The unsigned int value converted into a pointer to Data: " << RESET << YELLOW << ptr << RESET << std::endl;
	
	delete obj;
	return 0;
}