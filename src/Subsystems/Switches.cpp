#include "Switches.h"
#include "../RobotMap.h"

Switches::Switches() :
		Subsystem("Switches")
{
	Switch0 = RobotMap::Switch0;
	Switch1 = RobotMap::Switch1;
	Switch2 = RobotMap::Switch2;
	Switch3 = RobotMap::Switch3;
	Switch4 = RobotMap::Switch4;
	Switch5 = RobotMap::Switch5;
	Switch6 = RobotMap::Switch6;
	Switch7 = RobotMap::Switch7;
	Switch8 = RobotMap::Switch8;
	Switch9 = RobotMap::Switch9;
}

void Switches::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

int Switches::RetrieveSwitches()
{
	int value =
		(Switch0.get()->Get() << 0) +
		(Switch1.get()->Get() << 1) +
		(Switch2.get()->Get() << 2) +
		(Switch3.get()->Get() << 3) +
		(Switch4.get()->Get() << 4) +
		(Switch5.get()->Get() << 5) +
		(Switch6.get()->Get() << 6) +
		(Switch7.get()->Get() << 7) +
		(Switch8.get()->Get() << 8) +
		(Switch9.get()->Get() << 9);
	return value;
}

