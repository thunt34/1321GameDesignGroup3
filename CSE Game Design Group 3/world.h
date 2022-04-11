#pragma once
#include <string>

class world {
private:
	short region, num_encounters;
	float inflation;

public:
	world(int a);
	short encounter_val();
	short getNum_Encounters();
	float getInflation();
	void regionIntro(short a);
};