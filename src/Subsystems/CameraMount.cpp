#include "CameraMount.h"
#include "../RobotMap.h"
#include "../Commands/PanCameraLeft.h"
#include "../Commands/PanCameraRight.h"

const int SPEED = 1;

CameraMount::CameraMount() :
		Subsystem("CameraMount")
{
	panAngle = 0;
	tiltAngle = 0;
	camraPanServo = RobotMap::camraPanServo;
	camraTiltServo = RobotMap::camraTiltServo;
}

void CameraMount::InitDefaultCommand()
{

}

void CameraMount::panLeft(){
	panAngle = panAngle - SPEED;
	if(panAngle < 0)
		panAngle = 0;

	camraPanServo.get()->SetAngle(panAngle);
}

void CameraMount::panRight(){
	panAngle = panAngle + SPEED;
	if(panAngle > 180)
		panAngle = 180;

	camraPanServo.get()->SetAngle(panAngle);
}

void CameraMount::TiltUp(){
	tiltAngle = tiltAngle + SPEED;
		if(tiltAngle > 180)
			tiltAngle = 180;

		camraTiltServo.get()->SetAngle(tiltAngle);
}

void CameraMount::TiltDown(){
	tiltAngle = tiltAngle - SPEED;
		if(tiltAngle < 0)
			tiltAngle = 0;

		camraTiltServo.get()->SetAngle(tiltAngle);
}
