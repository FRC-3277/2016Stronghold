#include "TiltCameraUp.h"

TiltCameraUp::TiltCameraUp()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::camraMount.get());
}

// Called just before this Command runs the first time
void TiltCameraUp::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void TiltCameraUp::Execute()
{
	Robot::camraMount.get()->TiltUp();
}

// Make this return true when this Command no longer needs to run execute()
bool TiltCameraUp::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void TiltCameraUp::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TiltCameraUp::Interrupted()
{

}
