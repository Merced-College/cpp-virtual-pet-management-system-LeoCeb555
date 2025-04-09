#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Panda.h"

int main() {
    Pet pet1("Rex", "Dog", 3, 6);
    Pet pet2("Whiskers", "Cat", 2, 4);

    std::cout << "Pet 1 Info:\n";
    pet1.printInfo();

    std::cout << "\nPet 2 Info:\n";
    pet2.printInfo();

    std::cout << "\nComparing pets by name: ";
    int result = pet1.compareTo(pet2);
    if (result < 0) std::cout << pet1.getName() << " comes before " << pet2.getName() << "\n";
    else if (result > 0) std::cout << pet1.getName() << " comes after " << pet2.getName() << "\n";
    else std::cout << "Both pets have the same name.\n";

    Pet* myDog = new Dog("Bone", "Mammal", 5, 10, "Pitbull");
    std::cout << std::endl;
    myDog->makeSound();
    std::cout << std::endl;
    myDog->printInfo();

    Pet* myCat = new Cat("Lora", "Mammal", 6, 3, "Mouse toy");
    std::cout << std::endl;
    myCat->makeSound();
    std::cout << std::endl;
    myCat->printInfo();

    Pet* myPanda = new Panda("Po", "Mammal", 8, 1, "Happy", "Bamboo");
    std::cout << std::endl;
    myPanda->makeSound();
    myPanda->printInfo();
    std::cout << std::endl;
    myPanda->doTrick();
    std::cout << std::endl;

    return 0;
}
