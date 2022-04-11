#include "world.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>

world::world(int a) {
	region = a;
	inflation = a * 0.2;
	switch (a) {
	case 0:
		num_encounters = 4;
		break;
	case 1:
		num_encounters = 5;
		break;
	case 2:
		num_encounters = 7;
		break;
	case 3:
		num_encounters = 9;
		break;
	case 4:
		num_encounters = 12;
		break;
	default:
		break;
	}
}

short world::encounter_val() {
		return rand() % 4;
}

void world::regionIntro(short a) {
	switch (a) {
	case 0:
		system("cls");
		std::cout << "~~~YEAR 5023~~~\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << std::endl << "The world we live on is currently involved in intergalactic war affairs with many of our neighboring galaxies.\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << "The Earth is one of only a few hundred remaining populations in our galaxy to help defend against the impending threat of the other galaxies.\n";
		std::this_thread::sleep_for(std::chrono::seconds(8));
		std::cout << std::endl << "You are a member of the legendary Genesis Corps., known for their purpose of inspiring and maintaining universal peace.\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << "You were recently hired to be a part of the Intergalactic Office of Security Negotiations and Agreements,\n"
			<< "where you will be spending your time traveling intergalactically to present negotiations and secure agreements"
			<< " between our galaxy and the many realms and galaxies across the universe.\n";
		std::this_thread::sleep_for(std::chrono::seconds(12));

		system("cls");
		std::cout << "On your very first day post-training, your department has sent you out with one task...\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << std::endl << "For your first task, you will travel to the Outer District to gain the favor of Emperor Draconus of the Drakain Realm.\n";
		std::this_thread::sleep_for(std::chrono::seconds(8));

		system("cls");
		std::cout << "You have been issued a standard phaser pistol and regenerative plasma shielding for your deployment...\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << std::endl << "[ATK] +20\n" << "[DEF] +20\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << std::endl << "You have also been given 1000 credits to assist you on your travels.";
		std::this_thread::sleep_for(std::chrono::seconds(8));

		system("cls");
		std::cout << "On board your ship, you meet a little robot who springs to life as you approach...\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << std::endl << "Zero: Greetings, captain. I am Zero! I will help guide you on your mission.\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << "Before we leave port, let's go visit the bank and open an account.\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << "Many regions outside of the galactic core have extremely high prices. You'll need the galactic bank's hefty loyalty benefits to combat these prices.\n";
		std::this_thread::sleep_for(std::chrono::seconds(6));
		std::cout << "From there, we can visit a shop and see if we can upgrade your gear.\n";
		std::this_thread::sleep_for(std::chrono::seconds(8));

		system("cls");

		break;
	case 1:
		std::cout << "Zero: Alright captain, let's be on our way!\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << std::endl << "You return to your ship and set course for the Drakain realm.\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << "Zero: Each new location you visit, you will have multiple encounters with enemies. Watch your stats closely!\n";
		std::this_thread::sleep_for(std::chrono::seconds(6));

		system("cls");
		std::cout << "You arrive in the hostile Drakain realm. The guards here will not greet you kindly.\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << "Before entering the realm proper, you come across this region's bank...\n";
		std::this_thread::sleep_for(std::chrono::seconds(6));
		system("cls");
		break;
	case 2:
		std::cout << "After reaching the world of Drakain and fighting your way through the horrific Drakonic Castle, you were finally able to reach Emperor Draconus in his throne room.\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << "Within only minutes, he agrees to the negotiations presented by the Genesis Corps, securing the alliance of the Drakain Realm with the humans of our home galaxy.\n";
		std::this_thread::sleep_for(std::chrono::seconds(6));

		system("cls");
		std::cout << "Not very soon after winning over the Drakain Realm, a brief transmission is sent from Genesis Corps HQ.\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << "You have a new task to deliver supplies to the Planet Widren of the Ghost District, known very well throughout the universe\n"
			<< "for their lack of resources and crumbling economy, but a very strong military force.\n";
		std::this_thread::sleep_for(std::chrono::seconds(8));

		system("cls");
		std::cout << "The first of your supplies to bring to the Planet Widren is water.\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << "There is only one spot in the many galaxies one could find copoious amounts of pure water that is easily intergalactically transportable -- the Arcane Falls.\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << "The Arcane Falls are guarded by extremely beautiful, but equally powerful Sirens, with voices powerful enough to sway even the strongest of minds to their will.\n";
		std::this_thread::sleep_for(std::chrono::seconds(6));
		system("cls");

		std::cout << "You have arrived at the Arcane Falls.\n" << std::endl;
		break;
	case 3:
		std::cout << "The battles were hard fought, but in the end, you were finally able to best the terrifyingly beautiful beasts,\n"
			<< "striking your mark upon history and securing the water needed for your negotiations with Planet Widren.\n";
		std::this_thread::sleep_for(std::chrono::seconds(6));
		std::cout << "With the overwhelming feeling of victory and the forsight of a conflict soon to be quelled, you left the Arcane Falls,\n"
			<< "in search of the next set of resources to collect for the people of Planet Widren.\n";
		std::this_thread::sleep_for(std::chrono::seconds(8));
		std::cout << std::endl << "As you made your way to your next location, you recieved a new transmission from the Genesis Corps HQ.\n"
			<< "The amazing world of Technocosm, with all of your necessary materials, is currently under siege.\n";
		std::this_thread::sleep_for(std::chrono::seconds(6));

		system("cls");
		std::cout << "Making quick haste in order to help prevent the siege from continuing, you accelerate even quick towards the unsuspecting world.\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << "On arrival, you can see that the damage is already catastrophic. Cities that used to be bustling with energy and intimidating with towering technological structures has been reduced to miles upon miles of ruin.\n";
		std::this_thread::sleep_for(std::chrono::seconds(6));
		std::cout << std::endl << "It is your job to do what you can to try and help fend off some of these invaders while also obtaining the supplies you require for the Planet Widren.\n";
		std::this_thread::sleep_for(std::chrono::seconds(8));

		system("cls");
		std::cout << "You land in a relatively untouched settlement, just outside a major battle front.\n";
		std::this_thread::sleep_for(std::chrono::seconds(4));
		std::cout << "Zero: Foreign invaders have left Technocosm in ruins! Due to an unstable economy, prices here will be much higher than they were at previous locations. Keep saving and be wise about your spending!\n";
		std::this_thread::sleep_for(std::chrono::seconds(6));

		system("cls");
		break;
	case 4:
		system("cls");

		std::cout << "As the siege seemed to increase in intensity, you managed to run throughand briefly incapacitate many of the invaders surrounding an invading ship.With the invaders incapacitatedand unable to stop you,\n"
			<< "you took control of the ship and sent it barrelling straight towards the invading mothership with weapons blazing.\n";
		std::this_thread::sleep_for(std::chrono::seconds(6));
		std::cout << "With no more than mere seconds left, you rocketed yourself out from the kamikaze shipand released your extremely convenient parachute just as the ship made impact.\n";
		std::this_thread::sleep_for(std::chrono::seconds(6));
		std::cout << std::endl << "In no time at all, many of the invading ships began to plummet towards the ground. Lucky enough for you (and the many cities of Technocosm), the invaders themselves were no more than pawns controlled by the mothership.\n"
			<< "Now that the ship had been virtually destroyed, there was nothing left to control the catastrophic invasion that had started.\n";
		std::this_thread::sleep_for(std::chrono::seconds(8));
		std::cout << "As you made it back to the ground, you were greeted generously by a short man with a very wide grin, and hovering behind him was a giant container.The short man introduced himself as President Torus, the leader of Technocosm.\n"
			<< "He thanked you dearly for your efforts in saving his world. He mentioned that only minutes before the start of the invasion, he had recieved a transmission from the Genesis Corps,\n"
			<< "requesting the technologically advanced supplies to be provided to assist the Planet Widren.With no thought at all, he graciously gave you the towereing container, which was filled to the brim with all kinds of futuristic technologies.\n"
			<< "President Torus then said his goodbyesand sent you on your way.\n";
		std::this_thread::sleep_for(std::chrono::seconds(20));

		system("cls");
		std::cout << "Now that you have all of the materials necessary, you can now make your final trip accross the universe to the Ghost District, where you will finally be able to reach Planet Widren.\n";
		std::this_thread::sleep_for(std::chrono::seconds(6));
		std::cout << "The trip through the universe was very smooth and took only about a day and a half at most. After finally reaching the desert planet, you set down your ship on the outskirts of the city.\n";
		std::this_thread::sleep_for(std::chrono::seconds(6));
		std::cout << std::endl << "The city was deserted for the most part, with a few occasional red - colored citizens making their way through alleyways and other more hidden spots --  something seemed off.\n";
		std::this_thread::sleep_for(std::chrono::seconds(12));

		system("cls");
		std::cout << "Zero: This town seems deserted...Unfortunately though, despite the lack of citizens, the inflation rate of this planet has gone through the roof! I hope you have saved and spent your money wisely.\n"
			<< "This is your last location, but also the most difficult of them all. Be smart and strategic and show this planet how the Genesis Corps rolls!\n";
		std::this_thread::sleep_for(std::chrono::seconds(8));
		break;
	}
}

short world::getNum_Encounters() {
	return num_encounters;
}

float world::getInflation() {
	return inflation;
}