#include "Plant.h"
#include <stdlib.h>
#include "position.h"
#include "World.h"
#include <vector>

Plant::Plant(int x,int y,World* world):Organism(x,y,world){
	m_initiative=0; 

}
Plant::~Plant(){
    delete m_world;
}

void Plant::action(){
    if((rand() % 100 + 1)<101){
        std::vector<position> neighbour = getFreeNeighbour();
        int r = (rand() % neighbour.size());
        Organism* o = new Plant(neighbour[r].X(),neighbour[r].Y(),m_world);
        (*m_world).addOrganism(o,neighbour[r].X(),neighbour[r].Y());


    }
}
void Plant::collision(){}
void Plant::draw(){}