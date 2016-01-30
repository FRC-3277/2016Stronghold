#include "CameraMount.h"
#include "../RobotMap.h"

CameraMount::CameraMount() :
		Subsystem("ExampleSubsystem")
{
	angle = 0;
}

void CameraMount::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void CameraMount::panLeft(){
	angle = angle + 45;
	camraPanServo.get()->SetAngle(angle);
}

void CameraMount::panRight(){
	angle = angle - 45;
	camraPanServo.get()->SetAngle(angle);
}

void CameraMount::TiltUp(){

}

void CameraMount::TiltDown(){

}
