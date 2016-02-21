#include "RollingPinThing.h"

static bool hasEatenBall = false;

RollingPinThing::RollingPinThing()
{
	Requires(Robot::boulderBlaster.get());
}

RollingPinThing::RollingPinThing(float a)
{
	Requires(Robot::boulderBlaster.get());
	TimeStop = a;
	hasEatenBall = false;
}

void RollingPinThing::Initialize()
{
	TimeCount = 0;
}

void RollingPinThing::Execute()
{
	finished = false;

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

bool RollingPinThing::IsFinished()
{

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
}

void RollingPinThing::End()
{
	printf("Roller End");
	Robot::boulderBlaster.get()->StopMotor();
}

void RollingPinThing::Interrupted()
{

}
