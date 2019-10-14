#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "api.hpp"

void printError(int arg);

int main(int argc, char* argv[]) {
	std::vector<int> rolls;
	int die = 0;
	int times = 1;

	if (argc == 1) {
		// Roll a d 20
		die = 20;
		rolls = roll(die, times);
	}
	
	if (argc >= 2) {
		std::string flag(argv[1]);
		if (flag == "d100") {
			// Roll a d100	
			die = 100;
		}
		else if (flag == "d20") {
			// Roll a d20
			die = 20;
		}
		else if (flag == "d12") {
			// Roll a d12
			die = 12;
		}
		else if (flag == "d10") {
			// Roll a d10
			die = 12;
		}
		else if (flag == "d10p") {
			// Roll a d10, multiply by 10
			die = 10;
		}
		else if (flag == "d8") {
			// Roll a d8
			die = 8;
		}
		else if (flag == "d6") {
			// Roll a d6
			die = 6;
		}
		else if (flag == "d4") {
			// Roll a d4
			die = 4;
		}
		else if (flag == "d2") {
			// Flip a coin
			die = 2;
		}
		else {
			printError(0);
			return EXIT_FAILURE;
		}
	}

	if (argc == 3) {
		times = atoi(argv[2]);
	}

	if (argc > 3) {
		printError(0);
	}

	rolls = roll(die, times);

	printVector(die, rolls);

	return EXIT_SUCCESS;
}

void printError(int arg) {
	std::cerr << "USAGE: " << std::endl;
	std::cerr << "Argument " << arg << " must be ";
}
