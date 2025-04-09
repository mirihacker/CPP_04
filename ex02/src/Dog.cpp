#include "../inc/Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    _type =  other._type;
    _brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return (*this);
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof Woof!" << std::endl;
}