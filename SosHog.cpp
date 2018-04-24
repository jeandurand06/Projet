#include "SosHog.h"
#include <stdlib.h>
#include "position.h"
#include "World.h"
#include "Animal.h"
#include "Organism.h"
#include <vector>


SosHog::SosHog(int x,int y,World* world):Plant(x,y,world){
	m_strength=10;

}
SosHog::~SosHog(){
    delete m_world;
}

void SosHog::action(){ //faire l'exception pour les cyber sheep
	std::vector<position> neighbour = (*this).getNeighbour();
	for( std::vector<position>::iterator iter = neighbour.begin(); iter != neighbour.end(); ++iter){
        if((m_world->getOrganism(iter->X(),iter->Y()))){
           	m_world->addOrganism(NULL,iter->X(),iter->Y());
        }
    }
    
}
	
    
void SosHog::collision(Animal a){ //faire exception cyber sheep
	position p = a.getposition();
	m_world->addOrganism(NULL,p.X(),p.Y());
	m_world->addOrganism(NULL,m_pos.X(),m_pos.Y());
	}

