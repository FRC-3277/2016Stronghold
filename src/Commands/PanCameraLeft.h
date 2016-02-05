#ifndef PanCameraLeft_H
#define PanCameraLeft_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "WPILib.h"

class PanCameraLeft: public Command
{
private:
	//std::shared_ptr<CameraMount> camraMount;
	std::shared_ptr<CameraMount> camraMount;

public:
	PanCameraLeft();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
