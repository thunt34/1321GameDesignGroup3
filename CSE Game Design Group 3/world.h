#pragma once
#include <string>

class world {
private:
	short region, num_encounters;

public:
	world(short a);
	short encounter_val();
	short getNum_Encounters();
};