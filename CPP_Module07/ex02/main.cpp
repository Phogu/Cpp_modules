#include "Array.hpp"
int main()
{
    Array<int> a(8);

    unsigned int sizeofarr = a.size();
    std::cout << BLUE << "Size of array: " << RESET << YELLOW << sizeofarr << RESET << std::endl;
    for (unsigned int i = 0; i < sizeofarr; i++)
        a[i] = i;
    for (unsigned int i = 0; i < sizeofarr; i++)
        std::cout << YELLOW << a[i] << RESET << std::endl;
    
    std::cout << BLUE << "---------------------" << RESET << std::endl;

    try
    {
        std::cout << BLUE << "Trying to access a -> " << RESET;
        std::cout << YELLOW << a[9] << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << YELLOW << e.what() << RESET << '\n';
    }
    return 0;
}