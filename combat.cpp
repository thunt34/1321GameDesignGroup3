#include "Combat.h"
#include "Monster.h"
#include "Character.h"
#include <cstdlib>
#include <ctime>

Combat::Combat(Monster& newM) : M(newM)

{

}
void Combat::combatChoice(Character& C)
{
    
    C.display();
    cout << "What do you do? 1 attack, 2 heal, 3 flee" << endl;
    short choice;
    cin >> choice;
    switch (choice)

    {
        case 1:
            C.attack(M);
            break;

        case 2:
            C.heal(C);
            break;

        case 3:
            C.flee(C);
            break;
      

        
    }
     
}


void Combat::combat1(Character& C)
{

    while  (M.mhealth>0 && C.health>0 && C.aflee == 0)

    {

        M.attack(C);
        combatChoice(C);
    }
    if(M.mhealth>0 && C.health>0 && C.aflee == 1)
      cout << C.name << " has fleed the battle!" << endl;
  
    if (M.mhealth<=0) 
        cout << "You killed the " << M.mname << "!" << endl;
        
    if (C.health<=0) 
        cout << "YOU HAVE DIED! GAME OVER" << endl;

}
