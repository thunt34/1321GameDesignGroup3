#pragma once
#include <string>

class bank {
private:
	double interest;

public:
	int savings, wallet;
	bank(double a, int b, int c);
	bank(int a, int b);
	int withdraw(int amt);
	int deposit(int amt);
	void interact();

};