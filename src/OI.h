// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:

	std::shared_ptr<Joystick> xBoxController;

public:
	OI();

	std::shared_ptr<Joystick> getXBoxController();

	const int XBOX_A_BUTTON = 1;
	const int XBOX_B_BUTTON = 2;
	const int XBOX_X_BUTTON = 3;
	const int XBOX_Y_BUTTON = 4;
	const int XBOX_LEFT_SHOLDER_BUTTON = 5;
	const int XBOX_RIGHT_SHOLDER_BUTTON = 6;
	const int XBOX_BACK_BUTTON = 7;
	const int XBOX_START_BUTTON = 8;
	const int XBOX_LEFT_STICK_BUTTON = 9;
	const int XBOX_RIGHT_STICK_BUTTON = 10;

	const int XBOX_LEFT_STICK_X_AXIS = 0;
	const int XBOX_LEFT_STICK_Y_AXIS = 1;
	const int XBOX_LEFT_TRIGGER_AXIS = 2;
	const int XBOX_RIGHT_TRIGGER_AXIS = 3;
	const int XBOX_RIGHT_STICK_X_AXIS = 4;
	const int XBOX_RIGHT_STICK_Y_AXIS = 5;

};

#endif
