#include "Guarana.h"
#include "Animal.h"
#include <stdlib.h>
#include "position.h"
#include "World.h"
#include <vector>

Guarana::Guarana(int x,int y,World* world):Plant(x,y,world){
	m_strength=0;
}
Guarana::~Guarana(){
    delete m_world;
}

void Guarana::collision(Animal a){
	a.setStrength(3+a.getStrength());
	}
