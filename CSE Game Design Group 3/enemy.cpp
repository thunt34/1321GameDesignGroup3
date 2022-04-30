#include "enemy.h"
#include <cstdlib>
#include <ctime>

void enemy::attack(character& target)
{
    srand((unsigned)time(0));
    hitchc = (rand() % 10);
    if (hitchc >= 5) {
        if (target.charDef < 0) {
            target.charDef = 0;
        }
          if(mdamage > target.charDef){
      float excess = damage - target.charDef;
      target.health -= excess;
    }
        if (target.charDef == 0) {
            float damage = (float)(mdamage * (((rand() % 100) / 100) + 1));
            target.charHP -= damage;
            cout << mname << " attacks " << target.name << " doing " << damage << " damage!" << endl;
            cout << mname << " health: " << mhealth << endl;
        }
        else {
            float damage = (float)(mdamage * (((rand() % 100) / 100) + 1));
            target.charDef -= damage;
            cout << mname << " attacks " << target.name << " doing " << damage << " damage!" << endl;


        }
    }
    else cout << "The " << mname << " missed!" << endl;
}

enemy::enemy(string newname, int newHealth, int newDamage)
{
    mname = newname;
    mhealth = newHealth;
    mdamage = newDamage;
}
