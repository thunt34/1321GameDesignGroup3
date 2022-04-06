#pragma once
#include <string>

class bank {
private:
	short region;
	int savings, wallet;

public:
	bank(short a, int b, int c);
	bank(int a, int b);
	int withdraw(int amt);
	int deposit(int amt);
	void interact();

};

/*
	int savings, wallet, amt;
	short input = 0, exit = 0;

	wallet = 300;
	savings = 0;

	cout << "Welcome to the bank! You currently have " << savings << " coins in your account!\n";

	while (exit == 0) {
		exit = 0;
		cout << endl << "What would you like to do? \n"
			<< "[1] Deposit\n" << "[2] Withdraw\n" << "[3] Exit\n";
		cin >> input;
		switch (input) {
		case 1:
			if (wallet <= 0) {
				cout << "Sorry, you can not make a deposit at this time!\n";
			}
			else {
				cout << "Okay, you currently have " << wallet << " coins in your wallet.\n"
					<< "How much would you like to deposit? ";
				cin >> amt;
				if (amt > wallet) {
					cout << "Sorry, you do not have that much in your wallet!\n";
				}
				else if (amt <= 0) {
					cout << "Sorry, you have to put in a valid amount!\n";
				}
				else {
					savings = savings + amt;
					wallet = wallet - amt;
					cout << "You now have " << savings << " coins in your account.\n";
				}
			}
			break;
		case 2:
			if (savings <= 0) {
				cout << "Sorry, you can not make a withdrawal at this time!\n";
			}
			else {
				cout << "Okay, you currently have " << savings << " coins in your account.\n"
					<< "How much would you like to withdraw? ";
				cin >> amt;
				if (amt > savings) {
					cout << "Sorry, you do not have that much in your account!\n";
				}
				else if (amt <= 0) {
					cout << "Sorry, you have to withdraw a valid amount!\n";
				}
				else {
					savings = savings - amt;
					wallet = wallet + amt;
					cout << "You now have " << savings << " coins in your account.\n";
				}
			}
			break;
		case 3:
			cout << "Have a great day!\n";
			exit = 1;
			break;
		default:
			cout << "Sorry, I don't know how to help you with that!\n";
		}
	}
	*/