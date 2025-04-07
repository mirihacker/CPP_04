#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("default")
{
    std::cout << "WrongAnimal constructor called" << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    _type = other._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "WrongAnimal copy operator called" << std::endl;
    if (this != &other)
        _type = other._type;
    return(*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl; 
}

void WrongAnimal::makeSound() const
{
    std::cout << "akldaldhadldah!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}