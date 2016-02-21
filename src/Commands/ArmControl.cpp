#include "ArmControl.h"

ArmControl::ArmControl(): Command ()
{
	Requires(Robot::lifter.get());
}

void ArmControl::Initialize()
{

}

void ArmControl::Execute()
{
	if (Robot::oi.get()->getXBoxController().get()->GetRawButton(2) == true){
		Robot::lifter.get()->Raise();
	}
	else if (Robot::oi.get()->getXBoxController().get()->GetRawButton(1)){
		Robot::lifter.get()->PullUp();
	}
}

bool ArmControl::IsFinished()
{
	if(Robot::oi.get()->getXBoxController().get()->GetRawButton(1) == false &&
			Robot::oi.get()->getXBoxController().get()->GetRawButton(2) == false)
	{
		return true;
	}

	return false;
}

void ArmControl::End()
{
	Robot::lifter.get()->Stop();
}

void ArmControl::Interrupted()
{

}
