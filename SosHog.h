#ifndef SOSHOG_H
#define SOSHOG_H
#include "Plant.h"
#include "Animal.h"


class SosHog : public Plant
{
    public:

        SosHog(int x,int y,World* world);
        ~SosHog();
        void action();
        void collision(Animal a);
    protected:


    private:
};

#endif // PLANT_H
