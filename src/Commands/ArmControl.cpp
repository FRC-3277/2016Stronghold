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
		if (Robot::oi.get()->getXBoxController2().get()->GetRawButton(ARM_RAISE_BUTTON) == true){
			printf("ArmControl:raiseArm\n");
			Robot::lifter.get()->raiseArm();
		}
		else if (Robot::oi.get()->getXBoxController2().get()->GetRawButton(ARM_LOWER_BUTTON)){
			printf("ArmControl:LowerArm\n");
			Robot::lifter.get()->lowerArm();
		}
		else if (Robot::oi.get()->getXBoxController2().get()->GetRawButton(ARM_EXTEND_BUTTON)){
			printf("ArmControl:extendArm\n");
			Robot::lifter.get()->extendArm();
		}
		else if (Robot::oi.get()->getXBoxController2().get()->GetRawButton(ARM_WINCH_BUTTON)){
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
	if(Robot::oi.get()->getXBoxController2().get()->GetRawButton(ARM_RAISE_BUTTON) == false &&
		Robot::oi.get()->getXBoxController2().get()->GetRawButton(ARM_LOWER_BUTTON) == false &&
		Robot::oi.get()->getXBoxController2().get()->GetRawButton(ARM_EXTEND_BUTTON) == false &&
		Robot::oi.get()->getXBoxController2().get()->GetRawButton(ARM_WINCH_BUTTON) == false)
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
