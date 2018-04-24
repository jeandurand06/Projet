#include "Fox.h"
#include <iostream>
#include <cstdlib>


using namespace std;


Fox::Fox(int x,int y,World* world):Animal(x,y,world){
    m_strength=3;
    m_initiative=7;

}

Fox::~Fox(){
    delete m_world;
}

void Fox::action(){
	std::vector<position> neighbour = (*this).getNeighbour();
	for( std::vector<position>::iterator iter = neighbour.begin(); iter != neighbour.end(); ++iter){
        if(m_world->getOrganism(iter->X(),iter->Y())->getStrength()>m_strength){
            neighbour.erase(iter);
        }
    }
    if(neighbour.size()!=0){// collision
        int r = (rand() % neighbour.size());
    	(*this).setposition(neighbour[r].X(),neighbour[r].Y());
    }
}


