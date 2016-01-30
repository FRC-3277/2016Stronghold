#include "PanCameraLeft.h"

PanCameraLeft::PanCameraLeft() : Command()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::camraMount);
}

// Called just before this Command runs the first time
void PanCameraLeft::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void PanCameraLeft::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool PanCameraLeft::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void PanCameraLeft::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PanCameraLeft::Interrupted()
{

}
