#ifndef RollingPinThing_H
#define RollingPinThing_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../Subsystems/BoulderBlaster.h"
#include "../Robot.h"

class RollingPinThing: public Command
{
private:
	bool finished = false;
public:
	RollingPinThing();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
