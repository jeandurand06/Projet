#ifndef SOWTHISTLE_H
#define SOWTHISTLE_H
#include "Plant.h"


class SowThistle : public Plant
{
    public:

        SowThistle(int x,int y,World* world);
        ~SowThistle();
        void action();
        
    protected:


    private:
};

#endif // S
