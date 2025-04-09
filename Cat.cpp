#include "Pet.h"
#include "Cat.h"

//default constuctor
Cat::Cat() : Pet("Unnamed", "Uknown", 0, 5), favoriteToy("None") {}

//parameterized constructor
Cat::Cat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& favoriteToy)
    : Pet(name, species, age, hungerLevel), favoriteToy(favoriteToy) {}

//Accessors
std::string Cat::getFavoriteToy(){
    return favoriteToy;
}

//Mutators
void Cat::setFavoriteToy(const std::string& favoriteToy){
    this->favoriteToy = favoriteToy;
}

//Override
void Cat::printInfo() const{
    Pet::printInfo();
    std::cout << "Favorite toy: " << favoriteToy << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Cat " << getName() << " meows." << std::endl;
}