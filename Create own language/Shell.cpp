#include "Shell.h"
#include <iostream>
#include <string>

void Shell::InCommandFromUser(std::string CommandInput)
{
	ProcessCommand(CommandInput);
}

void Shell::ProcessCommand(std::string CommandtoInstruct)
{
	if (CommandtoInstruct == "Help") {
		//Display Help Screen
		DisplayHelp();
	}
	else if (CommandtoInstruct == "Displaymem" || CommandtoInstruct == "dm") {
		//todo: Display entire contents of mem.
		std::cout << "\nINVALID INSTRUCTION";
	}
	else if (CommandtoInstruct == "Load" || CommandtoInstruct == "load") {
		//todo: Stuff program from file into memory.
		//into array
		std::cout << "\nINVALID INSTURCTION";
	}
	else if (CommandtoInstruct == "Run" || CommandtoInstruct == "RUN") {
		//todo: Runs the shell.
		std::cout << "\nINVALID INSTRUCTION";
	}
	else if (CommandtoInstruct == "Exit" || CommandtoInstruct == "exit") {
		//todo: Exits the shell and program.
		std::cout << "\nINVALID INSTRUCTION";
	}
}
void Shell::DisplayHelp()
{
	std::cout << "\n\n\t\t###### HELP SECTION ######\n";
	std::cout << "\nHelp - displays help menu";
	std::cout << "\nLoad -  program into memory";
	std::cout << "\nRuns - Runs program in memory";
	std::cout << "\nDisplaymem - Display entire content of memory";
	std::cout << "\nExit - Exits the shell";
}

void Shell::
