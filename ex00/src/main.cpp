#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"


void testCorrectAnimals()
{
    std::cout << "\n=== Testing Correct Animal Hierarchy ===\n" << std::endl;

    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\n[Types]" << std::endl;
    std::cout << "meta type: " << meta->getType() << std::endl;
    std::cout << "dog type: " << dog->getType() << std::endl;
    std::cout << "cat type: " << cat->getType() << std::endl;

    std::cout << "\n[Sounds]" << std::endl;
    meta->makeSound();
    dog->makeSound();
    cat->makeSound();

    std::cout << "\n[Destruction]" << std::endl;
    delete meta;
    delete dog;
    delete cat;
}

void testWrongAnimals()
{
    std::cout << "\n=== Testing WrongAnimal Hierarchy (Missing virtual) ===\n" << std::endl;

    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "\n[Types]" << std::endl;
    std::cout << "wrong type: " << wrong->getType() << std::endl;
    std::cout << "wrongCat type: " << wrongCat->getType() << std::endl;

    std::cout << "\n[Sounds]" << std::endl;
    wrong->makeSound();       // Expected: akldaldhadldah!
    wrongCat->makeSound();    // Expected: akldaldhadldah! (because function is not virtual)

    std::cout << "\n[Destruction]" << std::endl;
    delete wrong;
    delete wrongCat;
}

void testCopyAndAssign()
{
    std::cout << "\n=== Testing Copy Constructors and Assignment ===\n" << std::endl;

    Cat a;
    Cat b = a; // Copy constructor
    Cat c;
    c = a;     // Assignment

    Dog d;
    Dog e = d; // Copy constructor
    Dog f;
    f = d;     // Assignment

    WrongCat wa;
    WrongCat wb = wa;
    WrongCat wc;
    wc = wa;

    std::cout << "\n[Copy Test Sounds]" << std::endl;
    b.makeSound();
    e.makeSound();
    wb.makeSound();
}

int main()
{
    testCorrectAnimals();
    testWrongAnimals();
    testCopyAndAssign();

    std::cout << "\n=== Done Testing ===\n" << std::endl;
    return 0;
}

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();

//     const WrongAnimal *WA = new WrongAnimal();
//     const WrongAnimal* k = new WrongCat();

//     std::cout << WA->getType() << " " << std::endl;
//     std::cout << k->getType() << " " << std::endl;
//     WA->makeSound();
//     k->makeSound();

//     delete meta; 
//     delete i; 
//     delete j;
//     delete k;
//     delete WA;

//     return 0;
// }