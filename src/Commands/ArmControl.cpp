#include "ArmControl.h"

ArmControl::ArmControl(): Command ()
{
	Requires(Robot::lifter.get());
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void ArmControl::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ArmControl::Execute()
{
	if (Robot::oi.get()->getXBoxController().get()->GetRawButton(2) == true){
		Robot::lifter.get()->Raise();
	}
	else if (Robot::oi.get()->getXBoxController().get()->GetRawButton(1)){
		Robot::lifter.get()->PullUp();
	}

}

// Make this return true when this Command no longer needs to run execute()
bool ArmControl::IsFinished()
{
	if(Robot::oi.get()->getXBoxController().get()->GetRawButton(1) == false &&
			Robot::oi.get()->getXBoxController().get()->GetRawButton(2) == false)
	{
		return true;
	}

	return false;
}

// Called once after isFinished returns true
void ArmControl::End()
{
	Robot::lifter.get()->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmControl::Interrupted()
{

}
