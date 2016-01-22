#ifndef DriveRobot_H
#define DriveRobot_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveRobot: public CommandBase
{
public:
	DriveRobot();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
