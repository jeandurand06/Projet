#ifndef CYBERSHEEP_H
#define CYBERSHEEP_H
#include "Animal.h"
#include "Organism.h"


class CyberSheep : public Animal
{
    public:

        CyberSheep(int x,int y,World* world);
        ~CyberSheep();
        void action();
        void collision();
        
};

#endif // ANIMAL_H
