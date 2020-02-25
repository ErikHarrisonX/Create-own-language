#include <iostream>
#include <string>
#include <vector>
#include "Shell.h"
#include "Memory.h"


int main() {
	std::cout << "\nHello and welcome to the computerized world.";
	std::cout << "\n*****Please wait while the computer boots up.";

	Shell command_shell;
	std::cout << "\nThe computer is fully booted and ready, Instruction?\n";
	std::string UserCommand;
	getline(std::cin, UserCommand);

	command_shell.InCommandFromUser(UserCommand);



	/*Steps to do.
		Create a Computer Simulator with 100 memory locations starting at zero and ending at 99.
		
		-This simulator should use 4 - byte words.
		-Allow your computer simulator to take instructions or data in words.
		-Each machine language instruction or data size should be one word.
		-Each instruction should be positive.
		-Each data can be positive or negative.
		-The computer simulator should have an accumulator.
		-The computer simulator should have an instruction pointer.
		-You should be able to load the program source code from a text file.
		-The source code in the file will be formatted like this with different numbers.*/
	




	return 0;
}