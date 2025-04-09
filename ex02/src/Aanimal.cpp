#include "../inc/AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    _type = other._type;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    std::cout << "AAnimal copy operator constructor called" << std::endl;
    if (this != &other)
        _type = other._type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
    return (_type);
}