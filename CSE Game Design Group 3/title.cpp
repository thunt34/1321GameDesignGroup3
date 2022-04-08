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

void title::startingMainMenu(){
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


void title::mainMenu(){
	cout << endl;
	cout << "============================================= \n";
	cout << " \t\t MAIN MENU \t \n";
	cout << "============================================= \n\n";
	cout << "[1] NEW GAME \n";
	cout << "[2] LOAD GAME \n";
	cout << "[3] HELP \n";
	cout << "[4] ABOUT \n";
	cout << "[5] EXIT GAME \n";

	int selection;
		cout << endl << "MAKE YOUR SELECTION: "; cin >> selection;

		bool isTrue;



		do{
			if (selection == 1||selection == 2 ||selection == 3 ||selection == 4 ||selection == 5){
					isTrue = true;
				}
				else {
					isTrue = false;
				}

			if (isTrue == false){
				cout << "~~ INVALID SELECTION ~~" << endl;
			cout << "MAKE YOUR SELECTION: "; cin >> selection;
			}
		} while (isTrue == false);
		//
		switch (selection){

		case 1:
			//INSERT CODE
			break;

		case 2:
			//INSERT CODE
			break;

		case 3:
			this -> helpMenu();
			break;

		case 4:
			this -> aboutPage();
			break;

		case 5:
			system("clear");
			cout << endl << "Goodbye for now! Hope to see you soon!";
			cout << endl;
			break;

		default:

			break;
		}
	}

void title::helpMenu(){
	system("clear");

	cout << "============================================= \n";
	cout << " \t\t HELP MENU \t \n";
	cout << "============================================= \n\n";
	cout << " 1. \n";

	sleep_for(seconds(4));

	cout << endl << "RETURN TO MAIN MENU?" << endl;

	cout << "~ Press ENTER to continue ~" << endl;

	system("read");

	system("clear");

	mainMenu();
}

void title::aboutPage (){
	system("clear");

	cout << "======================================== \n";
	cout << " \t\t ABOUT \t \n";
	cout << "======================================== \n\n";
	cout << "[ KENNESAW STATE UNIVERSITY 2022 ]" << endl;
	cout << "[ CSE 1321 HONORS LECTURE ]" << endl;
	cout << "[ GAME DEVELOPERS: ]\n~ CHAZ DOOLEY ~ \n~ TIMOTHY HUNT ~\n~ STEVEN SOOPAL ~\n~ MATTTHEW WEBSTER ~ \n~ NICO WINDERWEEDLE ~" << endl;

	sleep_for(seconds(4));


	cout << endl << "RETURN TO MAIN MENU?" << endl;

	cout << "~ Press ENTER to continue ~" << endl;

	system("read");

	system("clear");

	mainMenu();
}


