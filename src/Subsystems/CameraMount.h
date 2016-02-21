#ifndef CameraMount_H
#define CameraMount_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class CameraMount: public Subsystem
{
private:
	std::shared_ptr<Servo> camraPanServo;
	std::shared_ptr<Servo> camraTiltServo;

	std::shared_ptr<CameraMount> camraMount;

	float panAngle;
	float tiltAngle;

public:
	CameraMount();
	void InitDefaultCommand();

	void panLeft();
	void panRight();
	void TiltUp();
	void TiltDown();

};

#endif
