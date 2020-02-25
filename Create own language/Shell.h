#pragma once
#include <string>
#include <iostream>

class Shell
{
public:
	void InCommandFromUser(std::string CommandInput);
private:
	//process instruction
	void ProcessCommand(std::string CommandtoInstruct);
	//Displaying Help
	void DisplayHelp();
	//Displaying Memory
	void DisplayMem();

};

