#ifndef ORGANISM_H
#define ORGANISM_H
class World;
#include "World.h"
#include <iostream>
#include <string>
#include <vector>
#include "position.h"
class Organism
{
    public:


        Organism(int x,int y,World *world);
        std::vector<position> getNeighbour();
        std::vector<position> getFreeNeighbour();
        position getposition();
        int getStrength();
        void setStrength(int a);
        void setposition(int x,int y);

        virtual ~Organism();
        virtual void action()=0;
        virtual void collision()=0;


    protected:

    int m_initiative,m_strength;
    position m_pos;
    World *m_world;


    private:
};

#endif // ORGANISM_H
