#ifndef CAT_H
#define CAT_H

#include <string>
#include <iostream>
#include "Pet.h"

class Cat:public Pet{
private:
    //class attributes
    std::string favoriteToy;

public:
    //default constructor
    Cat();

    //parameterized constructor
    Cat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& favoriteToy);
    
    //Accessors
    std::string getFavoriteToy(){
        return favoriteToy;
    }
    
    //Mutators
    void setFavoriteToy(const std::string& favoriteToy);
    
    //Override
    void printInfo() const;
    virtual void makeSound() const;
};

#endif