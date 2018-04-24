#ifndef FOX_H
#define FOX_H
#include "Animal.h"


class Fox : public Animal
{
    public:

        Fox(int x,int y,World* world);
        ~Fox();
        void action();
        
};

#endif // ANIMAL_H

