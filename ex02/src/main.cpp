#include "../inc/AAnimal.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main()
{
    std::cout << "--- Creating Animals ---" << std::endl;

    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();

    std::cout << "\n--- Testing getType and makeSound ---" << std::endl;
    std::cout << "Dog type: " << dog->getType() << std::endl;
    dog->makeSound();

    std::cout << "Cat type: " << cat->getType() << std::endl;
    cat->makeSound();

    std::cout << "\n--- Deleting Animals ---" << std::endl;
    delete dog;
    delete cat;

    std::cout << "\n--- Testing Abstract Instantiation ---" << std::endl;
   // AAnimal* a = new AAnimal();

    std::cout << "Can't instantiate Aanimal directly because it's abstract\n";
    
    return (0);
}