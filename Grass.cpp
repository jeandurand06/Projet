#include "Grass.h"
#include <stdlib.h>
#include "position.h"
#include "World.h"
#include <vector>

Grass::Grass(int x,int y,World* world):Plant(x,y,world){
	m_strength=0;

}
Grass::~Grass(){
    delete m_world;
}
