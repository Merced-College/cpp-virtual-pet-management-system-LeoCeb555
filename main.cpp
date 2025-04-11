#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Panda.h"
#include "Zookeeper.h"
#include <vector>

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

    //Testing Dog object
    Pet* myDog = new Dog("Bone", "Dog", 5, 10, "Pitbull");
    std::cout << std::endl;
    myDog->makeSound();
    std::cout << std::endl;
    myDog->printInfo();

    //Testing Cat object
    Pet* myCat = new Cat("Lora", "Cat", 6, 3, "Mouse toy");
    std::cout << std::endl;
    myCat->makeSound();
    std::cout << std::endl;
    myCat->printInfo();

    //Testing Panda object
    Pet* myPanda = new Panda("Po", "Panda", 8, 1, "Happy", "Bamboo");
    std::cout << std::endl;
    myPanda->makeSound();
    myPanda->printInfo();
    std::cout << std::endl;
    //Testing doTrick (does trick when happy, doesn't do trick when angry)
    myPanda->doTrick();
    myPanda->setMood("Angry");
    myPanda->doTrick();
    std::cout << std::endl;

    //Creating vector to track animals
    std::vector<Pet*> Pets;
    Pets.push_back(myDog);
    Pets.push_back(myCat);
    Pets.push_back(myPanda);

    //Loop through vector to call makeSound() polymorphically
    for (Pet* pet : Pets){
        pet->makeSound();
    }

    std::cout << std::endl;

    //Creating Zookeeper object
    Zookeeper zookeeperLeo(Pets, "Leo", 19, "Expert");

    //Testing setName
    zookeeperLeo.setName("Leonardo");

    //Testing getPets
    for(Pet* pet: zookeeperLeo.getPets()){
        std::cout << "Zookeeper " << zookeeperLeo.getName() << " manages "
            << pet->getName() << " the " << pet->getSpecies() << std::endl;
    }
    std::cout << std::endl;

    //Testing feedPet
    zookeeperLeo.feedPet(myPanda, "Bamboo");
    zookeeperLeo.feedPet(myDog, "Steak");
    std::cout << std::endl;

    //Testing giveFactAboutPet
    zookeeperLeo.giveFactAboutPet(myPanda);
    std::cout << std::endl;
    zookeeperLeo.giveFactAboutPet(myDog);
    std::cout << std::endl;
    zookeeperLeo.giveFactAboutPet(myCat);
    std::cout << std::endl;

    return 0;
}
