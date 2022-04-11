#pragma once

#include <iostream>
using namespace std;

#include "Character.h" 
#include "main.h"

class enemy {
public:
    string mname;
    short mhealth;
    short mdamage;
    int hitchc;

    enemy(string newName, int newHealth, int newDamage);

    void attack(character&);
    void combatChoice(character& C);
};