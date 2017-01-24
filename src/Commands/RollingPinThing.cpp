https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277https://github.com/FRC-3277/St3ampunk4lyfe3277#include "RollingPinThing.h"

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
	printf("Rolling:Execute\n");
	if(Robot::getInstance().IsAutonomous() == true)
	{printf ("I'm here %d\n", hasEatenBall);
		TimeCount += 0.02;

		if(hasEatenBall == true){
			printf("Working");
			Robot::boulderBlaster.get()->EatBall();
		}
		else{
			printf("Working2");
			Robot::boulderBlaster.get()->SpitBallOut();}

	}
	else if (Robot::oi.get()->getXBoxController2().get()->GetRawButton(SPIT_BALL_BUTTON) == true){
		printf("Still working");
		Robot::boulderBlaster.get()->EatBall();
		printf("EatBall\n");
	}
	else if (Robot::oi.get()->getXBoxController().get()->GetRawButton(EAT_BALL_BUTTON)){
		printf("I'm still working");
		Robot::boulderBlaster.get()->SpitBallOut();
		printf("SpitOut\n");
	}
	else
	{
		Robot::boulderBlaster.get()->StopMotor();
		finished = true;
		printf("STOP\n");
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
