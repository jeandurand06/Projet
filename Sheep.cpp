#include "Sheep.h"
#include <iostream>
#include <cstdlib>


using namespace std;


Sheep::Sheep(int x,int y,World* world):Animal(x,y,world){
    m_strength=4;
    m_initiative=4;

}

Sheep::~Sheep(){
    delete m_world;
}


