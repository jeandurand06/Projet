#ifndef TURTLE_H
#define TURTLE_H
#include "Animal.h"
#include "Organism.h"


class Turtle : public Animal
{
    public:

        Turtle(int x,int y,World* world);
        ~Turtle();
        void action();
        void collision();
        
};

#endif // ANIMAL_H
