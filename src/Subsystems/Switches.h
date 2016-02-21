#ifndef Switches_H
#define Switches_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Switches: public Subsystem
{
private:
	std::shared_ptr<DigitalInput> Switch0;
	std::shared_ptr<DigitalInput> Switch1;
	std::shared_ptr<DigitalInput> Switch2;
	std::shared_ptr<DigitalInput> Switch3;
	std::shared_ptr<DigitalInput> Switch4;
	std::shared_ptr<DigitalInput> Switch5;
	std::shared_ptr<DigitalInput> Switch6;
	std::shared_ptr<DigitalInput> Switch7;
	std::shared_ptr<DigitalInput> Switch8;
	std::shared_ptr<DigitalInput> Switch9;
public:
	Switches();
	void InitDefaultCommand();
	int RetrieveSwitches();
};

#endif
