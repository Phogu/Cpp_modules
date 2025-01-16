#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& copy);
    virtual ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal& other);

    void makeSound() const;
    const std::string& getType() const;
};