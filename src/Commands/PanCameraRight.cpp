#include "PanCameraRight.h"
#include "Subsystems/CameraMount.h"

PanCameraRight::PanCameraRight() : Command()
{
	Requires(Robot::camraMount.get());
}

void PanCameraRight::Initialize()
{

}

void PanCameraRight::Execute()
{
	Robot::camraMount.get()->panRight();
}

bool PanCameraRight::IsFinished()
{
	return true;
}

void PanCameraRight::End()
{

}

void PanCameraRight::Interrupted()
{

}
