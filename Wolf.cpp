#include "Wolf.h"
#include <iostream>
#include <cstdlib>


using namespace std;


Wolf::Wolf(int x,int y,World* world):Animal(x,y,world){
    m_strength=9;
    m_initiative=5;

}

Wolf::~Wolf(){
    delete m_world;
}


