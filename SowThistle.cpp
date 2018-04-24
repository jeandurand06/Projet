#include "SowThistle.h"
#include <stdlib.h>
#include "position.h"
#include "World.h"
#include <vector>

SowThistle::SowThistle(int x,int y,World* world):Plant(x,y,world){
    m_strength=0;
}

SowThistle::~SowThistle(){
    delete m_world;
}

void SowThistle::action(){
	int i = 0;
	while(i<3){
		if((rand() % 100 + 1)<101){
        	std::vector<position> neighbour = getFreeNeighbour();
        	int r = (rand() % neighbour.size());
        	Organism* o = new Plant(neighbour[r].X(),neighbour[r].Y(),m_world);
        	(*m_world).addOrganism(o,neighbour[r].X(),neighbour[r].Y());	
    	}
    	i++;
	}

}