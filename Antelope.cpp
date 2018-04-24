#include "Antelope.h"
#include <iostream>
#include <cstdlib>
#include "Organism.h"


using namespace std;


Antelope::Antelope(int x,int y,World* world):Animal(x,y,world){
    m_strength=4;
    m_initiative=4;

}

Antelope::~Antelope(){
    delete m_world;
}
void Antelope::action(){   //2 memes deplacments d'affilés peut faire mieux 
    int random = rand() % 3;
    cout<<random<<endl;
     switch(random) {
        case 0:
        {
            cout<<"Go Up"<<endl;
            (*this).setposition(m_pos.X()+2,m_pos.Y());
        }break;
        case 1:
        {
            cout<<"Go Down"<<endl;
             (*this).setposition(m_pos.X()-2,m_pos.Y());
        }break;
        case 2:
        {
            cout<<"Go Left"<<endl;
             (*this).setposition(m_pos.X(),m_pos.Y()+2);
        }break;
        case 3:
        {
            cout<<"Go Right"<<endl;
             (*this).setposition(m_pos.X(),m_pos.Y()-2);
        }break;
    }
    }
void Antelope::collision(){
}

