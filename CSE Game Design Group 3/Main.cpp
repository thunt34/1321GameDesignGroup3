#include <string>
#include <iostream>
#include "bank.h"

int main()
{
    int current_wallet = 300;
    int account = 650;

    bank b1(account, current_wallet);

    b1.interact();

}