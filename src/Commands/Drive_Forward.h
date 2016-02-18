#ifndef Drive_Forward_H
#define Drive_Forward_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "WPILib.h"

class Drive_Forward: public Command
{
public:
	Drive_Forward(float a);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	float TimeCount = 0, TimeStop = 0;
};

#endif
