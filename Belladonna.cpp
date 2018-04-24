#include "Belladonna.h"
#include <stdlib.h>
#include "position.h"
#include "World.h"
#include <vector>
#include "Animal.h"

Belladonna::Belladonna(int x,int y,World* world):Plant(x,y,world){
	m_strength=99;
}
Belladonna::~Belladonna(){
    delete m_world;
}

void Belladonna::collision(Animal a){
	position p = a.getposition();
	m_world->addOrganism(NULL,p.X(),p.Y());
	m_world->addOrganism(NULL,m_pos.X(),m_pos.Y());
	}
