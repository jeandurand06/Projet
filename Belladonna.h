#ifndef BELLADONNA_H
#define BELLADONNA_H
#include "Plant.h"
#include "Animal.h"


class Belladonna : public Plant
{
    public:

        Belladonna(int x,int y,World* world);
        ~Belladonna();
        void collision(Animal a);
    protected:


    private:
};

#endif // PLANT_H
