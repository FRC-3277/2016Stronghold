#ifndef TiltCameraDown_H
#define TiltCameraDown_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "WPILib.h"

class TiltCameraDown: public Command
{
public:
	TiltCameraDown();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
