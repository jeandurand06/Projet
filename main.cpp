#include <iostream>
#include <vector>
#include "Grass.h"
#include "SowThistle.h"
#include "Guarana.h"
#include "Belladonna.h"
#include "SosHog.h"
#include "Human.h"
#include "Wolf.h"
#include "Sheep.h"
#include "Fox.h"
#include "Turtle.h"
#include "Antelope.h"
#include "CyberSheep.h"
#include <stdlib.h>
using namespace std;

int main()
{
    World *myworld = new World(10,10);
    Organism* p1 = new CyberSheep(2,3,myworld);
    myworld->addOrganism(p1,2,3);
    vector<position> neighbour = myworld->getOrganism(2,3)->getFreeNeighbour();

    //boucle qui affiche les coordonnées des voisins libres
    for(int i =0; i<neighbour.size(); i++){
        cout<< neighbour[i].X();
        cout << ",";
        cout<< neighbour[i].Y()<< endl;
    }
    cout<< "  "<< endl;

    //boucle qui affiche "on a un organisme à chaque organisme non NULL dans la map
    for(int i =0;i<10;i++){
        for(int j =0;j<10;j++){
            Organism* o = myworld->getOrganism(i,j);
            if(o){
                cout << "On a un organisme" << endl;}
        }
    }


    myworld->play();
    cout<<"  "<< endl;
    cout<<"après un tour"<<endl;
    // meme boucle que précédemment après avoir fait un tour
    cout <<"  "<< endl;

    for(int i =0;i<10;i++){
        for(int j =0;j<10;j++){
            Organism* o = myworld->getOrganism(i,j);
            if(o){
                cout << "On a un organisme" << endl;}
        }
    }
}
