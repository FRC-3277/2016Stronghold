#ifndef ArmControl_H
#define ArmControl_H

#include "WPILib.h"
#include "../Robot.h"
#include "../OI.h"

class ArmControl: public Command
{
public:
	ArmControl();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
