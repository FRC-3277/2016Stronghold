#include "DriveWithJoystick.h"
#include "../RobotMap.h"

DriveWithJoystick::DriveWithJoystick() :
		Subsystem("ExampleSubsystem"),
		right(RIGHT_MOTOR_JAGUAR_CAN_ID),
		left(LEFT_MOTOR_JAGUAR_CAN_ID)
{

}

void DriveWithJoystick::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveWithJoystick:: setdrive(float speed){
	right.Set(speed);
	left.Set(-speed);
}
void DriveWithJoystick:: openmotors(){
	right.SetControlMode(right.kPercentVbus);
	right.SetSafetyEnabled(true);
	right.Set(0);
	left.SetControlMode(left.kPercentVbus);
	left.SetSafetyEnabled(true);
	left.Set(0);
}
