#ifndef WORLD_H
#define WORLD_H
#include <vector>
class Organism;
#include "Organism.h"


class World
{
    public:

        World();
        World(int N,int M);
        virtual ~World();
        Organism* getOrganism(int x,int y);
       
        int getN();
        int getM();
        void play();
        void drawWorld();
        void addOrganism(Organism* o,int x, int y);




    protected:
    private:
    std::vector<Organism*> m_organisms;
    int m_M,m_N;
    Organism*** m_map;
};

#endif
