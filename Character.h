#ifndef Character_h
#define Character_h
#include "Monster.h" 
#include "main.h"   
#include <iostream>
using namespace std;
class Character

    {
    public:


        string name;
        
        short health;
        short shp;
        short sdamage;
        short sarmor;
        int p, maxp;
        int hitchc;
        int cflee;
        bool aflee = 0;
        
        Character(string newName);
        void attack(Monster& target);
        void defense(Monster& target);
        void display();
        void heal(Character& target);
        void flee(Character& target);

    };

#endif
