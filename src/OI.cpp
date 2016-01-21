#include "OI.h"

OI::OI() : stick(0)
{
	JoystickButton *trigger = new JoystickButton(stick, 1);
	trigger->WhenPressed(new DriveRobot());
	// Process operator interface input here.
}

float OI::getjoystickyaxis(){
	return stick.GetY();
}
