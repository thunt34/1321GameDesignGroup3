/*
 * titlescreen.cpp
 *
 *  Created on: Apr 6, 2022
 *      Author: chazdooley
 */

//All that is left is to insert a list of HELP entries to assist the user as they go through their journey

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include "title.h"

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;



int main (){

	system("clear");

	cout << "Hello Player!" << endl;

	sleep_for(seconds(1));
	sleep_until(system_clock::now() + seconds(2));

	cout << "Welcome to the Genesis Corps!" << endl;
	sleep_for(milliseconds(1500));

	cout << "~ Press ENTER to continue ~" << endl;

	cin.ignore();
	system("clear");


	string username;
	cout << "What would you like to be called?" << endl;
	cout << "Enter your username: "; getline(cin, username);

	system("clear");

	cout << "Hello " << username << "! Nice to meet you. " << endl;
	sleep_for(seconds(1));

	cout << "My name is Zero and I am here to guide you on your amazing quests!" << endl;
	sleep_for(seconds(4));

	cout << "First, I would like to show you to your main menu..." << endl;
	sleep_for(seconds(4));


	title t;


	t.startingMainMenu();

	sleep_for(seconds(4));

	cout << endl << endl << "As you can see here, you have multiple options..." << endl;
	sleep_for(seconds(2));

	cout << "[1] NEW GAME -- Starts a new game with new character" << endl;
	sleep_for(milliseconds(1500));

	cout << "[2] LOAD GAME -- Load a previously existing save with an existing character" << endl;
	sleep_for(milliseconds(1500));

	cout << "[3] HELP -- Tips and User Guides" << endl;
	sleep_for(milliseconds(1500));

	cout << "[4] ABOUT -- About the game" << endl;
	sleep_for(milliseconds(1500));

	cout << "[5] EXIT GAME -- Terminates the game" << endl;

	sleep_for(seconds(6));

	system("clear");

	cout << "Now you know the basics!" << endl;

	sleep_for(seconds(2));

	cout << "I'll leave you to it. Enjoy the Quests of Genesis!" << endl;

	sleep_for(seconds(4));


	system("clear");


	t.mainMenu();
}
