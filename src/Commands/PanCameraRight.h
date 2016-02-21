#ifndef PanCameraRight_H
#define PanCameraRight_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "WPILib.h"

class PanCameraRight: public Command
{
private:
	std::shared_ptr<CameraMount> camraMount;

public:
	PanCameraRight();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
