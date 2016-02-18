#include "Drive_Forward.h"

Drive_Forward::Drive_Forward(float a)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::driveTrain.get());
	TimeStop = a;
}

// Called just before this Command runs the first time
void Drive_Forward::Initialize()
{
	Robot::driveTrain.get()->openmotors();
	TimeCount = 0;
}

// Called repeatedly when this Command is scheduled to run
void Drive_Forward::Execute()
{
	Robot::driveTrain.get()->setdrive(-.5, -.5);
	TimeCount += 0.02;
}

// Make this return true when this Command no longer needs to run execute()
bool Drive_Forward::IsFinished()
{
	if (TimeCount > TimeStop)
		return true;
	else
		return false;
}

// Called once after isFinished returns true
void Drive_Forward::End()
{
	Robot::driveTrain.get()->setdrive(0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Drive_Forward::Interrupted()
{

}
