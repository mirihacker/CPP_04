#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    const WrongAnimal *WA = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();

    std::cout << WA->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    WA->makeSound();
    k->makeSound();

    delete meta; 
    delete i; 
    delete j;
    delete k;
    delete WA;

    return 0;
}