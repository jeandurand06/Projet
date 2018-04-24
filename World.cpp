#include "World.h"
#include "Organism.h"
#include <vector>
#include <string>
#include <iostream>

World::World():m_M(10),m_N(10){

    m_map = new Organism**[m_M];
    for(int i = 0; i < m_M; i++) {
        m_map[i] = new Organism*[m_N];
        for(int j = 0; j < m_N; j++)
            m_map[i][j] = NULL;
    }
}
void World::drawWorld(){
    for(int i =0;i<m_M;i++){
        for(int j =0;j<m_N;j++){
            if(m_map[i][j] != 0){
                std::cout << "On a un organisme" << std::endl;}
        }
    }


}
World::World(int N, int M):m_N(N),m_M(M){

    m_map = new Organism**[m_M];
    for(int i = 0; i < m_M; i++) {
        m_map[i] = new Organism*[m_N];
        for(int j = 0; j < m_N; j++)
            m_map[i][j] = NULL;
    }

}

World::~World(){
    for (int i = 0; i < m_M; i++)
      delete [] m_map[i];
   delete [] m_map;

}
Organism* World::getOrganism(int x,int y){
    return m_map[x][y];
}

 


void World::addOrganism(Organism* o,int x,int y){
    m_map[x][y] = o;
    m_organisms.push_back(o);
}

int World::getM(){
    return m_M;
}

int World::getN(){
    return m_N;
}

void World::play(){
    int i =0;
    int N = m_organisms.size();
    while(i<N){
        m_organisms[i]->action();
        i++;
    }
}

