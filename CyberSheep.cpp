#include "CyberSheep.h"
#include <iostream>
#include <cstdlib>
#include "Organism.h"


using namespace std;


CyberSheep::CyberSheep(int x,int y,World* world):Animal(x,y,world){
    m_strength=11;
    m_initiative=4;

}

CyberSheep::~CyberSheep(){
    delete m_world;
}
void CyberSheep::action(){}
void CyberSheep::collision(){}

