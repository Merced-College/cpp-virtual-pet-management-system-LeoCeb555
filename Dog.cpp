#include "Pet.h"
#include "Dog.h"


//Default constructor
Dog::Dog() : Pet("Unnamed", "Unknown", 0, 5), breed("Unknown") {}

//Paramaterized constructor
Dog::Dog(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& breed)
    : Pet(name, species, age, hungerLevel), breed(breed) {}

//Accessors
std::string Dog::getBreed() const{
    return breed;
}

//Mutators
void Dog::setBreed(const std::string& breed){
    this->breed = breed;
}

//Override
void Dog::printInfo() const{
    Pet::printInfo();
    std::cout << "Breed: " << breed << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Dog " << getName() << " barks." << std::endl;
}