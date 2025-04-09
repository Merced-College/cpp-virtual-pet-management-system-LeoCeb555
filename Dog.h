#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>
#include "Pet.h"

class Dog:public Pet{
private:
    //class attributes
    std::string breed;

public:
    //constructors
    Dog();
    Dog(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& breed);

    //Accessors
    std::string getBreed() const;

    //Mutators
    void setBreed(const std::string& breed);

    //Override
    void printInfo() const override;
    void makeSound() const override;
};

#endif