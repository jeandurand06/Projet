#ifndef WOLF_H
#define WOLF_H
#include "Animal.h"


class Wolf : public Animal
{
    public:

        Wolf(int x,int y,World* world);
        virtual ~Wolf();
        
};

#endif // ANIMAL_H