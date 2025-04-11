#include "Zookeeper.h"
#include <iostream>

//Default constructor
Zookeeper::Zookeeper() : pets(), name("Unnamed"), age(18), experienceLevel("Amatuer"){}

//Paramaterized constructor
Zookeeper::Zookeeper(std::vector<Pet*> pets, const std::string& name, int age, const std::string& experienceLevel)
    : pets(pets), name(name), age(age), experienceLevel(experienceLevel){}

//Accessors
std::string Zookeeper::getName() const{
    return name;
}

int Zookeeper::getAge(){
    return age;
}

std::string Zookeeper::getExperienceLevel() const{
    return experienceLevel;
}

std::vector<Pet*> Zookeeper::getPets(){
    return pets;
}

//Mutators
void Zookeeper::setName(const std::string& name){
    this->name = name;
}
void Zookeeper::setAge(int age){
    this->age = age;
}
void Zookeeper::setExperienceLevel(const std::string& experienceLevel){
    this->experienceLevel = experienceLevel;
}
void Zookeeper::addPets(Pet* pet){
    pets.push_back(pet);
}

//Functions
void Zookeeper::feedPet(Pet* pet, const std::string& food){
    std::cout << "Zookeeper " << getName() << " feeds " << food << " to " << pet->getName() << std::endl;
}
void Zookeeper::giveFactAboutPet(Pet* pet){
    if(pet->getSpecies() == "Panda"){
    std::cout << pet->getName() << " is a panda. Did you know that pandas are considered" <<
    " 'living fossils' as they have been on Earth for at least 8 million years." << std::endl;
    }
    else if(pet->getSpecies() == "Cat"){
        std::cout << pet->getName() << " is a cat. Did you know that a cat’s purr isn’t" <<
        " just cute—it’s a self-repair mechanism. Studies show that: the frequency of a" <<
        " domestic cat’s purr (25–150 Hz) promotes bone and tissue regeneration. " << std::endl;
    }
    else{
        std::cout << pet->getName() << " is a dog. Did you know that dogs prefer to align" <<
        " their bodies along Earth’s north-south magnetic field when relieving themselves." << 
        " This behavior is so consistent that researchers call it 'magnetoreception'—a " <<
        "hidden sense we’re still trying to fully understand." << std::endl;
    }
}