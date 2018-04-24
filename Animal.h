#ifndef ANIMAL_H
#define ANIMAL_H
#include "Organism.h"


class Animal : public Organism
{
    public:

        Animal(int x,int y,World* world);
        virtual ~Animal();
        virtual void action();
        virtual void collision();
        virtual void draw();
};

#endif // ANIMAL_H
