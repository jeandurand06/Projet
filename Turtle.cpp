#include "Turtle.h"
#include <iostream>
#include <cstdlib>
#include "Organism.h"


using namespace std;


Turtle::Turtle(int x,int y,World* world):Animal(x,y,world){
    m_strength=2;
    m_initiative=1;

}

Turtle::~Turtle(){
    delete m_world;
}
void Turtle::action(){
if((rand() % 100 + 1)<26){
        std::vector<position> neighbour = getNeighbour();
        int r = (rand() % neighbour.size());
        (*this).setposition(neighbour[r].X(),neighbour[r].Y());
    }
       

    }
void Turtle::collision(){
    //if(o.getStrength()<5){
        //o.setposition()
   

}

