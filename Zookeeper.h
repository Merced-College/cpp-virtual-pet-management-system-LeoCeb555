#ifndef ZOOKEEPER_H
#define ZOOKEEPER_H
#include <string>
#include <iostream>
#include <vector>
#include "Pet.h"

class Zookeeper{
private:
    std::string name;
    int age;
    std::string experienceLevel;
    std::vector<Pet*> pets;

public:
    //default constructor
    Zookeeper();

    //parameterized constructor
    Zookeeper(std::vector<Pet*> pets, const std::string& name, int age, const std::string& experienceLevel);

    //Accessors
    std::string getName() const;
    int getAge();
    std::string getExperienceLevel() const;
    std::vector<Pet*> getPets();

    //Mutators
    void setName(const std::string& name);
    void setAge(int age);
    void setExperienceLevel(const std::string& experienceLevel);
    void addPets(Pet* pet);

    //Functions
    void feedPet(Pet* pet, const std::string& food);
    void giveFactAboutPet(Pet* pet);
};

#endif
