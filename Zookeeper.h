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

public:
    Zookeeper();
    Zookeeper(std::vector<Pet*> vector, std::string name);
};

#endif
