#include "PanCameraLeft.h"
#include "Subsystems/CameraMount.h"

PanCameraLeft::PanCameraLeft() : Command()
{
	Requires(Robot::camraMount.get());
}

void PanCameraLeft::Initialize()
{

}

void PanCameraLeft::Execute()
{
	Robot::camraMount.get()->panLeft();
}

bool PanCameraLeft::IsFinished()
{
	return true;
}

void PanCameraLeft::End()
{

}

void PanCameraLeft::Interrupted()
{

}
