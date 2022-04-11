#include "shop.h"
#include <iostream>
#include <string>

shop::shop(float a, int b, int c, int d, int e) {
	inflation = a;
	wallet = b;
	charAtk = c;
	charDef = d;
	charHP = e;
}

void shop::interact() {
    int shopInput;
    bool exit = 0;
    std::string n = "PLACEHOLDER";

    std::cout << "Welcome to the Shop of " << n << ". What would you like to buy today?\n";

    do {
        int swordPrice = (charAtk * charAtk) * (1 + inflation);
        int armorPrice = (charDef * charDef) * (1 + inflation);
        int p1Price = 100 * (1 + inflation);
        int p2Price = 500 * (1 + inflation);
        
        std:: cout << "HP: newChar.getHealth() | Wallet: " << wallet << " coins.\n"
            << "[1] Upgrade Sword (" << charAtk << " >> " << (charAtk + 20) << "): " << swordPrice << " coins.\n"
            << "[2] Upgrade Armor (" << charDef << " >> " << (charDef + 20) << "): " << armorPrice << " coins.\n"
            << "[3] Buy Heal Potion: " << p1Price << " || Heal HP by 20 points.\n"
            << "[4] Buy X Potion: " << p2Price << " || Fully restore HP.\n"
            << "[5] Exit\n";
        std::cin >> shopInput;

        if (shopInput == 1) {
            /*buy sword, subtract amount, newChar.overwite(atkindex, (atkindex+1) & newChar.overwite(1, (1-price)*/
            system("cls");
            if (wallet < swordPrice) {
                std::cout << "Sorry, you don't have enough money for that!\n" << std::endl;
            }
            else {
                std::cout << "Your attack power has increased by 20!\n"
                    << "Thank you for your purchase!\n" << std::endl;
                charAtk += 20;
                wallet -= swordPrice;
            }
        }
        else if (shopInput == 2) {
            /*buy armor, subtract amount, newChar.overwite(defindex, (defindex+1) & newChar.overwite(1, (1-price)*/
            if (wallet < armorPrice) {
                system("cls");
                std::cout << "Sorry, Link, I can't give credit!\n" <<
                    "Come back when you're a little... MMMMMRICHER!\n" << std::endl;
            }
            else {
                system("cls");
                std::cout << "Your defense has been increased by 20!\n"
                    << "Thank you for your purchase!\n" << std::endl;
                charDef += 20;
                wallet -= armorPrice;
            }
        }
        else if (shopInput == 3) {
            /*newChar.overwite(hpIndex, hpIndex + x) & newChar.overwite(1, (1-price)*/
            system("cls");
            if (wallet < p1Price) {
                std::cout << "Get tf outta here broke boi.\n" << std::endl;
            }
            else {
                if (charHP == 100) {
                    std::cout << "Sorry, your health is full!\n" << std::endl;
                }
                else if (charHP >= 80) {
                    std::cout << "Your health has been fully replenished!\n"
                        << "Thank you for your purchase!\n" << std::endl;
                    charHP = 100;
                }
                else {
                    std::cout << "Your health has increased from x to y!\n"
                        << "Thank you for your purchase!\n" << std::endl;
                    charHP += 20;
                }
            }
        }
        else if (shopInput == 4) {
            /*newChar.overwite(hpIndex, hpIndex + x) & newChar.overwite(1, (1-price)*/
            system("cls");
            if (wallet < p2Price) {
                std::cout << "Sorry, you don't have enough money for that!\n" << std::endl;
            }
            else {
                if (charHP == 100) {
                    std::cout << "Sorry, your health is full!\n" << std::endl;
                }
                else {
                    charHP = 100;
                    std::cout << "Your health has been fully replenished!\n"
                        << "Thank you for your purchase!\n" << std::endl;
                }
            }
        }
        else if (shopInput == 5) {
            system("cls");
            std::cout << "Thank you for visiting! We wish you the best with your explorations!\n" << std::endl;
            exit = 1;
        }
    } while (exit == 0);

    newAtk = charAtk;
    newDef = charDef;
    newHP = charHP;
}

int shop::getWallet() {
    return wallet;
}

void shop::setWallet(int a) {
    wallet = a;
}