#include "title.h"

/*
 * title.cpp
 *
 *  Created on: Apr 7, 2022
 *      Author: chazdooley
 */

#include "title.h"
#include <iostream>
#include <string>
#include <thread>
#include <stdlib.h>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;


title::title() {
	// TODO Auto-generated constructor stub

}

void title::newPlayerIntro(bool a) {
	
	if (a == 0) {
		system("cls");

		cout << "Hello Player!" << endl;

		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(2));

		cout << "Welcome to The Quests of Genesis" << endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1500));

		cout << "~ Press ENTER to continue ~" << endl;

		cin.ignore();
		system("cls");

		cout << "My name is Zero and I am here to guide you on your amazing quest!" << endl;
		std::this_thread::sleep_for(std::chrono::seconds(4));

		cout << "First, I would like to show you to your main menu..." << endl;
		std::this_thread::sleep_for(std::chrono::seconds(4));

		system("cls");

		cout << endl;
		cout << "============================================= \n";
		cout << " \t\t MAIN MENU \t \n";
		cout << "============================================= \n\n";
		cout << "[1] NEW GAME \n";
		cout << "[2] LOAD GAME \n";
		cout << "[3] HELP \n";
		cout << "[4] ABOUT \n";
		cout << "[5] EXIT GAME \n";

		std::this_thread::sleep_for(std::chrono::seconds(4));

		cout << endl << endl << "As you can see here, you have multiple options..." << endl;
		std::this_thread::sleep_for(std::chrono::seconds(2));

		cout << "[1] NEW GAME -- Starts a new game with new character" << endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1500));

		cout << "[2] LOAD GAME -- Load a previously existing save with an existing character" << endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1500));

		cout << "[3] HELP -- Tips and User Guides" << endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1500));

		cout << "[4] ABOUT -- About the game" << endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1500));

		cout << "[5] EXIT GAME -- Terminates the game" << endl;

		std::this_thread::sleep_for(std::chrono::seconds(6));

		system("cls");

		cout << "Now you know the basics!" << endl;

		std::this_thread::sleep_for(std::chrono::seconds(2));

		cout << "I'll leave you to it. Enjoy the world of ___________!" << endl;

		std::this_thread::sleep_for(std::chrono::seconds(4));

		system("cls");
	}
}

void title::startingMainMenu() {
	cout << endl;
	cout << "============================================= \n";
	cout << " \t\t MAIN MENU \t \n";
	cout << "============================================= \n\n";
	cout << "[1] NEW GAME \n";
	cout << "[2] LOAD GAME \n";
	cout << "[3] HELP \n";
	cout << "[4] ABOUT \n";
	cout << "[5] EXIT GAME \n";
}


char title::mainMenu() {
	cout << endl;
	cout << "============================================= \n";
	cout << " \t\t MAIN MENU \t \n";
	cout << "============================================= \n\n";
	cout << "[1] NEW GAME \n";
	cout << "[2] LOAD GAME \n";
	cout << "[3] HELP \n";
	cout << "[4] ABOUT \n";
	cout << "[5] EXIT GAME \n";

 char selection;
	cout << endl << "MAKE YOUR SELECTION: "; cin >> selection;

	bool isTrue;



	do {
		if (selection=='1' || selection == '2' || selection == '3' || selection == '4' || selection == '5' || selection == '6') {
			isTrue = true;
		}
		else {
			isTrue = false;
		}

		if (isTrue == false) {
			cout << "~~ INVALID SELECTION ~~" << endl;
			cout << "MAKE YOUR SELECTION: "; 
			cin >> selection;
		}


	switch (selection) {

	case '1':
		return selection;
		break;

	case '2':
		return selection;
		break;

	case '3':
		this->helpMenu();
		break;

	case '4':
		this->aboutPage();
		break;

	case '5':
		system("cls");
		cout << endl << "Goodbye for now! Hope to see you soon!";
		cout << endl;
		return selection;
		break;

	case '6':
		return selection;
		break;

	default:

		break;
	}
	} while (isTrue == false);
}

void title::helpMenu() {
	system("cls");

	cout << "============================================= \n";
	cout << " \t\t HELP MENU \t \n";
	cout << "============================================= \n\n";
	cout << " 1. \n";

	sleep_for(seconds(4));

	cout << endl << "RETURN TO MAIN MENU?" << endl;

	system("pause");

	system("cls");

	mainMenu();
}

void title::aboutPage() {
	system("cls");

	cout << "======================================== \n";
	cout << " \t\t ABOUT \t \n";
	cout << "======================================== \n\n";
	cout << "[ KENNESAW STATE UNIVERSITY 2022 ]" << endl;
	cout << "[ CSE 1321 HONORS LECTURE ]" << endl;
	cout << "[ GAME DEVELOPERS: ]\n~Storyboard/Menu Framing: CHAZ DOOLEY~ \n~Object and Logic Implementation: TIMOTHY HUNT~\n~Object Programming: STEVEN SOOPAL~\n~Object and Logic Programming: MATTTHEW WEBSTER~" << endl;

	sleep_for(seconds(4));


	cout << endl << "RETURN TO MAIN MENU?" << endl;

	system("pause");

	system("cls");

	mainMenu();
}
