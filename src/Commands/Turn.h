#ifndef Turn_H
#define Turn_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "WPILib.h"

class Turn: public Command
{
public:
	Turn(float a, float leftspeed, float rightspeed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	float TimeCount = 0, TimeStop = 0;
	float leftSpeed = 0, rightSpeed = 0;
};

#endif
