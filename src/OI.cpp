#include "OI.h"
#include "RobotMap.h"

OI::OI() : stick(JOYSTICK_CONTROLLER)
{
	JoystickButton *trigger = new JoystickButton(stick, 1);
	//trigger->WhenPressed(new DriveRobot());
	// Process operator interface input here.
}

float OI::getjoystickyaxis(){
	return stick.GetY();
}
