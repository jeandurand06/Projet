#include "Animal.h"
#include <iostream>
#include <cstdlib>


using namespace std;


Animal::Animal(int x,int y,World* world):Organism(x,y,world){

}

Animal::~Animal(){
    delete m_world;
}
void Animal::action(){
    int random = rand() % 3;
    cout<<random<<endl;
     switch(random) {
        case 0:
        {
            cout<<"Go Up"<<endl;
        }break;
        case 1:
        {
            cout<<"Go Down"<<endl;
        }break;
        case 2:
        {
            cout<<"Go Left"<<endl;
        }break;
        case 3:
        {
            cout<<"Go Right"<<endl;
        }break;
    }
}
void Animal::collision(){
}
void Animal::draw(){}
