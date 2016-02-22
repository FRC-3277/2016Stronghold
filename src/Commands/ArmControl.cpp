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
	printf("ArmControl:Execute\n");
	//if(/*RobotMap::TIMED_DISABLE_ARM && */DriverStation::GetInstance().GetMatchTime() >= 120)
	{
		if (Robot::oi.get()->getXBoxController().get()->GetRawButton(1) == true){
			printf("ArmControl:raiseArm\n");
			Robot::lifter.get()->raiseArm();
		}
		else if (Robot::oi.get()->getXBoxController().get()->GetRawButton(2)){
			printf("ArmControl:LowerArm\n");
			Robot::lifter.get()->lowerArm();
		}
		else if (Robot::oi.get()->getXBoxController().get()->GetRawButton(3)){
			printf("ArmControl:extendArm\n");
			Robot::lifter.get()->extendArm();
		}
		else if (Robot::oi.get()->getXBoxController().get()->GetRawButton(4)){
			printf("ArmControl:PullUp\n");
			Robot::lifter.get()->PullUp();
		}
		else{
			printf("ArmControl:Stop\n");
		}
	}
}

bool ArmControl::IsFinished()
{
	if(Robot::oi.get()->getXBoxController().get()->GetRawButton(1) == false &&
		Robot::oi.get()->getXBoxController().get()->GetRawButton(2) == false &&
		Robot::oi.get()->getXBoxController().get()->GetRawButton(3) == false &&
		Robot::oi.get()->getXBoxController().get()->GetRawButton(4) == false)
	{
		return true;
	}

	return false;
}

void ArmControl::End()
{
	Robot::lifter.get()->stopActuator();
	Robot::lifter.get()->Stop();
}

void ArmControl::Interrupted()
{

}
