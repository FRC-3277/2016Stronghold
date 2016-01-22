#ifndef DriveWithJoystick_H
#define DriveWithJoystick_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveWithJoystick: public Subsystem
{
private:
	CANJaguar right;
	CANJaguar left;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	void setdrive(float speed);
	void openmotors();
	DriveWithJoystick();
	void InitDefaultCommand();
};

#endif
