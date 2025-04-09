#include "../inc/Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
    _brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    _type =  other._type;
    _brain = new Brain(*other._brain); // deep copy
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
        delete _brain;
        _brain = new Brain(*other._brain); // deep copy
    }
    return (*this);
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Miau Miau!" << std::endl;
}