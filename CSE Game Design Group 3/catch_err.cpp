#include "catch_err.h"

catch_err::catch_err() {

}

int catch_err::getVal(std::string a) {
	if (a == "0" || a == "1" || a == "2" || a == "3" || a == "4" || a == "5" || a == "6" || a == "7" || a == "8" || a == "9") {
		return std::stoi(a);
	}
	else {
		return -1;
	}
}

bool catch_err::err(std::string a) {
	if (a == "0" || a == "1" || a == "2" || a == "3" || a == "4" || a == "5" || a == "6" || a == "7" || a == "8" || a == "9") {
		return 1;
	}
	else {
		return 0;
	}
}