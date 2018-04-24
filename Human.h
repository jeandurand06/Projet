#ifndef HUMAN_H
#define HUMAN_H
#include "Animal.h"
using namespace std;

#define UP 122
#define DOWN 115
#define LEFT 113
#define RIGHT 100


class Human : public Animal
{
    public:

        Human(int x,int y,World *world);
        void action();
        void collision();
};

#endif // Human_H
