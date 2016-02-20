#include "RollingPinThing.h"

RollingPinThing::RollingPinThing()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::boulderBlaster.get());
}

// Called just before this Command runs the first time
void RollingPinThing::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void RollingPinThing::Execute()
{
	finished = false;
	printf("BackButton:  %d\n", Robot::oi.get()->getXBoxController().get()->GetRawButton(7));
	printf("StartButton: %d\n", Robot::oi.get()->getXBoxController().get()->GetRawButton(8));

	printf("RollingPinThing: Execute\n");
	if (Robot::oi.get()->getXBoxController().get()->GetRawButton(7) == true){
		Robot::boulderBlaster.get()->EatBall();
	}
	else if (Robot::oi.get()->getXBoxController().get()->GetRawButton(8)){
		Robot::boulderBlaster.get()->SpitBallOut();
	}
	else
	{
		Robot::boulderBlaster.get()->StopMotor();
		finished = true;
	}
}

// Make this return true when this Command no longer needs to run execute()
bool RollingPinThing::IsFinished()
{

	//if(Robot::oi.get()->getXBoxController().get()->GetRawButton(7) == false)// &&
			//Robot::oi.get()->getXBoxController().get()->GetRawButton(8) == false)
	//{
		return finished;
	//}
	//return false;
}

// Called once after isFinished returns true
void RollingPinThing::End()
{
	Robot::boulderBlaster.get()->StopMotor();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RollingPinThing::Interrupted()
{

}
