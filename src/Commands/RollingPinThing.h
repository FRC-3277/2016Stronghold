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
	float TimeCount = 0, TimeStop = 0;
public:
	RollingPinThing();
	RollingPinThing(float a);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
