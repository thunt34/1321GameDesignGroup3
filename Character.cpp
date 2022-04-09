#include "Character.h"
#include <cstdlib>
#include <ctime>

void Character::attack(Monster &target)

{
  srand((unsigned) time(0));
  hitchc = (rand() % 100);
  if(hitchc >=50){
  if(target.mhealth < 0){
  target.mhealth = 0;
  } 
  float damage = (float)(sdamage*(((rand()%100)/100)+1));
  target.mhealth -= damage;
  cout << name << " attacks the " << target.mname << " doing " << damage << " damage!" << endl;
  cout << target.mname << " health: " << target.mhealth << endl;
    }
  else cout << name << " missed!" << endl;
}

void Character::defense(Monster& target)
{

  if (sarmor == 0)
    cout << name << ", your armor is broken!" << endl;
 
}
void Character::heal(Character& target)
{
    int pChoice;
    int setPotion[2] = {p,maxp};
		cout << "Which Potion do you wish to use?" << endl;
            cout << "1.Potion - " << setPotion[0] << endl;
            cout << "2.Max Potion - " << setPotion[1] << endl;
            
            cin >> pChoice;
            switch(pChoice){
              case 1:
                if (p == 0){
		        cout << name << " is out of Potions!" << endl;
                  }
                else{
              p = p - 1;
              health = health+20;
                  if(health>shp){
    health = shp;
                    }
                  }
              break;
              
              case 2:
                 if (maxp == 0){
		        cout << name << " is out of Max Potions!" << endl;
                  }
                else{
              maxp = maxp - 1;
              health = shp;
                  if(health>shp){
    health = shp;
                    }
                  }
              break;
              
	}
    
}
void Character::flee(Character& target){
  srand((unsigned) time(0));
  cflee = (rand() % 10);
  if(cflee >= 7){
    aflee = 1;
  }
  else cout << name << " failed to flee!" << endl;
  
}
Character::Character(string newname)

{

  name = newname;
  
   
  health = 100;
  shp = health;
  sdamage = 3;
  sarmor = 20;
  p = 5;
  maxp = 1;
}

void Character::display()

{
if(sarmor > 0){
  cout << name << " health: " << health << "  armor: " << sarmor << endl << endl;
  }
  else cout << name << " health: " << health << endl << endl;
}
