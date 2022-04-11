#include <iostream>
using namespace std;

#include "Monster.h"
#include "Character.h"
#include "Combat.h"

Monster 
goblin("goblin",50,2);



int main (int argc, char * const argv[]) {

    Character C("George");
  
    Combat combat(goblin);
  
    combat.combat1(C);

    

    return 0;
}
