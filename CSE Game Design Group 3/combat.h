#ifndef Combat_h
#define Combat_h

#include <iostream>
using namespace std;

#include "character.h"
#include "enemy.h"

class combat {
public:
    enemy& M;
    combat(enemy& newM);
    void combatChoice(character& C);
    void combat1(character& C);
};
#endif