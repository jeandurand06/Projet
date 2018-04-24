#ifndef ANTELOPE_H
#define ANTELOPE_H
#include "Animal.h"
#include "Organism.h"


class Antelope : public Animal
{
    public:

        Antelope(int x,int y,World* world);
        ~Antelope();
        void action();
        void collision();
        
};

#endif // ANIMAL_H
