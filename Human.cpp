#include <iostream>
#include <string>
#include <vector>
#include "Human.h"
#include <stdio.h>

Human::Human(int x,int y,World *world):Animal(x,y,world){
    m_strength=5;
    m_initiative=4;

}

void Human::action(){
    int key;
    key=getchar();

    switch(key) {
        case UP:
        {
            cout<<"Go Up"<<endl;
            m_pos.setX(m_pos.X()-1);
        }break;
        case DOWN:
        {
            cout<<"Go Down"<<endl;
            m_pos.setX(m_pos.X()+1);
        }break;
        case LEFT:
        {
            cout<<"Go Left"<<endl;
            m_pos.setY(m_pos.Y()+1);
        }break;
        case RIGHT:
        {
            cout<<"Go Right"<<endl;
            m_pos.setY(m_pos.Y()+1);
        }break;
    }
}
void Human::collision(){
}
