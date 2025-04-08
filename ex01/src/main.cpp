#include "../inc/Brain.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main(void)
{
    const int size = 6;
    Animal* animals[size];

    std::cout << "=== Creating Animals ===" << std::endl;
    for (int i = 0; i < size; i++)
    {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    
    std::cout << "\n=== Making Sounds ===" << std::endl;
    for (int i = 0; i < size; i++)
        animals[i]->makeSound();

    std::cout << "\n=== Deleting Animals ===" << std::endl;
    for (int i = 0; i < size; i++)
        delete animals[i];

    std::cout << "\n=== Deep Copy Test ===" << std::endl;
    Dog originalDog;
    Dog copiedDog = originalDog;

    std::cout << "\n=== Done ===" << std::endl;
}