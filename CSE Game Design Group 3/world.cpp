#include "world.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>

world::world(short a) {
	region = a;
	switch (a) {
	case 0:
		num_encounters = 4;
		break;
	case 1:
		num_encounters = rand() % 3 + 3;
		break;
	case 2:
		num_encounters = rand() % 3 + 5;
		break;
	case 3:
		num_encounters = rand() % 3 + 7;
		break;
	default:
		break;
	}
	std::cout << "Welcome to world " << region << "!\n";
}

short world::encounter_val() {
		return rand() % 4 + 1;
}

short world::getNum_Encounters() {
	return num_encounters;
}