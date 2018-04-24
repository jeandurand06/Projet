#include "Organism.h"
#include <vector>
#include <stdlib.h>
#include "position.h"


Organism::Organism(int x,int y,World* world):m_pos(x,y){

    m_world = world;
}

Organism::~Organism(){
    delete m_world;
}

position Organism::getposition(){
    return m_pos;
}
void Organism::setposition(int x,int y){
    m_pos.setX(x);
    m_pos.setY(y);
}
int Organism::getStrength(){
    return m_strength;
}
void Organism::setStrength(int a){
    m_strength=a;
    }

std::vector<position> Organism::getNeighbour(){
    std::vector<position> neighbour;

    if(m_pos.X()>0){
        neighbour.push_back(position(m_pos.X()-1,m_pos.Y()));
    }
    if(m_world->getM() > m_pos.X()){
        neighbour.push_back(position(m_pos.X()+1,m_pos.Y()));
    }
    if(m_pos.Y()>0){
        neighbour.push_back(position(m_pos.X(),m_pos.Y()-1));
    }
    if(m_pos.Y() < m_world->getN()){
        neighbour.push_back(position(m_pos.X(),m_pos.Y()+1));
    }
    return neighbour;
}
std::vector<position> Organism::getFreeNeighbour(){
    std::vector<position> neighbour = getNeighbour();
    for( std::vector<position>::iterator iter = neighbour.begin(); iter != neighbour.end(); ++iter){
        if(m_world->getOrganism(iter->X(),iter->Y())){
            neighbour.erase(iter);
        }
    }
    return neighbour;
}



