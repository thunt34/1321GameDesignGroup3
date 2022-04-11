#ifndef Monster_h 
#define Monster_h

#include <iostream>
using namespace std;

#include "Character.h" 
#include "main.h"    
class Monster
    {
    public:
        string mname;
        short mhealth;
        short mdamage;
        int hitchc;

        Monster(string newName, int newHealth, int newDamage);

        void attack(Character&);
        void combatChoice(Character& C);
    };
#endif