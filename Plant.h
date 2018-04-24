#ifndef PLANT_H
#define PLANT_H
#include "Organism.h"


class Plant : public Organism
{
    public:

        Plant(int x,int y,World* world);
        ~Plant();
        void action();
        void collision();
        void draw(); 
    protected:


    private:
};

#endif // PLANT_H
