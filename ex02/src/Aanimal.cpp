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