#ifndef DOG_HPP
#define DOG_HPP

#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* _brain;

    public:
        Dog();
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        ~Dog();
        void makeSound(void) const;
};

#endif