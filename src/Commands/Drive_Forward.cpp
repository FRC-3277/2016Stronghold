#include "Drive_Forward.h"

Drive_Forward::Drive_Forward(float a)
{
	Requires(Robot::driveTrain.get());
	TimeStop = a;
}

void Drive_Forward::Initialize()
{
	Robot::driveTrain.get()->openmotors();
	TimeCount = 0;
}

void Drive_Forward::Execute()
{
	Robot::driveTrain.get()->setdrive(-.5, -.5);
	TimeCount += 0.02;
}

bool Drive_Forward::IsFinished()
{
	if (TimeCount > TimeStop)
		return true;
	else
		return false;
}

void Drive_Forward::End()
{
	Robot::driveTrain.get()->setdrive(0, 0);
}

void Drive_Forward::Interrupted()
{

}
