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

void world::regionIntro(short a) {
	switch (a) {
	case 0:
		std::cout << "This is the intro region, you will find a tutorial here!";
		std::this_thread::sleep_for(std::chrono::seconds(3));
		system("cls");
		break;
	case 1:
		std::cout << "This is the first region, you will encounter goblins here.";
		std::this_thread::sleep_for(std::chrono::seconds(3));
		system("cls");
		break;
	case 2:
		std::cout << "This is the second region, you will encounter skeletons here.";
		std::this_thread::sleep_for(std::chrono::seconds(3));
		system("cls");
		break;
	case 3:
		std::cout << "This is the third region, you will encounter trolls here.";
		std::this_thread::sleep_for(std::chrono::seconds(3));
		system("cls");
		break;
	}
}

short world::getNum_Encounters() {
	return num_encounters;
}

void world::setInflation(short a) {
	inflation = a * 0.2;
}

float world::getInflation() {
	return inflation;
}