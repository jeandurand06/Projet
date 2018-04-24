#ifndef SHEEP_H
#define SHEEP_H
#include "Animal.h"


class Sheep : public Animal
{
    public:

        Sheep(int x,int y,World* world);
        virtual ~Sheep();
        
};

#endif // ANIMAL_H