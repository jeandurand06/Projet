#include "position.h"

position::position(int x,int y):m_x(x),m_y(y)
{

}

position::~position()
{

}

int position::X(){
    return m_x;
}

int position::Y(){
    return m_y;
}

void position::setX(int x){
    m_x = x;
}

void position::setY(int y){
    m_y = y;
}

