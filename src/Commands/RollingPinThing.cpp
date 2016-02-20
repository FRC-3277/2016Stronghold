#include "RollingPinThing.h"

static bool hasEatenBall = false;

RollingPinThing::RollingPinThing()
{
	Requires(Robot::boulderBlaster.get());
}

RollingPinThing::RollingPinThing(float a)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::boulderBlaster.get());
	TimeStop = a;
	hasEatenBall = false;
}

// Called just before this Command runs the first time
void RollingPinThing::Initialize()
{
	TimeCount = 0;
}

// Called repeatedly when this Command is scheduled to run
void RollingPinThing::Execute()
{
	finished = false;

	//IsAutonomous
	if(Robot::getInstance().IsAutonomous() == true)
	{printf ("I'm here %d\n", hasEatenBall);
		TimeCount += 0.02;

		if(hasEatenBall == false){
			printf("Working");
			Robot::boulderBlaster.get()->EatBall();
		}
		else{
			printf("Working2");
			Robot::boulderBlaster.get()->SpitBallOut();}

	}
	else if (Robot::oi.get()->getXBoxController().get()->GetRawButton(7) == true){
		printf("Still working");
		Robot::boulderBlaster.get()->EatBall();
	}
	else if (Robot::oi.get()->getXBoxController().get()->GetRawButton(8)){
		printf("I'm still working");
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
	if(Robot::getInstance().IsAutonomous() == true)
	{
	if (TimeCount > TimeStop)
	{
		printf("Setting hasEatenball = true\n");
		hasEatenBall = !hasEatenBall;
		return true;
	}
	else
		return false;
	}

	return finished;
	//}
	//return false;
}

// Called once after isFinished returns true
void RollingPinThing::End()
{
	printf("Roller End");
	Robot::boulderBlaster.get()->StopMotor();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RollingPinThing::Interrupted()
{

}
