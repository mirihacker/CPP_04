#include "../inc/Animal.hpp"

Animal::Animal(void) : _type("default")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    _type =  other._type;
}

Animal &Animal::operator=(Animal const &other)
{
    std::cout << "Animal copy operator constructor called" << std::endl;
    if (this != &other)
        _type = other._type;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << "grr default animal sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return(this->_type);
}
