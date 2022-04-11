/*
 * title.h
 *
 *  Created on: Apr 7, 2022
 *      Author: chazdooley
 */

#include <iostream>
#ifndef TITLE_H_
#define TITLE_H_

using namespace std;

class title {
public:
	title();
	void newPlayerIntro(bool a);
	void startingMainMenu();
	short mainMenu();
	void helpMenu();
	void aboutPage();

};



#endif /* TITLE_H_ */