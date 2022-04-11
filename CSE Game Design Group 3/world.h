#pragma once
#include <string>

class world {
private:
	short region, num_encounters;
	float inflation;

public:
	world(short a);
	short encounter_val();
	short getNum_Encounters();
	void setInflation(short a);
	float getInflation();
	void regionIntro(short a);
};