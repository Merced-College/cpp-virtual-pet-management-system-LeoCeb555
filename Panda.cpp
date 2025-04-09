#include "Panda.h"
#include "Pet.h"

//default constructor
Panda::Panda() : Pet("Unnamed", "Unknown", 0, 5), favoriteMeal("None"){}

//parameterized constructor
Panda::Panda(const std::string& name, const std::string& species, int age, int hungerLevel, 
    const std::string& mood, const std::string& favoriteMeal) 
    : Pet(name, species, age, hungerLevel), mood(mood), favoriteMeal(favoriteMeal){}

//Accessors
std::string Panda::getFavoriteMeal() const{
    return favoriteMeal;
}
std::string Panda::getMood() const{
    return mood;
}

//Mutators
void Panda::setFavoriteMeal(const std::string& favoriteMeal){
    this->favoriteMeal = favoriteMeal;
}
void Panda::setMood(const std::string& mood){
    this->mood = mood;
}

//Overrides
void Panda::printInfo() const{
    Pet::printInfo();
    std::cout << "Mood: " << mood << std::endl;
    std::cout << "Favorite meal: " << favoriteMeal << std::endl;
}

void Panda::makeSound() const{
    std::cout << "Panda " << getName() << " squeals." << std::endl;
}

//New function
void Panda::doTrick() const{
    if (getMood() == "Happy"){
        std::cout << getName() << " claps his hands together and rolls over!" << std::endl;
    }
    if (getMood() == "Angry" || getMood() == "Sad"){
        std::cout << getName() << " refuses to do a trick!" << std::endl;
    }
}