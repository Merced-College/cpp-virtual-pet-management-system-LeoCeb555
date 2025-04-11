#ifndef PANDA_H
#define PANDA_H

#include <string>
#include <iostream>
#include "Pet.h"

class Panda:public Pet{
private:
    //variable for panda's favorite meal
    std::string favoriteMeal;
    std::string mood;

public:
    //constructors
    Panda();
    Panda(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& mood, 
        const std::string& favoriteMeal);

    //Accessors
    std::string getFavoriteMeal() const;
    std::string getMood() const;

    //Mutators
    void setFavoriteMeal(const std::string& favoriteMeal);
    void setMood(const std::string& mood) override;

    //Overrides
    void printInfo() const override;
    void makeSound() const override;

    //New function
    void doTrick() const override;
};

#endif