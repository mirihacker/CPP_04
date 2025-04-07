#include "../inc/Cat.hpp"

Cat::Cat() : Animal()
{
    _type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    _type =  other._type;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy operator called" << std::endl;
    if (this != &other)
        _type = other._type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Miau Miau!" << std::endl;
}