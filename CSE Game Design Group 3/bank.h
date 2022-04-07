#pragma once
#include <string>

class bank {
public:
	int savings, wallet;
	double interest;
	bank(double a, int b, int c);
	bank(int a, int b);
	int withdraw(int amt);
	int deposit(int amt);
	void interact();

};