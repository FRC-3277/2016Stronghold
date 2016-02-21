#include <Commands/Turn.h>

Turn::Turn(float a, float leftspeed, float rightspeed)
{
	Requires(Robot::driveTrain.get());
	TimeStop = a;
	leftSpeed = -leftspeed;
	rightSpeed = -rightspeed;
}

void Turn::Initialize()
{
	Robot::driveTrain.get()->openmotors();
	TimeCount = 0;
}

void Turn::Execute()
{
	Robot::driveTrain.get()->setdrive(leftSpeed, rightSpeed);
	TimeCount += 0.02;
}

bool Turn::IsFinished()
{
	if (TimeCount > TimeStop)
		return true;
	else
		return false;
}

void Turn::End()
{
	Robot::driveTrain.get()->setdrive(0, 0);
}

void Turn::Interrupted()
{

}
