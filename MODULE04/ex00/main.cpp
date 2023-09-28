#include "Cat.h"
#include "WrongCat.h"
#include "Dog.h"
#include "WrongDog.h"

int	main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wj = new WrongDog();
    const WrongAnimal* wi = new WrongCat();
    std::cout << wj->getType() << " " << std::endl;
    std::cout << wi->getType() << " " << std::endl;
    wi->makeSound(); //will NOT output the cat sound!
    wj->makeSound();
    wmeta->makeSound();

    delete meta;
    delete j;
    delete i;
    delete wmeta;
    delete wj;
    delete wi;

    return 0; 
}
