#ifndef TiltCameraUp_H
#define TiltCameraUp_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "WPILib.h"

class TiltCameraUp: public Command
{
public:
	TiltCameraUp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
