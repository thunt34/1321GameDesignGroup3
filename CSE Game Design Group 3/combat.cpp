#include "combat.h"
#include "enemy.h"
#include "character.h"
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <algorithm>
combat::combat(enemy& newM) : M(newM) {

}

void combat::combatChoice(character& C) {

    C.display();
    string choice = "";
    do {
        cout << "What do you do? (a)ttack, (f)lee" << endl;

        cin >> choice;

        while (choice.size() != 1) {
            cout << "Please enter only one character." << endl << endl;
            cin >> choice;
        }

        for_each(choice.begin(), choice.end(), [](char& c) {
            c = tolower(c);
            });

        if ((choice != "a") && (choice != "f")) {
            cout << "Invalid input!" << endl << endl;
        }

    } while ((choice != "a") && (choice != "f"));

    if (choice == "a") {
        C.attack(M);
    }

    else if (choice == "f") {
        C.flee(C);
    }
}

void combat::combat1(character& C) {

    while (M.mhealth > 0 && C.charHP > 0 && C.aflee == 0) {

        M.attack(C);
        combatChoice(C);
    }
    if (M.mhealth > 0 && C.charHP > 0 && C.aflee == 1) {
        cout << C.name << " has fleed the battle!" << endl;
        C.cflee = 0;
        C.aflee = 0;
    }

    if (M.mhealth <= 0) {
        cout << "You killed the " << M.mname << "!" << endl;
    }

    if (C.charHP <= 0) {
        cout << "YOU HAVE DIED! GAME OVER" << endl;
    }
}
