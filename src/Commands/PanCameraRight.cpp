#include "PanCameraRight.h"
#include "Subsystems/CameraMount.h"

PanCameraRight::PanCameraRight() : Command()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::camraMount.get());
}

// Called just before this Command runs the first time
void PanCameraRight::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void PanCameraRight::Execute()
{
	Robot::camraMount.get()->panRight();
}

// Make this return true when this Command no longer needs to run execute()
bool PanCameraRight::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void PanCameraRight::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PanCameraRight::Interrupted()
{

}
