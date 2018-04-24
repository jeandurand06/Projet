#ifndef GUARANA_H
#define GUARANA_H
#include "Plant.h"
#include "Animal.h"


class Guarana : public Plant
{
    public:

        Guarana(int x,int y,World* world);
        ~Guarana();
        void collision(Animal a);
    protected:


    private:
};

#endif // PLANT_H
