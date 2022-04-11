#include "combat.h"
#include "enemy.h"
#include "character.h"
#include <cstdlib>
#include <ctime>

combat::combat(enemy& newM) : M(newM) {

}

void combat::combatChoice(character& C) {

    C.display();
    std::cout << "Press 1 to attack." << endl;
    short choice;
    std::cin >> choice;
    switch (choice) {
    case 1:
        C.attack(M);
        break;
    /*
    case 2:
        C.heal(C);
        break;

    case 3:
        C.flee(C);
        break;
    */
    Default:
        std::cout << "Can't do that!\n";
        break;
    }

}

void combat::combat1(character& C) {

    while (M.mhealth > 0 && C.charHP > 0 && C.aflee == 0) {

        M.attack(C);
        combatChoice(C);
    }
    if (C.charHP <= 0) {
        cout << "YOU HAVE DIED! GAME OVER" << endl;
    }
    //if (M.mhealth > 0 && C.charHP > 0 && C.aflee == 1) {
    //    cout << C.name << " has fleed the battle!" << endl;
    //}

    if (M.mhealth <= 0) {
        cout << "You killed the " << M.mname << "!" << endl;
    }
}