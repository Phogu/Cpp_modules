#include "Harl.hpp"

int main(void) {

    std::string input;
    Harl    harl;

    do
    {
        std::cout << "Enter a level: ";
        std::getline(std::cin, input);
        harl.complain(input);
    } while (input.compare("exit"));

    return EXIT_SUCCESS;
}