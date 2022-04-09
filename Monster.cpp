#include "Monster.h"
#include <cstdlib>
#include <ctime>

void Monster::attack(Character &target)
{
  srand((unsigned) time(0));
  hitchc = (rand() % 100);
  if(hitchc >=50){
  if(target.sarmor < 0){
  target.sarmor = 0;
  }
if(target.sarmor == 0){
  float damage = (float)(mdamage*(((rand()%100)/100)+1));
  target.health -= damage;
  cout << mname << " attacks " << target.name << " doing " << damage << " damage!" << endl;
  cout << mname << " health: " << mhealth << endl;
}
  else{
   float damage = (float)(mdamage*(((rand()%100)/100)+1));
  target.sarmor -= damage;
   cout << mname << " attacks " << target.name << " doing " << damage << " damage!" << endl;
  
  
}
    }
  else cout << "The " << mname << " missed!" << endl;
  }

Monster::Monster(string newname, int newHealth, int newDamage)
{
  mname = newname;
  mhealth = newHealth;
  mdamage = newDamage;
}
