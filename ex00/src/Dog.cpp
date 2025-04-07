#include "../inc/Dog.hpp"

Dog::Dog() : Animal()
{
    _type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    _type =  other._type;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy operator called" << std::endl;
    if (this != &other)
        _type = other._type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof Woof!" << std::endl;
}