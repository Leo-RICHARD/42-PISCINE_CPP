#include "Cat.h"
#include "Dog.h"

int	main()
{
    //Animal *test = new Animal(); should not compile 
    Cat *i = new Cat();
    Dog *j = new Dog();
    Dog c = Dog(*j);

    i->giveIdea("spending more time sleeping");
    j->giveIdea("barking");
    std::cout << i->getType() << " thinks of : " << i->speakIdea(0) << std::endl;
    std::cout << j->getType() << " thinks of : " << j->speakIdea(0) << std::endl;

    delete i;
    delete j;

    return 0; 
}
