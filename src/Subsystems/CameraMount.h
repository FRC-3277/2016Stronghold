#ifndef CameraMount_H
#define CameraMount_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class CameraMount: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	std::shared_ptr<Servo> camraPanServo;
	std::shared_ptr<Servo> camraPanServo;

	std::shared_ptr<CameraMount> camraMount;

	float angle;

public:
	CameraMount();
	void InitDefaultCommand();

	void panLeft();
	void panRight();
	void TiltUp();
	void TiltDown();

};

#endif
