My custom pet is a Panda. I added two new members to the Pet base class, favoriteMeal and mood. I chose these two specific members because I think Pandas are most famous for their love of bamboo and calm/playful natures. Accessors and mutators were created for both members as well as override functions for printInfo() and makeSound(). The function printInfo() was updated to show the user the Panda's favorite meal and mood. Furthermore, makeSound() was updated to showcased the noise that a Panda normally makes! I also added a new function specifically for the Panda class which is called doTrick(). In this function, depending on the Panda's mood, they will either do a trick or not. Side note, I had to add mood and doTrick() as members of the Pet class in order for my Pet pointers to work with them.

For my challenge, I implemented a Zookeeper class that manages a vector of Pet* pointers. I added two main functions for zookeepers to interact with pets, feedPet(Pet* pet, string food) and giveFactAboutPet(Pet* pet) function. The function feedPet takes a Pet* pointer and tells the reader the pet was fed with whatever the food string value is. Furthermore, giveFactAboutPet gives the user an interesting fact about the pet depending on its species.