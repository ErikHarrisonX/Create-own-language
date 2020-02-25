#pragma once
class Memory
{
public:
	void SetRamValue(int address, int value);
	void GetRamValue(int address);
private:
	//0-99
	std::string Ram_m[100];
};

