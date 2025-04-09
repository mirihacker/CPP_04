#ifndef CAT_HPP
#define CAT_HPP

#include "../inc/Animal.hpp"
#include "../inc/AAnimal.hpp"
#include "../inc/Brain.hpp"

class Cat : public AAnimal 
{
    private:
        Brain* _brain;

    public:
        Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        ~Cat();
        void makeSound(void) const;
};

#endif