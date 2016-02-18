#include "TiltCameraDown.h"

TiltCameraDown::TiltCameraDown()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::camraMount.get());
}

// Called just before this Command runs the first time
void TiltCameraDown::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void TiltCameraDown::Execute()
{
	Robot::camraMount.get()->TiltDown();
}

// Make this return true when this Command no longer needs to run execute()
bool TiltCameraDown::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void TiltCameraDown::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TiltCameraDown::Interrupted()
{

}
