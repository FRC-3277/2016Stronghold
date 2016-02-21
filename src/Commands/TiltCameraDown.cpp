#include "TiltCameraDown.h"

TiltCameraDown::TiltCameraDown()
{
	Requires(Robot::camraMount.get());
}

void TiltCameraDown::Initialize()
{

}

void TiltCameraDown::Execute()
{
	Robot::camraMount.get()->TiltDown();
}

bool TiltCameraDown::IsFinished()
{
	return true;
}

void TiltCameraDown::End()
{

}

void TiltCameraDown::Interrupted()
{

}
