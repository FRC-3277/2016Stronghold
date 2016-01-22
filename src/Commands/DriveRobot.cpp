#include "DriveRobot.h"

DriveRobot::DriveRobot()
{ Requires(DriveWithJoystick);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void DriveRobot::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveRobot::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool DriveRobot::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveRobot::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveRobot::Interrupted()
{

}
