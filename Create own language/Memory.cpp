#include "Memory.h"

void Memory::SetRamValue(int address, int value)
{
	//todo: Make sure index 0-99
	//before setting
	//todo: Make sure each value = 4 digits
	Ram[address] = value;
}

void Memory::GetRamValue(int address)
{
	//return Ram[value];
}
