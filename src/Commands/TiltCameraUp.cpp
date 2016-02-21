#include "TiltCameraUp.h"

TiltCameraUp::TiltCameraUp()
{
	Requires(Robot::camraMount.get());
}

void TiltCameraUp::Initialize()
{

}

void TiltCameraUp::Execute()
{
	Robot::camraMount.get()->TiltUp();
}

bool TiltCameraUp::IsFinished()
{
	return true;
}

void TiltCameraUp::End()
{

}

void TiltCameraUp::Interrupted()
{

}
