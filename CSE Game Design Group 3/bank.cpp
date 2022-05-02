#include "bank.h"
#include "catch_err.h"
#include <string>
#include <iostream>
#include <chrono>
#include <thread>

catch_err b;

bank::bank(double a, int b, int c) {
	interest = a;
	savings = b;
	wallet = c;
}

bank::bank(int a, int b) {
	interest = 0.00;
	savings = a;
	wallet = b;
}

int bank::withdraw(int amt) {
	savings -= amt;
	wallet = wallet + amt;
	return wallet;
}

int bank::deposit(int amt) {
	savings += amt;
	wallet = wallet - amt;
	return wallet;
}

void bank::interact() {
	short exit = 0;
	std::string select;
	int amt;
	bool madeDeposit = 0;
	
	savings = savings * (1 + interest);

	std::cout << "Welcome to the bank! You currently have " << savings << " coins in your account!\n";
	while (exit == 0) {
		exit = 0;
		std::cout << std::endl << "What would you like to do? \n"
			<< "[1] Deposit\n" << "[2] Withdraw\n" << "[3] Exit\n";
		
		do {
			std::cin >> select;
			switch (b.getVal(select)) {
			case 1:
				if (wallet <= 0) {
					std::cout << "Sorry, you can not make a deposit at this time!\n";
				}
				else {
					std::cout << "Okay, you currently have " << wallet << " coins in your wallet.\n"
						<< "How much would you like to deposit? ";
					std::cin >> amt;
					if (amt > wallet) {
						std::cout << "Sorry, you do not have that much in your wallet!\n";
					}
					else if (amt <= 0) {
						std::cout << "Sorry, you have to put in a valid amount!\n";
					}
					else {
						bank::deposit(amt);
						madeDeposit = 1;
						std::cout << "You now have " << savings << " coins in your account.\n";
					}
				}
				break;
			case 2:
				if (savings <= 0) {
					std::cout << "Sorry, you can not make a withdrawal at this time!\n";
				}
				else {
					std::cout << "Okay, you currently have " << savings << " coins in your account.\n"
						<< "How much would you like to withdraw? ";
					std::cin >> amt;
					if (amt > savings) {
						std::cout << "Sorry, you do not have that much in your account!\n";
					}
					else if (amt <= 0) {
						std::cout << "Sorry, you have to withdraw a valid amount!\n";
					}
					else {
						bank::withdraw(amt);
						std::cout << "You now have " << savings << " coins in your account.\n";
					}
				}
				break;
			case 3:
				std::cout << "Have a great day!\n";
				exit = 1;
				std::this_thread::sleep_for(std::chrono::seconds(2));
				system("cls");
				break;
			default:
				std::cout << "Sorry, I don't know how to help you with that!\n";
			}
		} while (b.err(select) == 0);
	}
	if (madeDeposit == 1) {
		interest = interest + 0.2;
	}
}
